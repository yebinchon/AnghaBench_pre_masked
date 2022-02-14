
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {scalar_t__ type; int var_off; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct bpf_reg_state *VAR_1)
{
 return VAR_1->type == VAR_0 && FUNC_0(VAR_1->var_off);
}
