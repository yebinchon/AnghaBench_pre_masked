
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {int type; scalar_t__ id; scalar_t__ off; int var_off; } ;
typedef enum bpf_reg_type { ____Placeholder_bpf_reg_type } bpf_reg_type ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct bpf_reg_state *VAR_0,
        enum bpf_reg_type VAR_1)
{




 return VAR_0->type == VAR_1 &&
        VAR_0->id == 0 &&
        VAR_0->off == 0 &&
        FUNC_0(VAR_0->var_off, 0);
}
