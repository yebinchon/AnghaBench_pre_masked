
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct se_session {int dummy; } ;
struct se_portal_group {int dummy; } ;
struct se_node_acl {int dummy; } ;
struct TYPE_6__ {struct TYPE_6__* se_node_acl; struct TYPE_6__* se_tpg; struct TYPE_6__* nacl_sess; int acl_sess_list; int acl_list; int * se_tpg_tfo; int tpg_sess_list; int acl_node_list; int se_tpg_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

int FUNC_5(void)
{
 int VAR_7;

 VAR_6 = FUNC_1("xcopy_wq", VAR_1, 0);
 if (!VAR_6) {
  FUNC_3("Unable to allocate xcopy_wq\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_5, 0, sizeof(struct se_portal_group));
 FUNC_0(&VAR_5.se_tpg_node);
 FUNC_0(&VAR_5.acl_node_list);
 FUNC_0(&VAR_5.tpg_sess_list);

 VAR_5.se_tpg_tfo = &VAR_4;

 FUNC_2(&VAR_2, 0, sizeof(struct se_node_acl));
 FUNC_0(&VAR_2.acl_list);
 FUNC_0(&VAR_2.acl_sess_list);
 FUNC_2(&VAR_3, 0, sizeof(struct se_session));
 VAR_7 = FUNC_4(&VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_2.se_tpg = &VAR_5;
 VAR_2.nacl_sess = &VAR_3;

 VAR_3.se_tpg = &VAR_5;
 VAR_3.se_node_acl = &VAR_2;

 return 0;
}
