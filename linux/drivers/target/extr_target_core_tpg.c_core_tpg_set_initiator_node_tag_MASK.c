
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_portal_group {int dummy; } ;
struct se_node_acl {char* acl_tag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;

int FUNC_3(
 struct se_portal_group *VAR_2,
 struct se_node_acl *VAR_3,
 const char *VAR_4)
{
 if (FUNC_1(VAR_4) >= VAR_1)
  return -VAR_0;

 if (!FUNC_2("NULL", VAR_4, 4)) {
  VAR_3->acl_tag[0] = '\0';
  return 0;
 }

 return FUNC_0(VAR_3->acl_tag, VAR_1, "%s", VAR_4);
}
