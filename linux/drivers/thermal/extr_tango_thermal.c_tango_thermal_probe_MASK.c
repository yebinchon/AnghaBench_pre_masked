
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct tango_thermal_priv {int thresh_idx; int base; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct thermal_zone_device*) ;
 int FUNC_3 (int *,struct resource*) ;
 struct tango_thermal_priv* FUNC_4 (int *,int,int ) ;
 struct thermal_zone_device* FUNC_5 (int *,int ,struct tango_thermal_priv*,int *) ;
 int VAR_4 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct tango_thermal_priv*) ;
 int FUNC_8 (struct tango_thermal_priv*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 struct tango_thermal_priv *VAR_7;
 struct thermal_zone_device *VAR_8;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_5, VAR_3, 0);
 VAR_7->base = FUNC_3(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 FUNC_7(VAR_5, VAR_7);
 VAR_7->thresh_idx = VAR_2;
 FUNC_8(VAR_7);

 VAR_8 = FUNC_5(&VAR_5->dev, 0, VAR_7, &VAR_4);
 return FUNC_2(VAR_8);
}
