
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int acl_node_mutex; } ;
struct se_node_acl {int acl_kref; } ;


 struct se_node_acl* FUNC_0 (struct se_portal_group*,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct se_node_acl *FUNC_4(
 struct se_portal_group *VAR_0,
 unsigned char *VAR_1)
{
 struct se_node_acl *VAR_2;
 FUNC_2(&VAR_0->acl_node_mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  if (!FUNC_1(&VAR_2->acl_kref))
   VAR_2 = ((void*)0);
 }
 FUNC_3(&VAR_0->acl_node_mutex);

 return VAR_2;
}
