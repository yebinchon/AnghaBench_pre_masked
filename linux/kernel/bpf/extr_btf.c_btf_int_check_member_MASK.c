
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btf_verifier_env {int dummy; } ;
struct btf_type {scalar_t__ size; } ;
struct btf_member {scalar_t__ offset; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (struct btf_type const*) ;
 int FUNC_6 (struct btf_verifier_env*,struct btf_type const*,struct btf_member const*,char*) ;

__attribute__((used)) static int FUNC_7(struct btf_verifier_env *VAR_3,
    const struct btf_type *VAR_4,
    const struct btf_member *VAR_5,
    const struct btf_type *VAR_6)
{
 u32 VAR_7 = FUNC_5(VAR_6);
 u32 VAR_8 = VAR_5->offset;
 u32 VAR_9 = VAR_4->size;
 u32 VAR_10;
 u32 VAR_11;

 if (VAR_2 - VAR_8 < FUNC_4(VAR_7)) {
  FUNC_6(VAR_3, VAR_4, VAR_5,
     "bits_offset exceeds U32_MAX");
  return -VAR_1;
 }

 VAR_8 += FUNC_4(VAR_7);
 VAR_11 = FUNC_1(VAR_8);
 VAR_10 = FUNC_3(VAR_7) +
  FUNC_0(VAR_8);

 if (VAR_10 > VAR_0) {
  FUNC_6(VAR_3, VAR_4, VAR_5,
     "nr_copy_bits exceeds 128");
  return -VAR_1;
 }

 if (VAR_9 < VAR_11 ||
     VAR_9 - VAR_11 < FUNC_2(VAR_10)) {
  FUNC_6(VAR_3, VAR_4, VAR_5,
     "Member exceeds struct_size");
  return -VAR_1;
 }

 return 0;
}
