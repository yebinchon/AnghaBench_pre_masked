
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_pf {int ptp_prev_hw_time; int ptp_caps; int ptp_reset_start; } ;
typedef int ktime_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct i40e_pf *VAR_0)
{
 ktime_t VAR_1 = FUNC_2(FUNC_1(), VAR_0->ptp_reset_start);


 FUNC_4(&VAR_0->ptp_prev_hw_time, FUNC_3(VAR_1));


 FUNC_0(&VAR_0->ptp_caps, &VAR_0->ptp_prev_hw_time);
}
