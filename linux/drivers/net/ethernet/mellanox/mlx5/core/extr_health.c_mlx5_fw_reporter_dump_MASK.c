
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fw_reporter_ctx {int dummy; } ;
struct mlx5_core_dev {int tracer; } ;
struct devlink_health_reporter {int dummy; } ;
struct devlink_fmsg {int dummy; } ;


 struct mlx5_core_dev* FUNC_0 (struct devlink_health_reporter*) ;
 int FUNC_1 (struct devlink_fmsg*,struct mlx5_fw_reporter_ctx*) ;
 int FUNC_2 (struct mlx5_core_dev*,struct devlink_fmsg*) ;
 int FUNC_3 (int ,struct devlink_fmsg*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;

__attribute__((used)) static int
FUNC_5(struct devlink_health_reporter *VAR_0,
        struct devlink_fmsg *VAR_1, void *VAR_2)
{
 struct mlx5_core_dev *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_2) {
  struct mlx5_fw_reporter_ctx *VAR_5 = VAR_2;

  VAR_4 = FUNC_1(VAR_1, VAR_5);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;
 return FUNC_3(VAR_3->tracer, VAR_1);
}
