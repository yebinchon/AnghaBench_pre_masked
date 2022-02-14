
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {struct se_node_acl* se_node_acl; } ;
struct se_node_acl {int dummy; } ;
struct se_dev_entry {int ua_list; } ;
struct se_cmd {int* t_task_cdb; int orig_fe_lun; struct se_session* se_sess; } ;
typedef int sense_reason_t ;





 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct se_dev_entry* FUNC_3 (struct se_node_acl*,int ) ;

sense_reason_t
FUNC_4(struct se_cmd *VAR_1)
{
 struct se_dev_entry *VAR_2;
 struct se_session *VAR_3 = VAR_1->se_sess;
 struct se_node_acl *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = VAR_3->se_node_acl;
 if (!VAR_4)
  return 0;

 FUNC_1();
 VAR_2 = FUNC_3(VAR_4, VAR_1->orig_fe_lun);
 if (!VAR_2) {
  FUNC_2();
  return 0;
 }
 if (FUNC_0(&VAR_2->ua_list)) {
  FUNC_2();
  return 0;
 }
 FUNC_2();
 switch (VAR_1->t_task_cdb[0]) {
 case 130:
 case 129:
 case 128:
  return 0;
 default:
  return VAR_0;
 }
}
