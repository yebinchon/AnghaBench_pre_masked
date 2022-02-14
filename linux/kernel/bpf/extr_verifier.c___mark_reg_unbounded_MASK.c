
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {int umax_value; scalar_t__ umin_value; int smax_value; int smin_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct bpf_reg_state *VAR_3)
{
 VAR_3->smin_value = VAR_1;
 VAR_3->smax_value = VAR_0;
 VAR_3->umin_value = 0;
 VAR_3->umax_value = VAR_2;
}
