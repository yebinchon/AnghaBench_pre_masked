
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int dynamic_node_acl; int acl_kref; } ;
struct TYPE_2__ {int (* tpg_check_demo_mode_login_only ) (struct se_portal_group*) ;int (* tpg_check_demo_mode ) (struct se_portal_group*) ;} ;


 int FUNC_0 (struct se_node_acl*,struct se_portal_group*,int *) ;
 struct se_node_acl* FUNC_1 (struct se_portal_group*,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct se_portal_group*) ;
 int FUNC_4 (struct se_portal_group*) ;
 int FUNC_5 (struct se_node_acl*) ;
 struct se_node_acl* FUNC_6 (struct se_portal_group*,unsigned char*) ;

struct se_node_acl *FUNC_7(
 struct se_portal_group *VAR_0,
 unsigned char *VAR_1)
{
 struct se_node_acl *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 if (!VAR_0->se_tpg_tfo->tpg_check_demo_mode(VAR_0))
  return ((void*)0);

 VAR_2 = FUNC_6(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);
 FUNC_2(&VAR_2->acl_kref);
 VAR_2->dynamic_node_acl = 1;






 if ((VAR_0->se_tpg_tfo->tpg_check_demo_mode_login_only == ((void*)0)) ||
     (VAR_0->se_tpg_tfo->tpg_check_demo_mode_login_only(VAR_0) != 1))
  FUNC_0(VAR_2, VAR_0, ((void*)0));

 FUNC_5(VAR_2);
 return VAR_2;
}
