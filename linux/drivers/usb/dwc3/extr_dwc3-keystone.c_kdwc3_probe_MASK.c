
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct dwc3_keystone {struct device* dev; int usbss; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*) ;
 struct dwc3_keystone* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct device*,int,int ,int ,int ,struct dwc3_keystone*) ;
 int VAR_3 ;
 int FUNC_7 (struct dwc3_keystone*) ;
 int FUNC_8 (struct dwc3_keystone*) ;
 scalar_t__ FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*,int *,int *,struct device*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct platform_device*,struct dwc3_keystone*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 struct dwc3_keystone *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_4(VAR_5, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_12(VAR_4, VAR_7);

 VAR_7->dev = VAR_5;

 VAR_7->usbss = FUNC_5(VAR_4, 0);
 if (FUNC_0(VAR_7->usbss))
  return FUNC_1(VAR_7->usbss);

 FUNC_14(VAR_7->dev);

 VAR_8 = FUNC_15(VAR_7->dev);
 if (VAR_8 < 0) {
  FUNC_2(VAR_7->dev, "pm_runtime_get_sync failed, error %d\n",
   VAR_8);
  goto err_irq;
 }


 if (FUNC_9(VAR_6, "ti,am654-dwc3"))
  goto skip_irq;

 VAR_9 = FUNC_11(VAR_4, 0);
 if (VAR_9 < 0) {
  VAR_8 = VAR_9;
  goto err_irq;
 }

 VAR_8 = FUNC_6(VAR_5, VAR_9, VAR_3, VAR_2,
   FUNC_3(VAR_5), VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_5, "failed to request IRQ #%d --> %d\n",
    VAR_9, VAR_8);
  goto err_irq;
 }

 FUNC_8(VAR_7);

skip_irq:
 VAR_8 = FUNC_10(VAR_6, ((void*)0), ((void*)0), VAR_5);
 if (VAR_8) {
  FUNC_2(&VAR_4->dev, "failed to create dwc3 core\n");
  goto err_core;
 }

 return 0;

err_core:
 FUNC_7(VAR_7);
err_irq:
 FUNC_16(VAR_7->dev);
 FUNC_13(VAR_7->dev);

 return VAR_8;
}
