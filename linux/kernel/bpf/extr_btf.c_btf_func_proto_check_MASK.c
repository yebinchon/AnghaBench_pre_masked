
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct btf_verifier_env {struct btf* btf; } ;
struct btf_type {scalar_t__ type; } ;
struct btf_param {scalar_t__ name_off; scalar_t__ type; } ;
struct btf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btf const*,scalar_t__) ;
 int FUNC_1 (struct btf const*,scalar_t__) ;
 int FUNC_2 (struct btf_verifier_env*,struct btf_type const*,scalar_t__) ;
 struct btf_type* FUNC_3 (struct btf const*,scalar_t__) ;
 int FUNC_4 (struct btf const*,scalar_t__*,int *) ;
 scalar_t__ FUNC_5 (struct btf_type const*) ;
 int FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (struct btf_verifier_env*,struct btf_type const*,char*,...) ;
 int FUNC_8 (struct btf_verifier_env*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct btf_verifier_env *VAR_1,
    const struct btf_type *VAR_2)
{
 const struct btf_type *VAR_3;
 const struct btf_param *VAR_4;
 const struct btf *VAR_5;
 u16 VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = VAR_1->btf;
 VAR_4 = (const struct btf_param *)(VAR_2 + 1);
 VAR_6 = FUNC_6(VAR_2);


 if (VAR_2->type) {
  u32 VAR_9 = VAR_2->type;

  VAR_3 = FUNC_3(VAR_5, VAR_9);
  if (!VAR_3) {
   FUNC_7(VAR_1, VAR_2, "Invalid return type");
   return -VAR_0;
  }

  if (FUNC_5(VAR_3) &&
      !FUNC_8(VAR_1, VAR_9)) {
   VAR_8 = FUNC_2(VAR_1, VAR_3, VAR_9);
   if (VAR_8)
    return VAR_8;
  }


  if (!FUNC_4(VAR_5, &VAR_9, ((void*)0))) {
   FUNC_7(VAR_1, VAR_2, "Invalid return type");
   return -VAR_0;
  }
 }

 if (!VAR_6)
  return 0;


 if (!VAR_4[VAR_6 - 1].type) {
  if (VAR_4[VAR_6 - 1].name_off) {
   FUNC_7(VAR_1, VAR_2, "Invalid arg#%u",
           VAR_6);
   return -VAR_0;
  }
  VAR_6--;
 }

 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  const struct btf_type *VAR_10;
  u32 VAR_11;

  VAR_11 = VAR_4[VAR_7].type;
  VAR_10 = FUNC_3(VAR_5, VAR_11);
  if (!VAR_10) {
   FUNC_7(VAR_1, VAR_2, "Invalid arg#%u", VAR_7 + 1);
   VAR_8 = -VAR_0;
   break;
  }

  if (VAR_4[VAR_7].name_off &&
      (!FUNC_0(VAR_5, VAR_4[VAR_7].name_off) ||
       !FUNC_1(VAR_5, VAR_4[VAR_7].name_off))) {
   FUNC_7(VAR_1, VAR_2,
           "Invalid arg#%u", VAR_7 + 1);
   VAR_8 = -VAR_0;
   break;
  }

  if (FUNC_5(VAR_10) &&
      !FUNC_8(VAR_1, VAR_11)) {
   VAR_8 = FUNC_2(VAR_1, VAR_10, VAR_11);
   if (VAR_8)
    break;
  }

  if (!FUNC_4(VAR_5, &VAR_11, ((void*)0))) {
   FUNC_7(VAR_1, VAR_2, "Invalid arg#%u", VAR_7 + 1);
   VAR_8 = -VAR_0;
   break;
  }
 }

 return VAR_8;
}
