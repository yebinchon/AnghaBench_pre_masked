
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_lag {int flags; TYPE_1__* pf; } ;
struct mlx5_core_dev {int dummy; } ;
struct lag_tracker {int dummy; } ;
struct TYPE_2__ {struct mlx5_core_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,char*) ;
 int FUNC_1 (struct mlx5_lag*,struct lag_tracker*) ;

int FUNC_2(struct mlx5_lag *VAR_1,
        struct lag_tracker *VAR_2,
        u8 VAR_3)
{
 bool VAR_4 = !!(VAR_3 & VAR_0);
 struct mlx5_core_dev *VAR_5 = VAR_1->pf[0].dev;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (VAR_6) {
  if (VAR_4) {
   FUNC_0(VAR_5,
          "Failed to activate RoCE LAG\n");
  } else {
   FUNC_0(VAR_5,
          "Failed to activate VF LAG\n"
          "Make sure all VFs are unbound prior to VF LAG activation or deactivation\n");
  }
  return VAR_6;
 }

 VAR_1->flags |= VAR_3;
 return 0;
}
