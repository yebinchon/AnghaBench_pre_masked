
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ptp_system_timestamp {int dummy; } ;
struct mlx5_core_dev {TYPE_1__* iseg; } ;
struct TYPE_2__ {int internal_timer_l; int internal_timer_h; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ptp_system_timestamp*) ;
 int FUNC_2 (struct ptp_system_timestamp*) ;

u64 FUNC_3(struct mlx5_core_dev *VAR_0,
        struct ptp_system_timestamp *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_0(&VAR_0->iseg->internal_timer_h);
 FUNC_2(VAR_1);
 VAR_4 = FUNC_0(&VAR_0->iseg->internal_timer_l);
 FUNC_1(VAR_1);
 VAR_3 = FUNC_0(&VAR_0->iseg->internal_timer_h);
 if (VAR_2 != VAR_3) {

  FUNC_2(VAR_1);
  VAR_4 = FUNC_0(&VAR_0->iseg->internal_timer_l);
  FUNC_1(VAR_1);
 }

 return (u64)VAR_4 | (u64)VAR_3 << 32;
}
