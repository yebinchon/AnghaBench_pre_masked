
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_omap_platform_data {int dummy; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 struct usbhs_omap_platform_data* FUNC_1 (struct device*) ;
 struct platform_device* FUNC_2 (int ,struct resource*,int,struct usbhs_omap_platform_data*,int,struct device*) ;
 int FUNC_3 (struct platform_device*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct usbhs_omap_platform_data *VAR_8 = FUNC_1(VAR_7);
 struct platform_device *VAR_9;
 struct platform_device *VAR_10;
 struct resource *VAR_11;
 struct resource VAR_12[2];
 int VAR_13;

 VAR_11 = FUNC_4(VAR_6, VAR_3, "ehci");
 if (!VAR_11) {
  FUNC_0(VAR_7, "EHCI get resource IORESOURCE_MEM failed\n");
  VAR_13 = -VAR_0;
  goto err_end;
 }
 VAR_12[0] = *VAR_11;

 VAR_11 = FUNC_4(VAR_6, VAR_2, "ehci-irq");
 if (!VAR_11) {
  FUNC_0(VAR_7, " EHCI get resource IORESOURCE_IRQ failed\n");
  VAR_13 = -VAR_0;
  goto err_end;
 }
 VAR_12[1] = *VAR_11;

 VAR_9 = FUNC_2(VAR_4, VAR_12, 2, VAR_8,
  sizeof(*VAR_8), VAR_7);

 if (!VAR_9) {
  FUNC_0(VAR_7, "omap_usbhs_alloc_child failed\n");
  VAR_13 = -VAR_1;
  goto err_end;
 }

 VAR_11 = FUNC_4(VAR_6, VAR_3, "ohci");
 if (!VAR_11) {
  FUNC_0(VAR_7, "OHCI get resource IORESOURCE_MEM failed\n");
  VAR_13 = -VAR_0;
  goto err_ehci;
 }
 VAR_12[0] = *VAR_11;

 VAR_11 = FUNC_4(VAR_6, VAR_2, "ohci-irq");
 if (!VAR_11) {
  FUNC_0(VAR_7, "OHCI get resource IORESOURCE_IRQ failed\n");
  VAR_13 = -VAR_0;
  goto err_ehci;
 }
 VAR_12[1] = *VAR_11;

 VAR_10 = FUNC_2(VAR_5, VAR_12, 2, VAR_8,
  sizeof(*VAR_8), VAR_7);
 if (!VAR_10) {
  FUNC_0(VAR_7, "omap_usbhs_alloc_child failed\n");
  VAR_13 = -VAR_1;
  goto err_ehci;
 }

 return 0;

err_ehci:
 FUNC_3(VAR_9);

err_end:
 return VAR_13;
}
