
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int se_node_acl; } ;
struct se_portal_group {int dummy; } ;
typedef enum target_prot_op { ____Placeholder_target_prot_op } target_prot_op ;


 int VAR_0 ;
 struct se_session* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct se_session*) ;
 int FUNC_2 (struct se_portal_group*,unsigned char*) ;
 struct se_session* FUNC_3 (int) ;
 int FUNC_4 (struct se_session*) ;
 struct se_session* FUNC_5 (unsigned int,unsigned int,int) ;
 int FUNC_6 (struct se_portal_group*,int ,struct se_session*,void*) ;

struct se_session *
FUNC_7(struct se_portal_group *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3,
       enum target_prot_op VAR_4,
       const char *VAR_5, void *VAR_6,
       int (*VAR_7)(struct se_portal_group *,
         struct se_session *, void *))
{
 struct se_session *VAR_8;





 if (VAR_2 != 0)
  VAR_8 = FUNC_5(VAR_2, VAR_3, VAR_4);
 else
  VAR_8 = FUNC_3(VAR_4);

 if (FUNC_1(VAR_8))
  return VAR_8;

 VAR_8->se_node_acl = FUNC_2(VAR_1,
     (unsigned char *)VAR_5);
 if (!VAR_8->se_node_acl) {
  FUNC_4(VAR_8);
  return FUNC_0(-VAR_0);
 }




 if (VAR_7 != ((void*)0)) {
  int VAR_9 = VAR_7(VAR_1, VAR_8, VAR_6);
  if (VAR_9) {
   FUNC_4(VAR_8);
   return FUNC_0(VAR_9);
  }
 }

 FUNC_6(VAR_1, VAR_8->se_node_acl, VAR_8, VAR_6);
 return VAR_8;
}
