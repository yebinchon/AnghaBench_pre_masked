
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct bpf_verifier_env {int subprog_cnt; scalar_t__ insn_idx; TYPE_3__* cur_state; TYPE_2__* ops; TYPE_1__* prog; } ;
struct bpf_reg_state {scalar_t__ type; scalar_t__ subreg_def; } ;
struct bpf_insn {size_t dst_reg; scalar_t__ off; size_t src_reg; int code; } ;
struct TYPE_6__ {scalar_t__ active_spin_lock; } ;
struct TYPE_5__ {int gen_ld_abs; } ;
struct TYPE_4__ {int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 size_t* VAR_10 ;
 int FUNC_2 (struct bpf_verifier_env*) ;
 int FUNC_3 (struct bpf_verifier_env*,size_t,int ) ;
 struct bpf_reg_state* FUNC_4 (struct bpf_verifier_env*) ;
 int FUNC_5 (struct bpf_verifier_env*,struct bpf_reg_state*,size_t) ;
 int FUNC_6 (struct bpf_verifier_env*,struct bpf_reg_state*,size_t) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct bpf_verifier_env*,char*) ;

__attribute__((used)) static int FUNC_9(struct bpf_verifier_env *VAR_11, struct bpf_insn *VAR_12)
{
 struct bpf_reg_state *VAR_13 = FUNC_4(VAR_11);
 u8 VAR_14 = FUNC_0(VAR_12->code);
 int VAR_15, VAR_16;

 if (!FUNC_7(VAR_11->prog->type)) {
  FUNC_8(VAR_11, "BPF_LD_[ABS|IND] instructions not allowed for this program type\n");
  return -VAR_7;
 }

 if (!VAR_11->ops->gen_ld_abs) {
  FUNC_8(VAR_11, "bpf verifier is misconfigured\n");
  return -VAR_7;
 }

 if (VAR_11->subprog_cnt > 1) {







  FUNC_8(VAR_11, "BPF_LD_[ABS|IND] instructions cannot be mixed with bpf-to-bpf calls\n");
  return -VAR_7;
 }

 if (VAR_12->dst_reg != VAR_3 || VAR_12->off != 0 ||
     FUNC_1(VAR_12->code) == VAR_1 ||
     (VAR_14 == VAR_0 && VAR_12->src_reg != VAR_3)) {
  FUNC_8(VAR_11, "BPF_LD_[ABS|IND] uses reserved fields\n");
  return -VAR_7;
 }


 VAR_16 = FUNC_3(VAR_11, VAR_4, VAR_9);
 if (VAR_16)
  return VAR_16;





 VAR_16 = FUNC_2(VAR_11);
 if (VAR_16) {
  FUNC_8(VAR_11, "BPF_LD_[ABS|IND] cannot be mixed with socket references\n");
  return VAR_16;
 }

 if (VAR_11->cur_state->active_spin_lock) {
  FUNC_8(VAR_11, "BPF_LD_[ABS|IND] cannot be used inside bpf_spin_lock-ed region\n");
  return -VAR_7;
 }

 if (VAR_13[VAR_4].type != VAR_8) {
  FUNC_8(VAR_11,
   "at the time of BPF_LD_ABS|IND R6 != pointer to skb\n");
  return -VAR_7;
 }

 if (VAR_14 == VAR_2) {

  VAR_16 = FUNC_3(VAR_11, VAR_12->src_reg, VAR_9);
  if (VAR_16)
   return VAR_16;
 }


 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  FUNC_5(VAR_11, VAR_13, VAR_10[VAR_15]);
  FUNC_3(VAR_11, VAR_10[VAR_15], VAR_6);
 }





 FUNC_6(VAR_11, VAR_13, VAR_3);

 VAR_13[VAR_3].subreg_def = VAR_11->insn_idx + 1;
 return 0;
}
