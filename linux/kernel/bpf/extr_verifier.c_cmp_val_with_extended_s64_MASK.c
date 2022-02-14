
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {scalar_t__ smin_value; scalar_t__ smax_value; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(s64 VAR_2, struct bpf_reg_state *VAR_3)
{
 return ((s32)VAR_2 >= 0 &&
  VAR_3->smin_value >= 0 && VAR_3->smax_value <= VAR_0) ||
        ((s32)VAR_2 < 0 &&
  VAR_3->smax_value <= 0 && VAR_3->smin_value >= VAR_1);
}
