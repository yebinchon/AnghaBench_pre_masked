
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; int cxn_timeout_errors; int last_sess_failure_type; int last_sess_fail_rem_name; } ;
struct iscsi_tiqn {TYPE_2__ sess_err_stats; } ;
struct iscsi_session {int conn_timeout_errors; TYPE_1__* sess_ops; struct iscsi_portal_group* tpg; } ;
struct iscsi_portal_group {struct iscsi_tiqn* tpg_tiqn; } ;
struct TYPE_3__ {int InitiatorName; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(struct iscsi_session *VAR_1)
{
 struct iscsi_portal_group *VAR_2 = VAR_1->tpg;
 struct iscsi_tiqn *VAR_3 = VAR_2->tpg_tiqn;

 if (!VAR_3)
  return;

 FUNC_1(&VAR_3->sess_err_stats.lock);
 FUNC_3(VAR_3->sess_err_stats.last_sess_fail_rem_name,
   VAR_1->sess_ops->InitiatorName,
   sizeof(VAR_3->sess_err_stats.last_sess_fail_rem_name));
 VAR_3->sess_err_stats.last_sess_failure_type =
   VAR_0;
 VAR_3->sess_err_stats.cxn_timeout_errors++;
 FUNC_0(&VAR_1->conn_timeout_errors);
 FUNC_2(&VAR_3->sess_err_stats.lock);
}
