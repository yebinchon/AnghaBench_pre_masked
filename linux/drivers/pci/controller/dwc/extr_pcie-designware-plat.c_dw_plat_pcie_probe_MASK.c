
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct dw_plat_pcie_of_data {scalar_t__ mode; } ;
struct dw_plat_pcie {int mode; struct dw_pcie* pci; } ;
struct dw_pcie {int dbi_base; int * ops; struct device* dev; } ;
typedef enum dw_pcie_device_mode { ____Placeholder_dw_pcie_device_mode } dw_pcie_device_mode ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,struct resource*) ;
 void* FUNC_5 (struct device*,int,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct dw_plat_pcie*,struct platform_device*) ;
 int FUNC_7 (struct dw_plat_pcie*,struct platform_device*) ;
 int VAR_8 ;
 struct of_device_id* FUNC_8 (int ,struct device*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 struct resource* FUNC_10 (struct platform_device*,int ,char*) ;
 int FUNC_11 (struct platform_device*,struct dw_plat_pcie*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct dw_plat_pcie *VAR_11;
 struct dw_pcie *VAR_12;
 struct resource *VAR_13;
 int VAR_14;
 const struct of_device_id *VAR_15;
 const struct dw_plat_pcie_of_data *VAR_16;
 enum dw_pcie_device_mode VAR_17;

 VAR_15 = FUNC_8(VAR_8, VAR_10);
 if (!VAR_15)
  return -VAR_2;

 VAR_16 = (struct dw_plat_pcie_of_data *)VAR_15->data;
 VAR_17 = (enum dw_pcie_device_mode)VAR_16->mode;

 VAR_11 = FUNC_5(VAR_10, sizeof(*VAR_11), VAR_5);
 if (!VAR_11)
  return -VAR_4;

 VAR_12 = FUNC_5(VAR_10, sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return -VAR_4;

 VAR_12->dev = VAR_10;
 VAR_12->ops = &VAR_7;

 VAR_11->pci = VAR_12;
 VAR_11->mode = VAR_17;

 VAR_13 = FUNC_10(VAR_9, VAR_6, "dbi");
 if (!VAR_13)
  VAR_13 = FUNC_9(VAR_9, VAR_6, 0);

 VAR_12->dbi_base = FUNC_4(VAR_10, VAR_13);
 if (FUNC_1(VAR_12->dbi_base))
  return FUNC_2(VAR_12->dbi_base);

 FUNC_11(VAR_9, VAR_11);

 switch (VAR_11->mode) {
 case 128:
  if (!FUNC_0(VAR_1))
   return -VAR_3;

  VAR_14 = FUNC_7(VAR_11, VAR_9);
  if (VAR_14 < 0)
   return VAR_14;
  break;
 case 129:
  if (!FUNC_0(VAR_0))
   return -VAR_3;

  VAR_14 = FUNC_6(VAR_11, VAR_9);
  if (VAR_14 < 0)
   return VAR_14;
  break;
 default:
  FUNC_3(VAR_10, "INVALID device type %d\n", VAR_11->mode);
 }

 return 0;
}
