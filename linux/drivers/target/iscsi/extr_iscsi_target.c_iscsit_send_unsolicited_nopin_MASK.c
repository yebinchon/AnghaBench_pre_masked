
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_nopin {int ttt; } ;
struct iscsi_conn {TYPE_1__* conn_transport; int cid; } ;
struct iscsi_cmd {int istate_lock; int i_state; int stat_sn; int * pdu; } ;
struct TYPE_2__ {int (* iscsit_xmit_pdu ) (struct iscsi_conn*,struct iscsi_cmd*,int *,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,struct iscsi_nopin*,int) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iscsi_conn*,struct iscsi_cmd*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_5(
 struct iscsi_cmd *VAR_2,
 struct iscsi_conn *VAR_3,
 int VAR_4)
{
 struct iscsi_nopin *VAR_5 = (struct iscsi_nopin *)&VAR_2->pdu[0];
 int VAR_6;

 FUNC_0(VAR_2, VAR_3, VAR_5, 0);

 FUNC_1("Sending Unsolicited NOPIN TTT: 0x%08x StatSN:"
  " 0x%08x CID: %hu\n", VAR_5->ttt, VAR_2->stat_sn, VAR_3->cid);

 VAR_6 = VAR_3->conn_transport->iscsit_xmit_pdu(VAR_3, VAR_2, ((void*)0), ((void*)0), 0);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_2(&VAR_2->istate_lock);
 VAR_2->i_state = VAR_4 ?
  VAR_0 : VAR_1;
 FUNC_3(&VAR_2->istate_lock);

 return 0;
}
