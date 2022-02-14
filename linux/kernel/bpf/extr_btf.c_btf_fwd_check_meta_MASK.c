
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct btf_verifier_env {int btf; } ;
struct btf_type {int name_off; scalar_t__ type; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_verifier_env*,struct btf_type const*,char*) ;

__attribute__((used)) static s32 FUNC_3(struct btf_verifier_env *VAR_1,
         const struct btf_type *VAR_2,
         u32 VAR_3)
{
 if (FUNC_1(VAR_2)) {
  FUNC_2(VAR_1, VAR_2, "vlen != 0");
  return -VAR_0;
 }

 if (VAR_2->type) {
  FUNC_2(VAR_1, VAR_2, "type != 0");
  return -VAR_0;
 }


 if (!VAR_2->name_off ||
     !FUNC_0(VAR_1->btf, VAR_2->name_off)) {
  FUNC_2(VAR_1, VAR_2, "Invalid name");
  return -VAR_0;
 }

 FUNC_2(VAR_1, VAR_2, ((void*)0));

 return 0;
}
