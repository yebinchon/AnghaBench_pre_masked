
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tiqn {int dummy; } ;
struct iscsi_portal_group {struct iscsi_tiqn* tpg_tiqn; } ;
struct iscsi_conn {struct iscsi_portal_group* tpg; } ;



struct iscsi_tiqn *FUNC_0(struct iscsi_conn *VAR_0)
{
 struct iscsi_portal_group *VAR_1;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = VAR_0->tpg;
 if (!VAR_1)
  return ((void*)0);

 if (!VAR_1->tpg_tiqn)
  return ((void*)0);

 return VAR_1->tpg_tiqn;
}
