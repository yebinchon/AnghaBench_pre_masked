
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btf_verifier_env {int dummy; } ;
struct btf_type {scalar_t__ size; } ;
struct btf_member {scalar_t__ offset; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct btf_verifier_env*,struct btf_type const*,struct btf_member const*,char*) ;

__attribute__((used)) static int FUNC_3(struct btf_verifier_env *VAR_1,
       const struct btf_type *VAR_2,
       const struct btf_member *VAR_3,
       const struct btf_type *VAR_4)
{
 u32 VAR_5 = VAR_3->offset;
 u32 VAR_6, VAR_7;

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_1, VAR_2, VAR_3,
     "Member is not byte aligned");
  return -VAR_0;
 }

 VAR_6 = VAR_2->size;
 VAR_7 = FUNC_1(VAR_5);
 if (VAR_6 - VAR_7 < VAR_4->size) {
  FUNC_2(VAR_1, VAR_2, VAR_3,
     "Member exceeds struct_size");
  return -VAR_0;
 }

 return 0;
}
