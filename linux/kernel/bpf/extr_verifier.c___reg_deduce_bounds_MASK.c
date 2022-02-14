
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_reg_state {scalar_t__ smin_value; scalar_t__ smax_value; scalar_t__ umin_value; scalar_t__ umax_value; } ;
typedef scalar_t__ s64 ;


 void* FUNC_0 (int ,scalar_t__,scalar_t__) ;
 void* FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct bpf_reg_state *VAR_1)
{





 if (VAR_1->smin_value >= 0 || VAR_1->smax_value < 0) {
  VAR_1->smin_value = VAR_1->umin_value = FUNC_0(VAR_0, VAR_1->smin_value,
         VAR_1->umin_value);
  VAR_1->smax_value = VAR_1->umax_value = FUNC_1(VAR_0, VAR_1->smax_value,
         VAR_1->umax_value);
  return;
 }



 if ((s64)VAR_1->umax_value >= 0) {



  VAR_1->smin_value = VAR_1->umin_value;
  VAR_1->smax_value = VAR_1->umax_value = FUNC_1(VAR_0, VAR_1->smax_value,
         VAR_1->umax_value);
 } else if ((s64)VAR_1->umin_value < 0) {



  VAR_1->smin_value = VAR_1->umin_value = FUNC_0(VAR_0, VAR_1->smin_value,
         VAR_1->umin_value);
  VAR_1->smax_value = VAR_1->umax_value;
 }
}
