
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_lag {int flags; TYPE_1__* pf; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {struct mlx5_core_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_lag*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*) ;

__attribute__((used)) static int FUNC_3(struct mlx5_lag *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_1->pf[0].dev;
 bool VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_1->flags &= ~VAR_0;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4) {
  if (VAR_3) {
   FUNC_2(VAR_2,
          "Failed to deactivate RoCE LAG; driver restart required\n");
  } else {
   FUNC_2(VAR_2,
          "Failed to deactivate VF LAG; driver restart required\n"
          "Make sure all VFs are unbound prior to VF LAG activation or deactivation\n");
  }
 }

 return VAR_4;
}
