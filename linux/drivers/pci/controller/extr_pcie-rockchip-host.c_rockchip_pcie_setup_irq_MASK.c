
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie {struct device* dev; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int,int ,int ,char*,struct rockchip_pcie*) ;
 int FUNC_2 (int,int ,struct rockchip_pcie*) ;
 int FUNC_3 (struct platform_device*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct rockchip_pcie *VAR_4)
{
 int VAR_5, VAR_6;
 struct device *VAR_7 = VAR_4->dev;
 struct platform_device *VAR_8 = FUNC_4(VAR_7);

 VAR_5 = FUNC_3(VAR_8, "sys");
 if (VAR_5 < 0) {
  FUNC_0(VAR_7, "missing sys IRQ resource\n");
  return VAR_5;
 }

 VAR_6 = FUNC_1(VAR_7, VAR_5, VAR_3,
          VAR_0, "pcie-sys", VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_7, "failed to request PCIe subsystem IRQ\n");
  return VAR_6;
 }

 VAR_5 = FUNC_3(VAR_8, "legacy");
 if (VAR_5 < 0) {
  FUNC_0(VAR_7, "missing legacy IRQ resource\n");
  return VAR_5;
 }

 FUNC_2(VAR_5,
      VAR_2,
      VAR_4);

 VAR_5 = FUNC_3(VAR_8, "client");
 if (VAR_5 < 0) {
  FUNC_0(VAR_7, "missing client IRQ resource\n");
  return VAR_5;
 }

 VAR_6 = FUNC_1(VAR_7, VAR_5, VAR_1,
          VAR_0, "pcie-client", VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_7, "failed to request PCIe client IRQ\n");
  return VAR_6;
 }

 return 0;
}
