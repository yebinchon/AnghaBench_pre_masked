
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_text {int cmdsn; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {unsigned char* text_in_ptr; } ;
struct cxgbit_sock {int skb; struct iscsi_conn* conn; } ;
struct cxgbit_lro_pdu_cb {int dlen; int flags; scalar_t__ hdr; int doffset; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {int ErrorRecoveryLevel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cxgbit_lro_pdu_cb* FUNC_0 (int ) ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_text*) ;
 int FUNC_2 (struct iscsi_cmd*,int ,scalar_t__) ;
 int FUNC_3 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_text*) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_8(struct cxgbit_sock *VAR_4, struct iscsi_cmd *VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_4->conn;
 struct cxgbit_lro_pdu_cb *VAR_7 = FUNC_0(VAR_4->skb);
 struct iscsi_text *VAR_8 = (struct iscsi_text *)VAR_7->hdr;
 u32 VAR_9 = VAR_7->dlen;
 int VAR_10;
 unsigned char *VAR_11 = ((void*)0);

 VAR_10 = FUNC_3(VAR_6, VAR_5, VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_7->flags & VAR_3) {
  if (!VAR_6->sess->sess_ops->ErrorRecoveryLevel) {
   FUNC_5("Unable to recover from"
          " Text Data digest failure while in"
          " ERL=0.\n");
   goto reject;
  } else {




   FUNC_6("Dropping Text"
    " Command CmdSN: 0x%08x due to"
    " DataCRC error.\n", VAR_8->cmdsn);
   return 0;
  }
 }

 if (VAR_9) {
  VAR_11 = FUNC_4(VAR_9, VAR_1);
  if (!VAR_11) {
   FUNC_5("Unable to allocate text_in of payload_length: %u\n",
          VAR_9);
   return -VAR_0;
  }
  FUNC_7(VAR_4->skb, VAR_7->doffset,
         VAR_11, VAR_9);

  VAR_11[VAR_9 - 1] = '\0';

  VAR_5->text_in_ptr = VAR_11;
 }

 return FUNC_1(VAR_6, VAR_5, VAR_8);

reject:
 return FUNC_2(VAR_5, VAR_2,
     VAR_7->hdr);
}
