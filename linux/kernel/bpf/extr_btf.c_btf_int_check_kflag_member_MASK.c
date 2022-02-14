
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btf_verifier_env {int dummy; } ;
struct btf_type {scalar_t__ size; } ;
struct btf_member {int offset; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (struct btf_type const*) ;
 int FUNC_8 (struct btf_verifier_env*,struct btf_type const*,struct btf_member const*,char*) ;

__attribute__((used)) static int FUNC_9(struct btf_verifier_env *VAR_2,
          const struct btf_type *VAR_3,
          const struct btf_member *VAR_4,
          const struct btf_type *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10 = FUNC_6(VAR_5);
 u32 VAR_11 = VAR_3->size;
 u32 VAR_12;


 if (!FUNC_7(VAR_5)) {
  FUNC_8(VAR_2, VAR_3, VAR_4,
     "Invalid member base type");
  return -VAR_1;
 }


 VAR_7 = FUNC_4(VAR_4->offset);
 VAR_6 = FUNC_5(VAR_4->offset);
 VAR_8 = FUNC_3(VAR_10);
 if (!VAR_7) {



  if (FUNC_0(VAR_6)) {
   FUNC_8(VAR_2, VAR_3, VAR_4,
      "Invalid member offset");
   return -VAR_1;
  }

  VAR_7 = VAR_8;
 } else if (VAR_7 > VAR_8) {
  FUNC_8(VAR_2, VAR_3, VAR_4,
     "Invalid member bitfield_size");
  return -VAR_1;
 }

 VAR_9 = FUNC_1(VAR_6);
 VAR_12 = VAR_7 + FUNC_0(VAR_6);
 if (VAR_12 > VAR_0) {
  FUNC_8(VAR_2, VAR_3, VAR_4,
     "nr_copy_bits exceeds 128");
  return -VAR_1;
 }

 if (VAR_11 < VAR_9 ||
     VAR_11 - VAR_9 < FUNC_2(VAR_12)) {
  FUNC_8(VAR_2, VAR_3, VAR_4,
     "Member exceeds struct_size");
  return -VAR_1;
 }

 return 0;
}
