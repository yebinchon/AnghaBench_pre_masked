
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct btf_verifier_env {int btf; } ;
struct btf_var {scalar_t__ linkage; } ;
struct btf_type {int type; int name_off; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct btf_type const*) ;
 struct btf_var* FUNC_3 (struct btf_type const*) ;
 scalar_t__ FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (struct btf_verifier_env*,struct btf_type const*,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct btf_verifier_env*,struct btf_type const*,char*) ;

__attribute__((used)) static s32 FUNC_7(struct btf_verifier_env *VAR_3,
         const struct btf_type *VAR_4,
         u32 VAR_5)
{
 const struct btf_var *VAR_6;
 u32 VAR_7 = sizeof(*VAR_6);

 if (VAR_5 < VAR_7) {
  FUNC_5(VAR_3, VAR_4,
           "meta_left:%u meta_needed:%u",
           VAR_5, VAR_7);
  return -VAR_2;
 }

 if (FUNC_4(VAR_4)) {
  FUNC_6(VAR_3, VAR_4, "vlen != 0");
  return -VAR_2;
 }

 if (FUNC_2(VAR_4)) {
  FUNC_6(VAR_3, VAR_4, "Invalid btf_info kind_flag");
  return -VAR_2;
 }

 if (!VAR_4->name_off ||
     !FUNC_1(VAR_3->btf, VAR_4->name_off, 1)) {
  FUNC_6(VAR_3, VAR_4, "Invalid name");
  return -VAR_2;
 }


 if (!VAR_4->type || !FUNC_0(VAR_4->type)) {
  FUNC_6(VAR_3, VAR_4, "Invalid type_id");
  return -VAR_2;
 }

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6->linkage != VAR_1 &&
     VAR_6->linkage != VAR_0) {
  FUNC_6(VAR_3, VAR_4, "Linkage not supported");
  return -VAR_2;
 }

 FUNC_6(VAR_3, VAR_4, ((void*)0));

 return VAR_7;
}
