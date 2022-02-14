
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int sup_prot_ops; } ;
typedef enum target_prot_op { ____Placeholder_target_prot_op } target_prot_op ;


 int VAR_0 ;
 struct se_session* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct se_session*) ;
 struct se_session* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (struct se_session*) ;

struct se_session *FUNC_5(enum target_prot_op VAR_3)
{
 struct se_session *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_4) {
  FUNC_3("Unable to allocate struct se_session from"
    " se_sess_cache\n");
  return FUNC_0(-VAR_0);
 }
 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(VAR_2, VAR_4);
  return FUNC_0(VAR_5);
 }
 VAR_4->sup_prot_ops = VAR_3;

 return VAR_4;
}
