
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5_fw_reporter_ctx {int dummy; } ;
struct TYPE_3__ {scalar_t__ crdump_size; } ;
struct TYPE_4__ {TYPE_1__ health; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct devlink_health_reporter {int dummy; } ;
struct devlink_fmsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct devlink_fmsg*) ;
 int FUNC_1 (struct devlink_fmsg*,char*) ;
 int FUNC_2 (struct devlink_fmsg*,char*,scalar_t__) ;
 struct mlx5_core_dev* FUNC_3 (struct devlink_health_reporter*) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_core_dev*,scalar_t__*) ;
 int FUNC_8 (struct devlink_fmsg*,struct mlx5_fw_reporter_ctx*) ;

__attribute__((used)) static int
FUNC_9(struct devlink_health_reporter *VAR_4,
       struct devlink_fmsg *VAR_5, void *VAR_6)
{
 struct mlx5_core_dev *VAR_7 = FUNC_3(VAR_4);
 u32 VAR_8 = VAR_7->priv.health.crdump_size;
 u32 *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;

 if (!FUNC_6(VAR_7))
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_8, VAR_2);
 if (!VAR_9)
  return -VAR_0;
 VAR_12 = FUNC_7(VAR_7, VAR_9);
 if (VAR_12)
  goto free_data;

 if (VAR_6) {
  struct mlx5_fw_reporter_ctx *VAR_13 = VAR_6;

  VAR_12 = FUNC_8(VAR_5, VAR_13);
  if (VAR_12)
   goto free_data;
 }

 VAR_12 = FUNC_1(VAR_5, "crdump_data");
 if (VAR_12)
  goto free_data;
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11 += VAR_10) {
  if (VAR_8 - VAR_11 < VAR_3)
   VAR_10 = VAR_8 - VAR_11;
  else
   VAR_10 = VAR_3;
  VAR_12 = FUNC_2(VAR_5, (char *)VAR_9 + VAR_11,
           VAR_10);
  if (VAR_12)
   goto free_data;
 }
 VAR_12 = FUNC_0(VAR_5);

free_data:
 FUNC_4(VAR_9);
 return VAR_12;
}
