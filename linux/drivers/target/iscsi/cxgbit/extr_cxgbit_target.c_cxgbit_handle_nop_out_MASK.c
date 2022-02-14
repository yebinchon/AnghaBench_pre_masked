
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_nopout {scalar_t__ ttt; int cmdsn; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {unsigned char* buf_ptr; int buf_ptr_size; } ;
struct cxgbit_sock {int skb; struct iscsi_conn* conn; } ;
struct cxgbit_lro_pdu_cb {int dlen; int flags; int doffset; scalar_t__ hdr; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {int ErrorRecoveryLevel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct cxgbit_lro_pdu_cb* FUNC_1 (int ) ;
 int FUNC_2 (struct iscsi_cmd*,int) ;
 int FUNC_3 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_nopout*) ;
 int FUNC_4 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_nopout*) ;
 unsigned char* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_10(struct cxgbit_sock *VAR_2, struct iscsi_cmd *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_2->conn;
 struct cxgbit_lro_pdu_cb *VAR_5 = FUNC_1(VAR_2->skb);
 struct iscsi_nopout *VAR_6 = (struct iscsi_nopout *)VAR_5->hdr;
 unsigned char *VAR_7 = ((void*)0);
 u32 VAR_8 = VAR_5->dlen;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_4, VAR_3, VAR_6);
 if (VAR_9 < 0)
  return 0;

 if (VAR_5->flags & VAR_1) {
  if (!VAR_4->sess->sess_ops->ErrorRecoveryLevel) {
   FUNC_7("Unable to recover from"
          " NOPOUT Ping DataCRC failure while in"
          " ERL=0.\n");
   VAR_9 = -1;
   goto out;
  } else {




   FUNC_8("Dropping NOPOUT"
    " Command CmdSN: 0x%08x due to"
    " DataCRC error.\n", VAR_6->cmdsn);
   VAR_9 = 0;
   goto out;
  }
 }




 if (VAR_8 && VAR_6->ttt == FUNC_0(0xFFFFFFFF)) {
  VAR_7 = FUNC_5(VAR_8 + 1, VAR_0);
  if (!VAR_7) {
   FUNC_7("Unable to allocate memory for"
    " NOPOUT ping data.\n");
   VAR_9 = -1;
   goto out;
  }

  FUNC_9(VAR_2->skb, VAR_5->doffset,
         VAR_7, VAR_8);

  VAR_7[VAR_8] = '\0';



  VAR_3->buf_ptr = VAR_7;
  VAR_3->buf_ptr_size = VAR_8;

  FUNC_6("Got %u bytes of NOPOUT ping"
   " data.\n", VAR_8);
  FUNC_6("Ping Data: \"%s\"\n", VAR_7);
 }

 return FUNC_3(VAR_4, VAR_3, VAR_6);
out:
 if (VAR_3)
  FUNC_2(VAR_3, 0);
 return VAR_9;
}
