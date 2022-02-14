
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct brcmstb_thermal_priv {struct thermal_zone_device* thermal; int * dev; struct thermal_zone_device* tmon_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct thermal_zone_device*) ;
 int FUNC_1 (struct thermal_zone_device*) ;
 int VAR_5 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 struct thermal_zone_device* FUNC_4 (int *,struct resource*) ;
 struct brcmstb_thermal_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int *,int ,int ,int ,struct brcmstb_thermal_priv*) ;
 struct thermal_zone_device* FUNC_7 (int *,int ,struct brcmstb_thermal_priv*,int *) ;
 int VAR_6 ;
 int FUNC_8 (struct platform_device*,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct brcmstb_thermal_priv*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct thermal_zone_device *VAR_8;
 struct brcmstb_thermal_priv *VAR_9;
 struct resource *VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_9(VAR_7, VAR_3, 0);
 VAR_9->tmon_base = FUNC_4(&VAR_7->dev, VAR_10);
 if (FUNC_0(VAR_9->tmon_base))
  return FUNC_1(VAR_9->tmon_base);

 VAR_9->dev = &VAR_7->dev;
 FUNC_10(VAR_7, VAR_9);

 VAR_8 = FUNC_7(&VAR_7->dev, 0, VAR_9,
             &VAR_6);
 if (FUNC_0(VAR_8)) {
  VAR_12 = FUNC_1(VAR_8);
  FUNC_2(&VAR_7->dev, "could not register sensor: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_9->thermal = VAR_8;

 VAR_11 = FUNC_8(VAR_7, 0);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_7->dev, "could not get IRQ\n");
  return VAR_11;
 }
 VAR_12 = FUNC_6(&VAR_7->dev, VAR_11, ((void*)0),
     VAR_5, VAR_4,
     VAR_0, VAR_9);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_7->dev, "could not request IRQ: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_3(&VAR_7->dev, "registered AVS TMON of-sensor driver\n");

 return 0;
}
