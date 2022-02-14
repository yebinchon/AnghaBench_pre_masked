
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_state {int curframe; struct bpf_func_state** frame; struct bpf_verifier_state* parent; } ;
struct bpf_verifier_env {int dummy; } ;
struct bpf_reg_state {scalar_t__ type; int precise; } ;
struct bpf_func_state {int allocated_stack; TYPE_1__* stack; struct bpf_reg_state* regs; } ;
struct TYPE_2__ {scalar_t__* slot_type; struct bpf_reg_state spilled_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(struct bpf_verifier_env *VAR_4,
         struct bpf_verifier_state *VAR_5)
{
 struct bpf_func_state *VAR_6;
 struct bpf_reg_state *VAR_7;
 int VAR_8, VAR_9;




 for (; VAR_5; VAR_5 = VAR_5->parent)
  for (VAR_8 = 0; VAR_8 <= VAR_5->curframe; VAR_8++) {
   VAR_6 = VAR_5->frame[VAR_8];
   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
    VAR_7 = &VAR_6->regs[VAR_9];
    if (VAR_7->type != VAR_2)
     continue;
    VAR_7->precise = 1;
   }
   for (VAR_9 = 0; VAR_9 < VAR_6->allocated_stack / VAR_1; VAR_9++) {
    if (VAR_6->stack[VAR_9].slot_type[0] != VAR_3)
     continue;
    VAR_7 = &VAR_6->stack[VAR_9].spilled_ptr;
    if (VAR_7->type != VAR_2)
     continue;
    VAR_7->precise = 1;
   }
  }
}
