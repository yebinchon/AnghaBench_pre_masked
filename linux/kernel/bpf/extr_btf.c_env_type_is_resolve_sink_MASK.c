
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_verifier_env {int resolve_mode; } ;
struct btf_type {int dummy; } ;


 int FUNC_0 () ;



 int FUNC_1 (struct btf_type const*) ;
 int FUNC_2 (struct btf_type const*) ;
 int FUNC_3 (struct btf_type const*) ;
 int FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (struct btf_type const*) ;

__attribute__((used)) static bool FUNC_6(const struct btf_verifier_env *VAR_0,
         const struct btf_type *VAR_1)
{
 switch (VAR_0->resolve_mode) {
 case 128:

  return !FUNC_5(VAR_1);
 case 130:



  return !FUNC_2(VAR_1) &&
   !FUNC_3(VAR_1);
 case 129:



  return !FUNC_2(VAR_1) &&
   !FUNC_1(VAR_1) &&
   !FUNC_4(VAR_1);
 default:
  FUNC_0();
 }
}
