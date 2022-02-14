
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct kvec {size_t iov_len; int * iov_base; } ;
struct iscsi_datain {size_t length; int offset; } ;
struct iscsi_conn {int conn_tx_hash; TYPE_1__* conn_ops; } ;
struct iscsi_cmd {int padding; size_t iov_data_count; size_t tx_size; int data_crc; int * pad_bytes; scalar_t__ orig_iov_data_count; struct kvec* iov_data; int * pdu; } ;
struct TYPE_2__ {scalar_t__ DataDigest; scalar_t__ HeaderDigest; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int *,size_t,int ,int *,size_t*) ;
 int FUNC_1 (int ,struct iscsi_cmd*,int ,int,size_t,int *) ;
 int FUNC_2 (struct iscsi_cmd*,struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_cmd*,struct kvec*,scalar_t__,int ,size_t) ;
 int FUNC_4 (struct iscsi_conn*) ;
 int FUNC_5 (struct iscsi_cmd*) ;
 int FUNC_6 (char*,size_t,...) ;

__attribute__((used)) static int
FUNC_7(struct iscsi_conn *VAR_2, struct iscsi_cmd *VAR_3,
         const struct iscsi_datain *VAR_4)
{
 struct kvec *VAR_5;
 u32 VAR_6 = 0, VAR_7 = 0;
 int VAR_8, VAR_9;

 VAR_5 = &VAR_3->iov_data[0];
 VAR_5[VAR_6].iov_base = VAR_3->pdu;
 VAR_5[VAR_6++].iov_len = VAR_1;
 VAR_7 += VAR_1;

 if (VAR_2->conn_ops->HeaderDigest) {
  u32 *VAR_10 = (u32 *)&VAR_3->pdu[VAR_1];

  FUNC_0(VAR_2->conn_tx_hash, VAR_3->pdu,
       VAR_1, 0, ((void*)0),
       VAR_10);

  VAR_5[0].iov_len += VAR_0;
  VAR_7 += VAR_0;

  FUNC_6("Attaching CRC32 HeaderDigest for DataIN PDU 0x%08x\n",
    *VAR_10);
 }

 VAR_9 = FUNC_3(VAR_3, &VAR_3->iov_data[VAR_6],
       VAR_3->orig_iov_data_count - (VAR_6 + 2),
       VAR_4->offset, VAR_4->length);
 if (VAR_9 < 0)
  return -1;

 VAR_6 += VAR_9;
 VAR_7 += VAR_4->length;

 VAR_3->padding = ((-VAR_4->length) & 3);
 if (VAR_3->padding) {
  VAR_5[VAR_6].iov_base = VAR_3->pad_bytes;
  VAR_5[VAR_6++].iov_len = VAR_3->padding;
  VAR_7 += VAR_3->padding;

  FUNC_6("Attaching %u padding bytes\n", VAR_3->padding);
 }

 if (VAR_2->conn_ops->DataDigest) {
  VAR_3->data_crc = FUNC_1(VAR_2->conn_tx_hash,
        VAR_3, VAR_4->offset,
        VAR_4->length,
        VAR_3->padding,
        VAR_3->pad_bytes);

  VAR_5[VAR_6].iov_base = &VAR_3->data_crc;
  VAR_5[VAR_6++].iov_len = VAR_0;
  VAR_7 += VAR_0;

  FUNC_6("Attached CRC32C DataDigest %d bytes, crc 0x%08x\n",
    VAR_4->length + VAR_3->padding, VAR_3->data_crc);
 }

 VAR_3->iov_data_count = VAR_6;
 VAR_3->tx_size = VAR_7;

 VAR_8 = FUNC_2(VAR_3, VAR_2);

 FUNC_5(VAR_3);

 if (VAR_8 < 0) {
  FUNC_4(VAR_2);
  return VAR_8;
 }

 return 0;
}
