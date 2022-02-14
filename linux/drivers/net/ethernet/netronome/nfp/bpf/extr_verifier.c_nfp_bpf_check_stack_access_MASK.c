
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfp_prog {int dummy; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_7__ {scalar_t__ type; int off; TYPE_2__ var_off; } ;
struct nfp_insn_meta {int ptr_not_const; TYPE_3__ ptr; int flags; } ;
struct bpf_verifier_env {TYPE_1__* cur_state; } ;
struct TYPE_8__ {int value; } ;
struct bpf_reg_state {scalar_t__ frameno; int off; TYPE_4__ var_off; } ;
typedef int s32 ;
struct TYPE_5__ {scalar_t__ curframe; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bpf_verifier_env*,char*,...) ;
 int FUNC_1 (TYPE_4__) ;

__attribute__((used)) static int
FUNC_2(struct nfp_prog *VAR_3,
      struct nfp_insn_meta *VAR_4,
      const struct bpf_reg_state *VAR_5,
      struct bpf_verifier_env *VAR_6)
{
 s32 VAR_7, VAR_8;

 if (VAR_5->frameno != VAR_6->cur_state->curframe)
  VAR_4->flags |= VAR_1;

 if (!FUNC_1(VAR_5->var_off)) {
  FUNC_0(VAR_6, "variable ptr stack access\n");
  return -VAR_0;
 }

 if (VAR_4->ptr.type == VAR_2)
  return 0;

 VAR_7 = VAR_4->ptr.off + VAR_4->ptr.var_off.value;
 VAR_8 = VAR_5->off + VAR_5->var_off.value;

 VAR_4->ptr_not_const |= VAR_7 != VAR_8;

 if (!VAR_4->ptr_not_const)
  return 0;

 if (VAR_7 % 4 == VAR_8 % 4)
  return 0;

 FUNC_0(VAR_6, "stack access changed location was:%d is:%d\n",
  VAR_7, VAR_8);
 return -VAR_0;
}
