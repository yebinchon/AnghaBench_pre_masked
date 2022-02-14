
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bpf_reg_state {int umin_value; int umax_value; int smin_value; int smax_value; int var_off; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct bpf_reg_state *VAR_0, int VAR_1)
{
 u64 VAR_2;


 VAR_0->var_off = FUNC_0(VAR_0->var_off, VAR_1);


 VAR_2 = ((u64)1 << (VAR_1 * 8)) - 1;
 if ((VAR_0->umin_value & ~VAR_2) == (VAR_0->umax_value & ~VAR_2)) {
  VAR_0->umin_value &= VAR_2;
  VAR_0->umax_value &= VAR_2;
 } else {
  VAR_0->umin_value = 0;
  VAR_0->umax_value = VAR_2;
 }
 VAR_0->smin_value = VAR_0->umin_value;
 VAR_0->smax_value = VAR_0->umax_value;
}
