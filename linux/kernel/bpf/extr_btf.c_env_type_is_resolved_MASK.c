
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct btf_verifier_env {scalar_t__* visit_states; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct btf_verifier_env *VAR_1,
     u32 VAR_2)
{
 return VAR_1->visit_states[VAR_2] == VAR_0;
}
