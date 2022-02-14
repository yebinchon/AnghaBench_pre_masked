
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct btf_verifier_env {struct btf* btf; } ;
struct btf_type {int type; } ;
struct btf_param {scalar_t__ type; int name_off; } ;
struct btf {int dummy; } ;


 int VAR_0 ;
 struct btf_type* FUNC_0 (struct btf const*,int ) ;
 int FUNC_1 (struct btf_type const*) ;
 size_t FUNC_2 (struct btf_type const*) ;
 int FUNC_3 (struct btf_verifier_env*,struct btf_type const*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct btf_verifier_env *VAR_1,
     const struct btf_type *VAR_2)
{
 const struct btf_type *VAR_3;
 const struct btf_param *VAR_4;
 const struct btf *VAR_5;
 u16 VAR_6, VAR_7;

 VAR_5 = VAR_1->btf;
 VAR_3 = FUNC_0(VAR_5, VAR_2->type);

 if (!VAR_3 || !FUNC_1(VAR_3)) {
  FUNC_3(VAR_1, VAR_2, "Invalid type_id");
  return -VAR_0;
 }

 VAR_4 = (const struct btf_param *)(VAR_3 + 1);
 VAR_6 = FUNC_2(VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (!VAR_4[VAR_7].name_off && VAR_4[VAR_7].type) {
   FUNC_3(VAR_1, VAR_2, "Invalid arg#%u", VAR_7 + 1);
   return -VAR_0;
  }
 }

 return 0;
}
