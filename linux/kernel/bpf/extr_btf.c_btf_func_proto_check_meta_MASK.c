
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btf_verifier_env {int dummy; } ;
struct btf_type {scalar_t__ name_off; } ;
struct btf_param {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct btf_type const*) ;
 int FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_verifier_env*,struct btf_type const*,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct btf_verifier_env*,struct btf_type const*,char*) ;

__attribute__((used)) static s32 FUNC_4(struct btf_verifier_env *VAR_1,
         const struct btf_type *VAR_2,
         u32 VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_2) * sizeof(struct btf_param);

 if (VAR_3 < VAR_4) {
  FUNC_2(VAR_1, VAR_2,
           "meta_left:%u meta_needed:%u",
           VAR_3, VAR_4);
  return -VAR_0;
 }

 if (VAR_2->name_off) {
  FUNC_3(VAR_1, VAR_2, "Invalid name");
  return -VAR_0;
 }

 if (FUNC_0(VAR_2)) {
  FUNC_3(VAR_1, VAR_2, "Invalid btf_info kind_flag");
  return -VAR_0;
 }

 FUNC_3(VAR_1, VAR_2, ((void*)0));

 return VAR_4;
}
