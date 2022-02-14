
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_health {void* fw_fatal_reporter; void* fw_reporter; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct devlink {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct devlink*,int *,int ,int,struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct devlink* FUNC_4 (struct mlx5_core_dev*) ;

__attribute__((used)) static void FUNC_5(struct mlx5_core_dev *VAR_3)
{
 struct mlx5_core_health *VAR_4 = &VAR_3->priv.health;
 struct devlink *VAR_5 = FUNC_4(VAR_3);

 VAR_4->fw_reporter =
  FUNC_2(VAR_5, &VAR_2,
            0, 0, VAR_3);
 if (FUNC_0(VAR_4->fw_reporter))
  FUNC_3(VAR_3, "Failed to create fw reporter, err = %ld\n",
          FUNC_1(VAR_4->fw_reporter));

 VAR_4->fw_fatal_reporter =
  FUNC_2(VAR_5,
            &VAR_1,
            VAR_0,
            1, VAR_3);
 if (FUNC_0(VAR_4->fw_fatal_reporter))
  FUNC_3(VAR_3, "Failed to create fw fatal reporter, err = %ld\n",
          FUNC_1(VAR_4->fw_fatal_reporter));
}
