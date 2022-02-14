
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct hdmi_phy_data {int base; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct resource*) ;
 int FUNC_4 () ;
 int VAR_3 ;
 struct resource* FUNC_5 (struct platform_device*,int ,char*) ;

int FUNC_6(struct platform_device *VAR_4, struct hdmi_phy_data *VAR_5)
{
 struct resource *VAR_6;

 VAR_3 = FUNC_4();
 if (!VAR_3)
  return -VAR_1;

 VAR_6 = FUNC_5(VAR_4, VAR_2, "phy");
 if (!VAR_6) {
  FUNC_0("can't get PHY mem resource\n");
  return -VAR_0;
 }

 VAR_5->base = FUNC_3(&VAR_4->dev, VAR_6);
 if (FUNC_1(VAR_5->base)) {
  FUNC_0("can't ioremap TX PHY\n");
  return FUNC_2(VAR_5->base);
 }

 return 0;
}
