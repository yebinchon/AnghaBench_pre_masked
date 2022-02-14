
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union devlink_param_value {scalar_t__ vbool; int vu32; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct mlx4_priv {struct mlx4_dev dev; } ;
struct mlx4_fw_crdump {scalar_t__ snapshot_enable; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {struct mlx4_fw_crdump crdump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct devlink*,int ,union devlink_param_value*) ;
 int FUNC_1 (struct devlink*,int ) ;
 struct mlx4_priv* FUNC_2 (struct devlink*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct devlink *VAR_9)
{
 struct mlx4_priv *VAR_10 = FUNC_2(VAR_9);
 struct mlx4_dev *VAR_11 = &VAR_10->dev;
 struct mlx4_fw_crdump *VAR_12 = &VAR_11->persist->crdump;
 union devlink_param_value VAR_13;
 int VAR_14;

 VAR_14 = FUNC_0(VAR_9,
       VAR_0,
       &VAR_13);
 if (!VAR_14 && VAR_8 != VAR_13.vbool) {
  VAR_8 = VAR_13.vbool;

  FUNC_1(VAR_9,
         VAR_0);
 }
 VAR_14 = FUNC_0(VAR_9,
       VAR_1,
       &VAR_13);
 if (!VAR_14)
  VAR_7 = FUNC_3(VAR_13.vu32);
 VAR_14 = FUNC_0(VAR_9,
       VAR_4,
       &VAR_13);
 if (!VAR_14)
  VAR_6 = VAR_13.vbool;
 VAR_14 = FUNC_0(VAR_9,
       VAR_3,
       &VAR_13);
 if (!VAR_14)
  VAR_5 = VAR_13.vbool;
 VAR_14 = FUNC_0(VAR_9,
       VAR_2,
       &VAR_13);
 if (!VAR_14 && VAR_12->snapshot_enable != VAR_13.vbool) {
  VAR_12->snapshot_enable = VAR_13.vbool;
  FUNC_1(VAR_9,
         VAR_2);
 }
}
