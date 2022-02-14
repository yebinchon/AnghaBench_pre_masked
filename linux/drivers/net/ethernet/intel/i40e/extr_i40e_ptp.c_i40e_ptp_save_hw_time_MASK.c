
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_pf {int flags; int ptp_reset_start; int ptp_prev_hw_time; int ptp_caps; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 () ;

void FUNC_2(struct i40e_pf *VAR_1)
{

 if (!(VAR_1->flags & VAR_0))
  return;

 FUNC_0(&VAR_1->ptp_caps, &VAR_1->ptp_prev_hw_time, ((void*)0));

 VAR_1->ptp_reset_start = FUNC_1();
}
