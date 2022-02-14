
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct btf_verifier_env {struct btf* btf; } ;
struct btf_type {int size; scalar_t__ name_off; } ;
struct btf_enum {int val; scalar_t__ name_off; } ;
struct btf {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct btf*,scalar_t__) ;
 int FUNC_1 (struct btf*,scalar_t__) ;
 int FUNC_2 (struct btf*,scalar_t__) ;
 struct btf_enum* FUNC_3 (struct btf_type const*) ;
 scalar_t__ FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (struct btf_type const*) ;
 int FUNC_6 (struct btf_verifier_env*,char*,int ,...) ;
 int FUNC_7 (struct btf_verifier_env*,struct btf_type const*,char*,int,int) ;
 int FUNC_8 (struct btf_verifier_env*,struct btf_type const*,char*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static s32 FUNC_10(struct btf_verifier_env *VAR_1,
          const struct btf_type *VAR_2,
          u32 VAR_3)
{
 const struct btf_enum *VAR_4 = FUNC_3(VAR_2);
 struct btf *VAR_5 = VAR_1->btf;
 u16 VAR_6, VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_5(VAR_2);
 VAR_8 = VAR_7 * sizeof(*VAR_4);

 if (VAR_3 < VAR_8) {
  FUNC_7(VAR_1, VAR_2,
           "meta_left:%u meta_needed:%u",
           VAR_3, VAR_8);
  return -VAR_0;
 }

 if (FUNC_4(VAR_2)) {
  FUNC_8(VAR_1, VAR_2, "Invalid btf_info kind_flag");
  return -VAR_0;
 }

 if (VAR_2->size > 8 || !FUNC_9(VAR_2->size)) {
  FUNC_8(VAR_1, VAR_2, "Unexpected size");
  return -VAR_0;
 }


 if (VAR_2->name_off &&
     !FUNC_2(VAR_1->btf, VAR_2->name_off)) {
  FUNC_8(VAR_1, VAR_2, "Invalid name");
  return -VAR_0;
 }

 FUNC_8(VAR_1, VAR_2, ((void*)0));

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (!FUNC_1(VAR_5, VAR_4[VAR_6].name_off)) {
   FUNC_6(VAR_1, "\tInvalid name_offset:%u",
      VAR_4[VAR_6].name_off);
   return -VAR_0;
  }


  if (!VAR_4[VAR_6].name_off ||
      !FUNC_2(VAR_5, VAR_4[VAR_6].name_off)) {
   FUNC_8(VAR_1, VAR_2, "Invalid name");
   return -VAR_0;
  }


  FUNC_6(VAR_1, "\t%s val=%d\n",
     FUNC_0(VAR_5, VAR_4[VAR_6].name_off),
     VAR_4[VAR_6].val);
 }

 return VAR_8;
}
