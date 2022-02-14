
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_health {int fw_fatal_reporter; int fw_reporter; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_core_health *VAR_1 = &VAR_0->priv.health;

 if (!FUNC_0(VAR_1->fw_reporter))
  FUNC_1(VAR_1->fw_reporter);

 if (!FUNC_0(VAR_1->fw_fatal_reporter))
  FUNC_1(VAR_1->fw_fatal_reporter);
}
