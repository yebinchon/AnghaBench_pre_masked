
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn_aux_data {int map_state; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct bpf_insn_aux_data *VAR_1)
{
 return VAR_1->map_state & VAR_0;
}
