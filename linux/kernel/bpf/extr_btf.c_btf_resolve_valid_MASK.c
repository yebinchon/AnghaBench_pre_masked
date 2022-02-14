
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct btf_verifier_env {struct btf* btf; } ;
struct btf_type {int dummy; } ;
struct btf_array {size_t type; size_t nelems; } ;
struct btf {size_t* resolved_sizes; int * resolved_ids; } ;


 struct btf_array* FUNC_0 (struct btf_type const*) ;
 struct btf_type* FUNC_1 (struct btf*,size_t*) ;
 struct btf_type* FUNC_2 (struct btf*,size_t*,size_t*) ;
 scalar_t__ FUNC_3 (struct btf_type const*) ;
 scalar_t__ FUNC_4 (struct btf_type const*) ;
 scalar_t__ FUNC_5 (struct btf_type const*) ;
 scalar_t__ FUNC_6 (struct btf_type const*) ;
 scalar_t__ FUNC_7 (struct btf_type const*) ;
 scalar_t__ FUNC_8 (struct btf_type const*) ;
 int FUNC_9 (struct btf_verifier_env*,size_t) ;

__attribute__((used)) static bool FUNC_10(struct btf_verifier_env *VAR_0,
         const struct btf_type *VAR_1,
         u32 VAR_2)
{
 struct btf *VAR_3 = VAR_0->btf;

 if (!FUNC_9(VAR_0, VAR_2))
  return 0;

 if (FUNC_7(VAR_1) || FUNC_4(VAR_1))
  return !VAR_3->resolved_ids[VAR_2] &&
         !VAR_3->resolved_sizes[VAR_2];

 if (FUNC_5(VAR_1) || FUNC_6(VAR_1) ||
     FUNC_8(VAR_1)) {
  VAR_1 = FUNC_1(VAR_3, &VAR_2);
  return VAR_1 &&
         !FUNC_5(VAR_1) &&
         !FUNC_8(VAR_1) &&
         !FUNC_4(VAR_1);
 }

 if (FUNC_3(VAR_1)) {
  const struct btf_array *VAR_4 = FUNC_0(VAR_1);
  const struct btf_type *VAR_5;
  u32 VAR_6 = VAR_4->type;
  u32 VAR_7;

  VAR_5 = FUNC_2(VAR_3, &VAR_6, &VAR_7);
  return VAR_5 && !FUNC_5(VAR_5) &&
   (VAR_4->nelems * VAR_7 ==
    VAR_3->resolved_sizes[VAR_2]);
 }

 return 0;
}
