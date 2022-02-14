
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btf_verifier_env {struct btf* btf; } ;
struct btf_type {scalar_t__ size; } ;
struct btf_member {scalar_t__ offset; scalar_t__ type; } ;
struct btf {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct btf*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct btf_verifier_env*,struct btf_type const*,struct btf_member const*,char*) ;

__attribute__((used)) static int FUNC_4(struct btf_verifier_env *VAR_1,
      const struct btf_type *VAR_2,
      const struct btf_member *VAR_3,
      const struct btf_type *VAR_4)
{
 u32 VAR_5 = VAR_3->offset;
 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;
 struct btf *VAR_10 = VAR_1->btf;

 if (FUNC_0(VAR_5)) {
  FUNC_3(VAR_1, VAR_2, VAR_3,
     "Member is not byte aligned");
  return -VAR_0;
 }

 VAR_8 = VAR_3->type;
 FUNC_2(VAR_10, &VAR_8, &VAR_9);
 VAR_6 = VAR_2->size;
 VAR_7 = FUNC_1(VAR_5);
 if (VAR_6 - VAR_7 < VAR_9) {
  FUNC_3(VAR_1, VAR_2, VAR_3,
     "Member exceeds struct_size");
  return -VAR_0;
 }

 return 0;
}
