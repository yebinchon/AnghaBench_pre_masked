
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct bpf_verifier_env {TYPE_4__* insn_aux_data; scalar_t__ allow_ptr_leaks; TYPE_3__* cur_state; TYPE_2__* prog; } ;
struct bpf_reg_state {scalar_t__ type; int live; } ;
struct bpf_func_state {TYPE_5__* stack; struct bpf_reg_state* regs; int acquired_refs; } ;
struct TYPE_10__ {scalar_t__* slot_type; struct bpf_reg_state spilled_ptr; } ;
struct TYPE_9__ {int sanitize_stack_off; } ;
struct TYPE_8__ {size_t curframe; struct bpf_func_state** frame; } ;
struct TYPE_7__ {TYPE_1__* insnsi; } ;
struct TYPE_6__ {scalar_t__ dst_reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bpf_verifier_env*,int) ;
 int FUNC_2 (struct bpf_func_state*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct bpf_reg_state*) ;
 scalar_t__ FUNC_4 (struct bpf_reg_state*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct bpf_func_state*,int,struct bpf_reg_state*) ;
 int FUNC_7 (struct bpf_verifier_env*,char*,...) ;
 int FUNC_8 (struct bpf_verifier_env*,int,char*) ;

__attribute__((used)) static int FUNC_9(struct bpf_verifier_env *VAR_10,
        struct bpf_func_state *VAR_11,
        int VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 struct bpf_func_state *VAR_16;
 int VAR_17, VAR_18 = -VAR_12 - 1, VAR_19 = VAR_18 / VAR_1, VAR_20;
 u32 VAR_21 = VAR_10->prog->insnsi[VAR_15].dst_reg;
 struct bpf_reg_state *VAR_22 = ((void*)0);

 VAR_20 = FUNC_2(VAR_11, FUNC_5(VAR_18 + 1, VAR_1),
     VAR_11->acquired_refs, 1);
 if (VAR_20)
  return VAR_20;



 if (!VAR_10->allow_ptr_leaks &&
     VAR_11->stack[VAR_19].slot_type[0] == VAR_8 &&
     VAR_13 != VAR_1) {
  FUNC_7(VAR_10, "attempt to corrupt spilled pointer on stack\n");
  return -VAR_2;
 }

 VAR_16 = VAR_10->cur_state->frame[VAR_10->cur_state->curframe];
 if (VAR_14 >= 0)
  VAR_22 = &VAR_16->regs[VAR_14];

 if (VAR_22 && VAR_13 == VAR_1 && FUNC_3(VAR_22) &&
     !FUNC_4(VAR_22) && VAR_10->allow_ptr_leaks) {
  if (VAR_21 != VAR_0) {






   VAR_20 = FUNC_1(VAR_10, VAR_14);
   if (VAR_20)
    return VAR_20;
  }
  FUNC_6(VAR_11, VAR_19, VAR_22);
 } else if (VAR_22 && FUNC_0(VAR_22->type)) {

  if (VAR_13 != VAR_1) {
   FUNC_8(VAR_10, VAR_15, "; ");
   FUNC_7(VAR_10, "invalid size of register spill\n");
   return -VAR_2;
  }

  if (VAR_11 != VAR_16 && VAR_22->type == VAR_5) {
   FUNC_7(VAR_10, "cannot spill pointers to stack into stack frame of the caller\n");
   return -VAR_3;
  }

  if (!VAR_10->allow_ptr_leaks) {
   bool VAR_23 = 0;

   if (VAR_11->stack[VAR_19].slot_type[0] == VAR_8 &&
       FUNC_3(&VAR_11->stack[VAR_19].spilled_ptr))
    VAR_23 = 1;
   for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
    if (VAR_11->stack[VAR_19].slot_type[VAR_17] == VAR_7) {
     VAR_23 = 1;
     break;
    }
   if (VAR_23) {
    int *VAR_24 = &VAR_10->insn_aux_data[VAR_15].sanitize_stack_off;
    int VAR_25 = (-VAR_19 - 1) * VAR_1;
    if (*VAR_24 && *VAR_24 != VAR_25) {




     FUNC_7(VAR_10,
      "insn %d cannot access two stack slots fp%d and fp%d",
      VAR_15, *VAR_24, VAR_25);
     return -VAR_3;
    }
    *VAR_24 = VAR_25;
   }
  }
  FUNC_6(VAR_11, VAR_19, VAR_22);
 } else {
  u8 VAR_26 = VAR_7;


  VAR_11->stack[VAR_19].spilled_ptr.type = VAR_4;

  if (VAR_11->stack[VAR_19].slot_type[0] == VAR_8)
   for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
    VAR_11->stack[VAR_19].slot_type[VAR_17] = VAR_7;
  if (VAR_13 == VAR_1)
   VAR_11->stack[VAR_19].spilled_ptr.live |= VAR_6;


  if (VAR_22 && FUNC_4(VAR_22)) {

   VAR_20 = FUNC_1(VAR_10, VAR_14);
   if (VAR_20)
    return VAR_20;
   VAR_26 = VAR_9;
  }


  for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++)
   VAR_11->stack[VAR_19].slot_type[(VAR_18 - VAR_17) % VAR_1] =
    VAR_26;
 }
 return 0;
}
