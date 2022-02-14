
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct btf_verifier_env {int log_type_id; int phase; struct btf* btf; } ;
struct btf_type {int dummy; } ;
struct btf {int nr_types; } ;


 int FUNC_0 (struct btf_verifier_env*,struct btf_type const*) ;
 int FUNC_1 (struct btf_verifier_env*,struct btf_type const*) ;
 int FUNC_2 (struct btf_verifier_env*,struct btf_type const*,int) ;
 struct btf_type* FUNC_3 (struct btf*,int) ;
 scalar_t__ FUNC_4 (struct btf_type const*) ;
 scalar_t__ FUNC_5 (struct btf_type const*) ;
 scalar_t__ FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (struct btf_verifier_env*) ;
 int FUNC_8 (struct btf_verifier_env*,int) ;

__attribute__((used)) static int FUNC_9(struct btf_verifier_env *VAR_0)
{
 struct btf *VAR_1 = VAR_0->btf;
 u32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_7(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_0->phase++;
 for (VAR_2 = 1; VAR_2 <= VAR_1->nr_types; VAR_2++) {
  const struct btf_type *VAR_4 = FUNC_3(VAR_1, VAR_2);

  VAR_0->log_type_id = VAR_2;
  if (FUNC_6(VAR_4) &&
      !FUNC_8(VAR_0, VAR_2)) {
   VAR_3 = FUNC_2(VAR_0, VAR_4, VAR_2);
   if (VAR_3)
    return VAR_3;
  }

  if (FUNC_5(VAR_4)) {
   VAR_3 = FUNC_1(VAR_0, VAR_4);
   if (VAR_3)
    return VAR_3;
  }

  if (FUNC_4(VAR_4)) {
   VAR_3 = FUNC_0(VAR_0, VAR_4);
   if (VAR_3)
    return VAR_3;
  }
 }

 return 0;
}
