
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn_aux_data {int map_state; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_1(const struct bpf_insn_aux_data *VAR_1)
{
 return FUNC_0(VAR_1->map_state) == VAR_0;
}
