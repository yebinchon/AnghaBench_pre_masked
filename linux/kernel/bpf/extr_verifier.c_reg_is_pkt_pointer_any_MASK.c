
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bpf_reg_state const*) ;

__attribute__((used)) static bool FUNC_1(const struct bpf_reg_state *VAR_1)
{
 return FUNC_0(VAR_1) ||
        VAR_1->type == VAR_0;
}
