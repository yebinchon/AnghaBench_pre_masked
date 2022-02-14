
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct gadc_thermal_info {int tz_dev; int channel; TYPE_1__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 struct gadc_thermal_info* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,struct gadc_thermal_info*,int *) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*,struct gadc_thermal_info*) ;
 int FUNC_7 (struct platform_device*,struct gadc_thermal_info*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct gadc_thermal_info *VAR_5;
 int VAR_6;

 if (!VAR_4->dev.of_node) {
  FUNC_2(&VAR_4->dev, "Only DT based supported\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_6(&VAR_4->dev, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->dev = &VAR_4->dev;
 FUNC_7(VAR_4, VAR_5);

 VAR_5->channel = FUNC_3(&VAR_4->dev, "sensor-channel");
 if (FUNC_0(VAR_5->channel)) {
  VAR_6 = FUNC_1(VAR_5->channel);
  FUNC_2(&VAR_4->dev, "IIO channel not found: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_5->tz_dev = FUNC_5(&VAR_4->dev, 0, VAR_5,
          &VAR_3);
 if (FUNC_0(VAR_5->tz_dev)) {
  VAR_6 = FUNC_1(VAR_5->tz_dev);
  FUNC_2(&VAR_4->dev, "Thermal zone sensor register failed: %d\n",
   VAR_6);
  return VAR_6;
 }

 return 0;
}
