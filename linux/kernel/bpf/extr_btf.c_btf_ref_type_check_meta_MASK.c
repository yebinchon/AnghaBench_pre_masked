
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct btf_verifier_env {int btf; } ;
struct btf_type {scalar_t__ name_off; int info; int type; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct btf_type const*) ;
 scalar_t__ FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (struct btf_verifier_env*,struct btf_type const*,char*) ;

__attribute__((used)) static int FUNC_6(struct btf_verifier_env *VAR_2,
       const struct btf_type *VAR_3,
       u32 VAR_4)
{
 if (FUNC_4(VAR_3)) {
  FUNC_5(VAR_2, VAR_3, "vlen != 0");
  return -VAR_1;
 }

 if (FUNC_3(VAR_3)) {
  FUNC_5(VAR_2, VAR_3, "Invalid btf_info kind_flag");
  return -VAR_1;
 }

 if (!FUNC_1(VAR_3->type)) {
  FUNC_5(VAR_2, VAR_3, "Invalid type_id");
  return -VAR_1;
 }




 if (FUNC_0(VAR_3->info) == VAR_0) {
  if (!VAR_3->name_off ||
      !FUNC_2(VAR_2->btf, VAR_3->name_off)) {
   FUNC_5(VAR_2, VAR_3, "Invalid name");
   return -VAR_1;
  }
 } else {
  if (VAR_3->name_off) {
   FUNC_5(VAR_2, VAR_3, "Invalid name");
   return -VAR_1;
  }
 }

 FUNC_5(VAR_2, VAR_3, ((void*)0));

 return 0;
}
