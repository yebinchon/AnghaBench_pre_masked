
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int mask; } ;
struct bpf_reg_state {TYPE_1__ var_off; int umax_value; int umin_value; int smax_value; int smin_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct bpf_reg_state *VAR_3)
{

 VAR_3->smin_value = FUNC_1(VAR_2, VAR_3->smin_value,
    VAR_3->var_off.value | (VAR_3->var_off.mask & VAR_1));

 VAR_3->smax_value = FUNC_3(VAR_2, VAR_3->smax_value,
    VAR_3->var_off.value | (VAR_3->var_off.mask & VAR_0));
 VAR_3->umin_value = FUNC_0(VAR_3->umin_value, VAR_3->var_off.value);
 VAR_3->umax_value = FUNC_2(VAR_3->umax_value,
         VAR_3->var_off.value | VAR_3->var_off.mask);
}
