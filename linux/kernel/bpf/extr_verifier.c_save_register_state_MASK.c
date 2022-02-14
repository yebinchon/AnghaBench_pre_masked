
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_reg_state {int live; } ;
struct bpf_func_state {TYPE_1__* stack; } ;
struct TYPE_2__ {int * slot_type; struct bpf_reg_state spilled_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct bpf_func_state *VAR_3,
    int VAR_4, struct bpf_reg_state *VAR_5)
{
 int VAR_6;

 VAR_3->stack[VAR_4].spilled_ptr = *VAR_5;
 VAR_3->stack[VAR_4].spilled_ptr.live |= VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_3->stack[VAR_4].slot_type[VAR_6] = VAR_2;
}
