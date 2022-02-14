
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iscsi_hdr {int opcode; } ;
struct iscsi_conn {scalar_t__ conn_state; TYPE_2__* sess; } ;
struct cxgbit_sock {struct iscsi_conn* conn; int skb; } ;
struct cxgbit_lro_pdu_cb {int flags; struct iscsi_hdr* hdr; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; int conn_digest_errors; } ;
struct TYPE_3__ {scalar_t__ SessionType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 struct cxgbit_lro_pdu_cb* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cxgbit_sock*) ;
 int FUNC_3 (struct iscsi_conn*,int ,unsigned char*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct cxgbit_sock *VAR_6)
{
 struct cxgbit_lro_pdu_cb *VAR_7 = FUNC_1(VAR_6->skb);
 struct iscsi_conn *VAR_8 = VAR_6->conn;
 struct iscsi_hdr *VAR_9 = VAR_7->hdr;
 u8 VAR_10;

 if (VAR_7->flags & VAR_4) {
  FUNC_0(&VAR_8->sess->conn_digest_errors);
  goto transport_err;
 }

 if (VAR_8->conn_state == VAR_5)
  goto transport_err;

 VAR_10 = VAR_9->opcode & VAR_0;

 if (VAR_8->sess->sess_ops->SessionType &&
     ((!(VAR_10 & VAR_2)) ||
      (!(VAR_10 & VAR_1)))) {
  FUNC_4("Received illegal iSCSI Opcode: 0x%02x"
   " while in Discovery Session, rejecting.\n", VAR_10);
  FUNC_3(VAR_8, VAR_3,
      (unsigned char *)VAR_9);
  goto transport_err;
 }

 if (FUNC_2(VAR_6) < 0)
  goto transport_err;

 return 0;

transport_err:
 return -1;
}
