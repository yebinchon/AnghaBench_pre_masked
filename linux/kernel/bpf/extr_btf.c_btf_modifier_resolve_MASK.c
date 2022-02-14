
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resolve_vertex {struct btf_type* t; } ;
struct btf_verifier_env {struct btf* btf; } ;
struct btf_type {int type; } ;
struct btf {int dummy; } ;


 int VAR_0 ;
 struct btf_type* FUNC_0 (struct btf*,int ) ;
 struct btf_type* FUNC_1 (struct btf*,int *) ;
 int FUNC_2 (struct btf*,int *,int *) ;
 int FUNC_3 (struct btf_type const*) ;
 int FUNC_4 (struct btf_type const*) ;
 scalar_t__ FUNC_5 (struct btf_type const*) ;
 int FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (struct btf_verifier_env*,struct btf_type*,char*) ;
 int FUNC_8 (struct btf_verifier_env*,int ,int ) ;
 int FUNC_9 (struct btf_verifier_env*,struct btf_type const*,int ) ;
 int FUNC_10 (struct btf_verifier_env*,struct btf_type const*) ;
 scalar_t__ FUNC_11 (struct btf_verifier_env*,int ) ;

__attribute__((used)) static int FUNC_12(struct btf_verifier_env *VAR_1,
    const struct resolve_vertex *VAR_2)
{
 const struct btf_type *VAR_3 = VAR_2->t;
 const struct btf_type *VAR_4;
 u32 VAR_5 = VAR_3->type;
 struct btf *VAR_6 = VAR_1->btf;

 VAR_4 = FUNC_0(VAR_6, VAR_5);
 if (!VAR_4 || FUNC_5(VAR_4)) {
  FUNC_7(VAR_1, VAR_2->t, "Invalid type_id");
  return -VAR_0;
 }

 if (!FUNC_10(VAR_1, VAR_4) &&
     !FUNC_11(VAR_1, VAR_5))
  return FUNC_9(VAR_1, VAR_4, VAR_5);







 if (!FUNC_2(VAR_6, &VAR_5, ((void*)0))) {
  if (FUNC_11(VAR_1, VAR_5))
   VAR_4 = FUNC_1(VAR_6, &VAR_5);


  if (!FUNC_6(VAR_4) &&
      !FUNC_4(VAR_4) &&
      !FUNC_3(VAR_4)) {
   FUNC_7(VAR_1, VAR_2->t, "Invalid type_id");
   return -VAR_0;
  }
 }

 FUNC_8(VAR_1, VAR_5, 0);

 return 0;
}
