
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct bpf_verifier_state {size_t curframe; struct bpf_func_state** frame; } ;
struct bpf_verifier_env {int insn_idx; struct bpf_verifier_state* cur_state; } ;
struct bpf_reg_state {scalar_t__ type; int precise; int live; int parent; } ;
struct bpf_func_state {int allocated_stack; struct bpf_reg_state* regs; TYPE_1__* stack; } ;
struct TYPE_2__ {struct bpf_reg_state spilled_ptr; scalar_t__* slot_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct bpf_reg_state*) ;
 int FUNC_1 (struct bpf_verifier_env*,struct bpf_reg_state*,int ,int ) ;
 int FUNC_2 (struct bpf_verifier_env*,struct bpf_reg_state*,int) ;
 int FUNC_3 (struct bpf_verifier_env*,char*,...) ;
 int FUNC_4 (struct bpf_verifier_env*,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct bpf_verifier_env *VAR_8,
       struct bpf_func_state *VAR_9 ,
       int VAR_10, int VAR_11, int VAR_12)
{
 struct bpf_verifier_state *VAR_13 = VAR_8->cur_state;
 struct bpf_func_state *VAR_14 = VAR_13->frame[VAR_13->curframe];
 int VAR_15, VAR_16 = -VAR_10 - 1, VAR_17 = VAR_16 / VAR_0;
 struct bpf_reg_state *VAR_18;
 u8 *VAR_19;

 if (VAR_9->allocated_stack <= VAR_16) {
  FUNC_3(VAR_8, "invalid read from stack off %d+0 size %d\n",
   VAR_10, VAR_11);
  return -VAR_1;
 }
 VAR_19 = VAR_9->stack[VAR_17].slot_type;
 VAR_18 = &VAR_9->stack[VAR_17].spilled_ptr;

 if (VAR_19[0] == VAR_6) {
  if (VAR_11 != VAR_0) {
   if (VAR_18->type != VAR_4) {
    FUNC_4(VAR_8, VAR_8->insn_idx, "; ");
    FUNC_3(VAR_8, "invalid size of register fill\n");
    return -VAR_1;
   }
   if (VAR_12 >= 0) {
    FUNC_2(VAR_8, VAR_14->regs, VAR_12);
    VAR_14->regs[VAR_12].live |= VAR_3;
   }
   FUNC_1(VAR_8, VAR_18, VAR_18->parent, VAR_2);
   return 0;
  }
  for (VAR_15 = 1; VAR_15 < VAR_0; VAR_15++) {
   if (VAR_19[(VAR_16 - VAR_15) % VAR_0] != VAR_6) {
    FUNC_3(VAR_8, "corrupted spill memory\n");
    return -VAR_1;
   }
  }

  if (VAR_12 >= 0) {

   VAR_14->regs[VAR_12] = *VAR_18;




   VAR_14->regs[VAR_12].live |= VAR_3;
  }
  FUNC_1(VAR_8, VAR_18, VAR_18->parent, VAR_2);
 } else {
  int VAR_20 = 0;

  for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
   if (VAR_19[(VAR_16 - VAR_15) % VAR_0] == VAR_5)
    continue;
   if (VAR_19[(VAR_16 - VAR_15) % VAR_0] == VAR_7) {
    VAR_20++;
    continue;
   }
   FUNC_3(VAR_8, "invalid read from stack off %d+%d size %d\n",
    VAR_10, VAR_15, VAR_11);
   return -VAR_1;
  }
  FUNC_1(VAR_8, VAR_18, VAR_18->parent, VAR_2);
  if (VAR_12 >= 0) {
   if (VAR_20 == VAR_11) {



    FUNC_0(&VAR_14->regs[VAR_12]);
    VAR_14->regs[VAR_12].precise = 1;
   } else {

    FUNC_2(VAR_8, VAR_14->regs, VAR_12);
   }
   VAR_14->regs[VAR_12].live |= VAR_3;
  }
 }
 return 0;
}
