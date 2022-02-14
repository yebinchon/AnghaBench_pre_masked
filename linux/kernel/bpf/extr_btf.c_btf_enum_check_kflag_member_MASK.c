
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btf_verifier_env {int dummy; } ;
struct btf_type {scalar_t__ size; } ;
struct btf_member {int offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct btf_verifier_env*,struct btf_type const*,struct btf_member const*,char*) ;

__attribute__((used)) static int FUNC_5(struct btf_verifier_env *VAR_2,
           const struct btf_type *VAR_3,
           const struct btf_member *VAR_4,
           const struct btf_type *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10 = sizeof(int) * VAR_0;

 VAR_6 = FUNC_3(VAR_4->offset);
 VAR_7 = FUNC_2(VAR_4->offset);
 if (!VAR_7) {
  if (FUNC_0(VAR_6)) {
   FUNC_4(VAR_2, VAR_3, VAR_4,
      "Member is not byte aligned");
   return -VAR_1;
  }

  VAR_7 = VAR_10;
 } else if (VAR_7 > VAR_10) {
  FUNC_4(VAR_2, VAR_3, VAR_4,
     "Invalid member bitfield_size");
  return -VAR_1;
 }

 VAR_9 = VAR_3->size;
 VAR_8 = FUNC_1(VAR_6 + VAR_7);
 if (VAR_9 < VAR_8) {
  FUNC_4(VAR_2, VAR_3, VAR_4,
     "Member exceeds struct_size");
  return -VAR_1;
 }

 return 0;
}
