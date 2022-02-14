
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {int umax_value; int umin_value; int var_off; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bpf_reg_state *VAR_0)
{
 VAR_0->var_off = FUNC_0(VAR_0->var_off,
          FUNC_1(VAR_0->umin_value,
       VAR_0->umax_value));
}
