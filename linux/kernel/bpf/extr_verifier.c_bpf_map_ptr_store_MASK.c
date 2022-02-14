
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {int dummy; } ;
struct bpf_insn_aux_data {unsigned long map_state; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct bpf_insn_aux_data*) ;

__attribute__((used)) static void FUNC_2(struct bpf_insn_aux_data *VAR_2,
         const struct bpf_map *VAR_3, bool VAR_4)
{
 FUNC_0((unsigned long)VAR_0 & VAR_1);
 VAR_4 |= FUNC_1(VAR_2);
 VAR_2->map_state = (unsigned long)VAR_3 |
    (VAR_4 ? VAR_1 : 0UL);
}
