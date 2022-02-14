
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {scalar_t__ umin_value; scalar_t__ umax_value; scalar_t__ smin_value; scalar_t__ smax_value; } ;



__attribute__((used)) static bool FUNC_0(struct bpf_reg_state *VAR_0,
    struct bpf_reg_state *VAR_1)
{
 return VAR_0->umin_value <= VAR_1->umin_value &&
        VAR_0->umax_value >= VAR_1->umax_value &&
        VAR_0->smin_value <= VAR_1->smin_value &&
        VAR_0->smax_value >= VAR_1->smax_value;
}
