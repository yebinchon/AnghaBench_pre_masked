
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dw_pcie {int * ops; struct device* dev; } ;
struct meson_pcie {int reset_gpio; struct dw_pcie pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct meson_pcie* FUNC_4 (struct device*,int,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct meson_pcie*,struct platform_device*) ;
 int FUNC_6 (struct platform_device*,struct meson_pcie*) ;
 int FUNC_7 (struct meson_pcie*) ;
 int FUNC_8 (struct meson_pcie*) ;
 int FUNC_9 (struct meson_pcie*) ;
 int FUNC_10 (struct meson_pcie*) ;
 int FUNC_11 (struct platform_device*,struct meson_pcie*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct dw_pcie *VAR_6;
 struct meson_pcie *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_5, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = &VAR_7->pci;
 VAR_6->dev = VAR_5;
 VAR_6->ops = &VAR_3;

 VAR_7->reset_gpio = FUNC_3(VAR_5, "reset", VAR_2);
 if (FUNC_0(VAR_7->reset_gpio)) {
  FUNC_2(VAR_5, "get reset gpio failed\n");
  return FUNC_1(VAR_7->reset_gpio);
 }

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_5, "get reset resource failed, %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_6(VAR_4, VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_5, "get memory resource failed, %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_8(VAR_7);
 FUNC_10(VAR_7);

 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_5, "init clock resources failed, %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_11(VAR_4, VAR_7);

 VAR_8 = FUNC_5(VAR_7, VAR_4);
 if (VAR_8 < 0) {
  FUNC_2(VAR_5, "Add PCIe port failed, %d\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
