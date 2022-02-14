
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {int dummy; } ;
struct TYPE_2__ {int value; } ;
struct bpf_reg_state {int off; int smin_value; TYPE_1__ var_off; } ;
typedef int s64 ;
typedef enum bpf_reg_type { ____Placeholder_bpf_reg_type } bpf_reg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (struct bpf_verifier_env*,char*,int ,...) ;

__attribute__((used)) static bool FUNC_2(struct bpf_verifier_env *VAR_3,
      const struct bpf_reg_state *VAR_4,
      enum bpf_reg_type VAR_5)
{
 bool VAR_6 = FUNC_0(VAR_4->var_off);
 s64 VAR_7 = VAR_4->var_off.value;
 s64 VAR_8 = VAR_4->smin_value;

 if (VAR_6 && (VAR_7 >= VAR_0 || VAR_7 <= -VAR_0)) {
  FUNC_1(VAR_3, "math between %s pointer and %lld is not allowed\n",
   VAR_2[VAR_5], VAR_7);
  return 0;
 }

 if (VAR_4->off >= VAR_0 || VAR_4->off <= -VAR_0) {
  FUNC_1(VAR_3, "%s pointer offset %d is not allowed\n",
   VAR_2[VAR_5], VAR_4->off);
  return 0;
 }

 if (VAR_8 == VAR_1) {
  FUNC_1(VAR_3, "math between %s pointer and register with unbounded min value is not allowed\n",
   VAR_2[VAR_5]);
  return 0;
 }

 if (VAR_8 >= VAR_0 || VAR_8 <= -VAR_0) {
  FUNC_1(VAR_3, "value %lld makes %s pointer be out of bounds\n",
   VAR_8, VAR_2[VAR_5]);
  return 0;
 }

 return 1;
}
