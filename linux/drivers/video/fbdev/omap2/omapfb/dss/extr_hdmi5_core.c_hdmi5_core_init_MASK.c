
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct hdmi_core_data {int base; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct resource*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,char*) ;

int FUNC_5(struct platform_device *VAR_2, struct hdmi_core_data *VAR_3)
{
 struct resource *VAR_4;

 VAR_4 = FUNC_4(VAR_2, VAR_1, "core");
 if (!VAR_4) {
  FUNC_0("can't get CORE IORESOURCE_MEM HDMI\n");
  return -VAR_0;
 }

 VAR_3->base = FUNC_3(&VAR_2->dev, VAR_4);
 if (FUNC_1(VAR_3->base)) {
  FUNC_0("can't ioremap HDMI core\n");
  return FUNC_2(VAR_3->base);
 }

 return 0;
}
