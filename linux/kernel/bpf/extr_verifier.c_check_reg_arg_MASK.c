
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct bpf_verifier_state {size_t curframe; struct bpf_func_state** frame; } ;
struct bpf_verifier_env {int insn_idx; TYPE_1__* prog; struct bpf_verifier_state* cur_state; } ;
struct bpf_reg_state {scalar_t__ type; int subreg_def; int live; int parent; } ;
struct bpf_insn {int dummy; } ;
struct bpf_func_state {struct bpf_reg_state* regs; } ;
typedef enum reg_arg_type { ____Placeholder_reg_arg_type } reg_arg_type ;
struct TYPE_2__ {struct bpf_insn* insnsi; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct bpf_verifier_env*,struct bpf_insn*,size_t,struct bpf_reg_state*,int) ;
 int FUNC_1 (struct bpf_verifier_env*,struct bpf_reg_state*) ;
 int FUNC_2 (struct bpf_verifier_env*,struct bpf_reg_state*,int ,int ) ;
 int FUNC_3 (struct bpf_verifier_env*,struct bpf_reg_state*,size_t) ;
 int FUNC_4 (struct bpf_verifier_env*,char*,...) ;

__attribute__((used)) static int FUNC_5(struct bpf_verifier_env *VAR_11, u32 VAR_12,
    enum reg_arg_type VAR_13)
{
 struct bpf_verifier_state *VAR_14 = VAR_11->cur_state;
 struct bpf_func_state *VAR_15 = VAR_14->frame[VAR_14->curframe];
 struct bpf_insn *VAR_16 = VAR_11->prog->insnsi + VAR_11->insn_idx;
 struct bpf_reg_state *VAR_17, *VAR_18 = VAR_15->regs;
 bool VAR_19;

 if (VAR_12 >= VAR_5) {
  FUNC_4(VAR_11, "R%d is invalid\n", VAR_12);
  return -VAR_4;
 }

 VAR_17 = &VAR_18[VAR_12];
 VAR_19 = FUNC_0(VAR_11, VAR_16, VAR_12, VAR_17, VAR_13);
 if (VAR_13 == VAR_10) {

  if (VAR_17->type == VAR_6) {
   FUNC_4(VAR_11, "R%d !read_ok\n", VAR_12);
   return -VAR_3;
  }

  if (VAR_12 == VAR_0)
   return 0;

  if (VAR_19)
   FUNC_1(VAR_11, VAR_17);

  return FUNC_2(VAR_11, VAR_17, VAR_17->parent,
         VAR_19 ? VAR_8 : VAR_7);
 } else {

  if (VAR_12 == VAR_0) {
   FUNC_4(VAR_11, "frame pointer is read only\n");
   return -VAR_3;
  }
  VAR_17->live |= VAR_9;
  VAR_17->subreg_def = VAR_19 ? VAR_1 : VAR_11->insn_idx + 1;
  if (VAR_13 == VAR_2)
   FUNC_3(VAR_11, VAR_18, VAR_12);
 }
 return 0;
}
