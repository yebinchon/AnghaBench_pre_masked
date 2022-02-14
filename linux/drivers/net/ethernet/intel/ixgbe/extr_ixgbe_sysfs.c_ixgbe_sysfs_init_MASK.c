
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* sensor; } ;
struct TYPE_8__ {scalar_t__ (* init_thermal_sensor_thresh ) (TYPE_6__*) ;} ;
struct TYPE_11__ {TYPE_3__ thermal_sensor_data; TYPE_1__ ops; } ;
struct TYPE_13__ {TYPE_4__ mac; } ;
struct ixgbe_adapter {TYPE_5__* pdev; TYPE_6__ hw; struct hwmon_buff* ixgbe_hwmon_buff; } ;
struct TYPE_14__ {int attrs; } ;
struct hwmon_buff {TYPE_7__** groups; int attrs; TYPE_7__ group; } ;
struct device {int dummy; } ;
struct TYPE_12__ {int dev; } ;
struct TYPE_9__ {scalar_t__ location; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (int *,char*,struct hwmon_buff*,TYPE_7__**) ;
 struct hwmon_buff* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct ixgbe_adapter*,unsigned int,int ) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;

int FUNC_6(struct ixgbe_adapter *VAR_7)
{
 struct hwmon_buff *VAR_8;
 struct device *VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 0;


 if (VAR_7->hw.mac.ops.init_thermal_sensor_thresh == ((void*)0)) {
  goto exit;
 }


 if (VAR_7->hw.mac.ops.init_thermal_sensor_thresh(&VAR_7->hw))
  goto exit;

 VAR_8 = FUNC_3(&VAR_7->pdev->dev, sizeof(*VAR_8),
       VAR_1);
 if (VAR_8 == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto exit;
 }
 VAR_7->ixgbe_hwmon_buff = VAR_8;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {




  if (VAR_7->hw.mac.thermal_sensor_data.sensor[VAR_10].location == 0)
   continue;


  VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_2);
  if (VAR_11)
   goto exit;
  VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_3);
  if (VAR_11)
   goto exit;
  VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_5);
  if (VAR_11)
   goto exit;
  VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_4);
  if (VAR_11)
   goto exit;
 }

 VAR_8->groups[0] = &VAR_8->group;
 VAR_8->group.attrs = VAR_8->attrs;

 VAR_9 = FUNC_2(&VAR_7->pdev->dev,
          "ixgbe",
          VAR_8,
          VAR_8->groups);
 if (FUNC_0(VAR_9))
  VAR_11 = FUNC_1(VAR_9);
exit:
 return VAR_11;
}
