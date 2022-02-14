
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_5__ {int off; TYPE_1__ var_off; } ;
struct nfp_bpf_reg_state {int var_off; TYPE_2__ reg; } ;
struct bpf_verifier_env {int dummy; } ;
struct TYPE_6__ {int value; } ;
struct bpf_reg_state {scalar_t__ type; int off; TYPE_3__ var_off; } ;
typedef int s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bpf_verifier_env*,char*,char const*,...) ;
 int FUNC_1 (TYPE_3__) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, struct bpf_verifier_env *VAR_2,
       const struct bpf_reg_state *VAR_3,
       struct nfp_bpf_reg_state *VAR_4)
{
 s64 VAR_5, VAR_6;

 if (VAR_3->type != VAR_0) {
  FUNC_0(VAR_2, "%s: unsupported ptr type %d\n",
   VAR_1, VAR_3->type);
  return 0;
 }
 if (!FUNC_1(VAR_3->var_off)) {
  FUNC_0(VAR_2, "%s: variable pointer\n", VAR_1);
  return 0;
 }

 VAR_5 = VAR_3->var_off.value + VAR_3->off;
 if (-VAR_5 % 4) {
  FUNC_0(VAR_2, "%s: unaligned stack pointer %lld\n", VAR_1, -VAR_5);
  return 0;
 }


 if (!VAR_4)
  return 1;

 VAR_6 = VAR_4->reg.var_off.value + VAR_4->reg.off;
 VAR_4->var_off |= VAR_5 != VAR_6;

 return 1;
}
