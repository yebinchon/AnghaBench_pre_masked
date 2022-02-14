
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resolve_vertex {int t; } ;
struct btf_verifier_env {struct btf* btf; } ;
struct btf_type {int dummy; } ;
struct btf_array {int index_type; int type; int nelems; } ;
struct btf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btf_array* FUNC_0 (int ) ;
 struct btf_type* FUNC_1 (struct btf*,int) ;
 struct btf_type* FUNC_2 (struct btf*,int*,int*) ;
 int FUNC_3 (struct btf_type const*) ;
 scalar_t__ FUNC_4 (struct btf_type const*) ;
 scalar_t__ FUNC_5 (struct btf_type const*) ;
 scalar_t__ FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (struct btf_verifier_env*,int ,char*) ;
 int FUNC_8 (struct btf_verifier_env*,int,int) ;
 int FUNC_9 (struct btf_verifier_env*,struct btf_type const*,int) ;
 int FUNC_10 (struct btf_verifier_env*,struct btf_type const*) ;
 int FUNC_11 (struct btf_verifier_env*,int) ;

__attribute__((used)) static int FUNC_12(struct btf_verifier_env *VAR_2,
        const struct resolve_vertex *VAR_3)
{
 const struct btf_array *VAR_4 = FUNC_0(VAR_3->t);
 const struct btf_type *VAR_5, *VAR_6;
 u32 VAR_7, VAR_8;
 struct btf *VAR_9 = VAR_2->btf;
 u32 VAR_10;


 VAR_8 = VAR_4->index_type;
 VAR_6 = FUNC_1(VAR_9, VAR_8);
 if (FUNC_6(VAR_6) ||
     FUNC_5(VAR_6)) {
  FUNC_7(VAR_2, VAR_3->t, "Invalid index");
  return -VAR_0;
 }

 if (!FUNC_10(VAR_2, VAR_6) &&
     !FUNC_11(VAR_2, VAR_8))
  return FUNC_9(VAR_2, VAR_6, VAR_8);

 VAR_6 = FUNC_2(VAR_9, &VAR_8, ((void*)0));
 if (!VAR_6 || !FUNC_4(VAR_6) ||
     !FUNC_3(VAR_6)) {
  FUNC_7(VAR_2, VAR_3->t, "Invalid index");
  return -VAR_0;
 }


 VAR_7 = VAR_4->type;
 VAR_5 = FUNC_1(VAR_9, VAR_7);
 if (FUNC_6(VAR_5) ||
     FUNC_5(VAR_5)) {
  FUNC_7(VAR_2, VAR_3->t,
          "Invalid elem");
  return -VAR_0;
 }

 if (!FUNC_10(VAR_2, VAR_5) &&
     !FUNC_11(VAR_2, VAR_7))
  return FUNC_9(VAR_2, VAR_5, VAR_7);

 VAR_5 = FUNC_2(VAR_9, &VAR_7, &VAR_10);
 if (!VAR_5) {
  FUNC_7(VAR_2, VAR_3->t, "Invalid elem");
  return -VAR_0;
 }

 if (FUNC_4(VAR_5) && !FUNC_3(VAR_5)) {
  FUNC_7(VAR_2, VAR_3->t, "Invalid array of int");
  return -VAR_0;
 }

 if (VAR_4->nelems && VAR_10 > VAR_1 / VAR_4->nelems) {
  FUNC_7(VAR_2, VAR_3->t,
          "Array size overflows U32_MAX");
  return -VAR_0;
 }

 FUNC_8(VAR_2, VAR_7, VAR_10 * VAR_4->nelems);

 return 0;
}
