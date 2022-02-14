
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct kirkwood_thermal_priv {struct thermal_zone_device* sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct thermal_zone_device*) ;
 int FUNC_1 (struct thermal_zone_device*) ;
 int FUNC_2 (int *,char*) ;
 struct thermal_zone_device* FUNC_3 (int *,struct resource*) ;
 struct kirkwood_thermal_priv* FUNC_4 (int *,int,int ) ;
 int VAR_3 ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct thermal_zone_device*) ;
 struct thermal_zone_device* FUNC_7 (char*,int ,int ,struct kirkwood_thermal_priv*,int *,int *,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct thermal_zone_device *VAR_5 = ((void*)0);
 struct kirkwood_thermal_priv *VAR_6;
 struct resource *VAR_7;

 VAR_6 = FUNC_4(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_4, VAR_2, 0);
 VAR_6->sensor = FUNC_3(&VAR_4->dev, VAR_7);
 if (FUNC_0(VAR_6->sensor))
  return FUNC_1(VAR_6->sensor);

 VAR_5 = FUNC_7("kirkwood_thermal", 0, 0,
            VAR_6, &VAR_3, ((void*)0), 0, 0);
 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_4->dev,
   "Failed to register thermal zone device\n");
  return FUNC_1(VAR_5);
 }

 FUNC_6(VAR_4, VAR_5);

 return 0;
}
