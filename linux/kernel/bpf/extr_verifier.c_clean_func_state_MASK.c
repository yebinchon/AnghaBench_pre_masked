
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_verifier_env {int dummy; } ;
struct bpf_func_state {int allocated_stack; TYPE_1__* stack; TYPE_2__* regs; } ;
typedef enum bpf_reg_liveness { ____Placeholder_bpf_reg_liveness } bpf_reg_liveness ;
struct TYPE_4__ {int live; } ;
struct TYPE_3__ {int * slot_type; TYPE_2__ spilled_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct bpf_verifier_env *VAR_5,
        struct bpf_func_state *VAR_6)
{
 enum bpf_reg_liveness VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = VAR_6->regs[VAR_8].live;

  VAR_6->regs[VAR_8].live |= VAR_2;
  if (!(VAR_7 & VAR_3))



   FUNC_0(&VAR_6->regs[VAR_8]);
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->allocated_stack / VAR_1; VAR_8++) {
  VAR_7 = VAR_6->stack[VAR_8].spilled_ptr.live;

  VAR_6->stack[VAR_8].spilled_ptr.live |= VAR_2;
  if (!(VAR_7 & VAR_3)) {
   FUNC_0(&VAR_6->stack[VAR_8].spilled_ptr);
   for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
    VAR_6->stack[VAR_8].slot_type[VAR_9] = VAR_4;
  }
 }
}
