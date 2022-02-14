
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct iscsi_data {int datasn; int offset; int itt; int dlength; } ;
struct iscsi_conn {TYPE_1__* sess; } ;
struct TYPE_4__ {struct scatterlist* t_data_sg; int data_length; } ;
struct iscsi_cmd {int write_data_done; int next_burst_len; TYPE_2__ se_cmd; void* data_sn; } ;
struct cxgbit_sock {int skb; struct iscsi_conn* conn; } ;
struct cxgbit_lro_pdu_cb {int dlen; int flags; scalar_t__ hdr; } ;
struct TYPE_3__ {int rx_data_octets; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iscsi_conn*,unsigned char*,struct iscsi_cmd*,int,int*) ;
 int FUNC_2 (int,int *) ;
 void* FUNC_3 (int ) ;
 struct cxgbit_lro_pdu_cb* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct scatterlist*,int,int) ;
 int FUNC_6 (struct iscsi_conn*,unsigned char*,struct iscsi_cmd**) ;
 int FUNC_7 (struct iscsi_cmd*,struct iscsi_data*,int) ;
 struct iscsi_cmd* FUNC_8 (struct iscsi_conn*,int ,int ) ;
 int FUNC_9 (unsigned long,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,int,int ) ;
 int FUNC_12 (char*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_13(struct cxgbit_sock *VAR_4)
{
 struct scatterlist *VAR_5;
 struct iscsi_conn *VAR_6 = VAR_4->conn;
 struct iscsi_cmd *VAR_7 = ((void*)0);
 struct cxgbit_lro_pdu_cb *VAR_8 = FUNC_4(VAR_4->skb);
 struct iscsi_data *VAR_9 = (struct iscsi_data *)VAR_8->hdr;
 u32 VAR_10 = FUNC_3(VAR_9->offset);
 u32 VAR_11 = VAR_8->dlen;
 int VAR_12, VAR_13, VAR_14;
 bool VAR_15 = 0;

 if (VAR_8->flags & VAR_3) {
  u32 VAR_16 = FUNC_3(VAR_9->offset);
  u32 VAR_17;
  u32 VAR_18 = FUNC_10(VAR_9->dlength);
  bool VAR_19 = 0;

  VAR_7 = FUNC_8(VAR_6, VAR_9->itt, 0);
  if (!VAR_7)
   return 0;

  VAR_17 = VAR_16 - VAR_7->write_data_done;
  FUNC_2(VAR_17, &VAR_6->sess->rx_data_octets);

  VAR_7->write_data_done = VAR_16;
  VAR_7->next_burst_len = VAR_17;
  VAR_7->data_sn = FUNC_3(VAR_9->datasn);

  VAR_12 = FUNC_1(VAR_6, (unsigned char *)VAR_9,
      VAR_7, VAR_18, &VAR_19);
  if (VAR_12 < 0)
   return VAR_12;
  else if (!VAR_19)
   return 0;
 } else {
  VAR_12 = FUNC_6(VAR_6, (unsigned char *)VAR_9, &VAR_7);
  if (VAR_12 < 0)
   return VAR_12;
  else if (!VAR_7)
   return 0;
 }

 if (VAR_8->flags & VAR_2) {
  FUNC_12("ITT: 0x%08x, Offset: %u, Length: %u,"
         " DataSN: 0x%08x\n",
         VAR_9->itt, VAR_9->offset, VAR_11,
         VAR_9->datasn);

  VAR_15 = 1;
  goto check_payload;
 }

 FUNC_11("DataOut data_len: %u, "
  "write_data_done: %u, data_length: %u\n",
    VAR_11, VAR_7->write_data_done,
    VAR_7->se_cmd.data_length);

 if (!(VAR_8->flags & VAR_1)) {
  u32 VAR_20 = VAR_10 % VAR_0;

  VAR_14 = VAR_10 / VAR_0;
  VAR_5 = &VAR_7->se_cmd.t_data_sg[VAR_14];
  VAR_13 = FUNC_9(1UL, FUNC_0(VAR_20 + VAR_11, VAR_0));

  FUNC_5(VAR_4->skb, VAR_5, VAR_13, VAR_20);
 }

check_payload:

 VAR_12 = FUNC_7(VAR_7, VAR_9, VAR_15);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
