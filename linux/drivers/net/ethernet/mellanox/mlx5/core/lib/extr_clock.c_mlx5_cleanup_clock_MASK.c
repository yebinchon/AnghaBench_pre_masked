
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pin_config; } ;
struct TYPE_3__ {int out_work; } ;
struct mlx5_clock {TYPE_2__ ptp_info; int overflow_work; TYPE_1__ pps_info; int * ptp; int pps_nb; } ;
struct mlx5_core_dev {int * clock_info; struct mlx5_clock clock; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mlx5_core_dev *VAR_1)
{
 struct mlx5_clock *VAR_2 = &VAR_1->clock;

 if (!FUNC_0(VAR_1, VAR_0))
  return;

 FUNC_5(VAR_1, &VAR_2->pps_nb);
 if (VAR_2->ptp) {
  FUNC_6(VAR_2->ptp);
  VAR_2->ptp = ((void*)0);
 }

 FUNC_2(&VAR_2->pps_info.out_work);
 FUNC_1(&VAR_2->overflow_work);

 if (VAR_1->clock_info) {
  FUNC_3((unsigned long)VAR_1->clock_info);
  VAR_1->clock_info = ((void*)0);
 }

 FUNC_4(VAR_2->ptp_info.pin_config);
}
