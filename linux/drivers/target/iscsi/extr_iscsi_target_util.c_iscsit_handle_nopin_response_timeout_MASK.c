
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct iscsi_session {TYPE_3__* tpg; int isid; TYPE_1__* sess_ops; } ;
struct iscsi_conn {int nopin_response_timer_flags; int nopin_timer_lock; int cid; struct iscsi_session* sess; } ;
struct TYPE_6__ {scalar_t__ tpgt; TYPE_2__* tpg_tiqn; } ;
struct TYPE_5__ {int tiqn; } ;
struct TYPE_4__ {int InitiatorName; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iscsi_conn* VAR_2 ;
 struct iscsi_conn* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct iscsi_conn*,int ) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_session*) ;
 int FUNC_4 (struct iscsi_conn*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct timer_list *VAR_4)
{
 struct iscsi_conn *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 struct iscsi_session *VAR_6 = VAR_5->sess;

 FUNC_4(VAR_5);

 FUNC_6(&VAR_5->nopin_timer_lock);
 if (VAR_5->nopin_response_timer_flags & VAR_1) {
  FUNC_7(&VAR_5->nopin_timer_lock);
  FUNC_2(VAR_5);
  return;
 }

 FUNC_5("Did not receive response to NOPIN on CID: %hu, failing"
  " connection for I_T Nexus %s,i,0x%6phN,%s,t,0x%02x\n",
  VAR_5->cid, VAR_6->sess_ops->InitiatorName, VAR_6->isid,
  VAR_6->tpg->tpg_tiqn->tiqn, (u32)VAR_6->tpg->tpgt);
 VAR_5->nopin_response_timer_flags &= ~VAR_0;
 FUNC_7(&VAR_5->nopin_timer_lock);

 FUNC_3(VAR_6);
 FUNC_1(VAR_5, 0);
 FUNC_2(VAR_5);
}
