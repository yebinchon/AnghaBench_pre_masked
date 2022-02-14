
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct dove_thermal_priv {struct thermal_zone_device* control; struct thermal_zone_device* sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct thermal_zone_device*) ;
 int FUNC_1 (struct thermal_zone_device*) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,struct resource*) ;
 struct dove_thermal_priv* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct dove_thermal_priv*) ;
 int VAR_3 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int) ;
 int FUNC_7 (struct platform_device*,struct thermal_zone_device*) ;
 struct thermal_zone_device* FUNC_8 (char*,int ,int ,struct dove_thermal_priv*,int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct thermal_zone_device *VAR_5 = ((void*)0);
 struct dove_thermal_priv *VAR_6;
 struct resource *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_4, VAR_2, 0);
 VAR_6->sensor = FUNC_3(&VAR_4->dev, VAR_7);
 if (FUNC_0(VAR_6->sensor))
  return FUNC_1(VAR_6->sensor);

 VAR_7 = FUNC_6(VAR_4, VAR_2, 1);
 VAR_6->control = FUNC_3(&VAR_4->dev, VAR_7);
 if (FUNC_0(VAR_6->control))
  return FUNC_1(VAR_6->control);

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8) {
  FUNC_2(&VAR_4->dev, "Failed to initialize sensor\n");
  return VAR_8;
 }

 VAR_5 = FUNC_8("dove_thermal", 0, 0,
            VAR_6, &VAR_3, ((void*)0), 0, 0);
 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_4->dev,
   "Failed to register thermal zone device\n");
  return FUNC_1(VAR_5);
 }

 FUNC_7(VAR_4, VAR_5);

 return 0;
}
