
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct qcom_pcie {void* phy; TYPE_1__* ops; void* elbi; void* parf; void* reset; struct dw_pcie* pci; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pcie_port {int msi_irq; int * ops; } ;
struct dw_pcie {void* dbi_base; struct pcie_port pp; int * ops; struct device* dev; } ;
struct TYPE_2__ {int (* get_resources ) (struct qcom_pcie*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 void* FUNC_5 (struct device*,struct resource*) ;
 void* FUNC_6 (struct device*,int,int ) ;
 void* FUNC_7 (struct device*,struct resource*) ;
 void* FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct pcie_port*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_10 (struct device*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct platform_device*,char*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,char*) ;
 int FUNC_14 (struct platform_device*,struct qcom_pcie*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int VAR_6 ;
 int FUNC_19 (struct qcom_pcie*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct resource *VAR_9;
 struct pcie_port *VAR_10;
 struct dw_pcie *VAR_11;
 struct qcom_pcie *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_6(VAR_8, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_6(VAR_8, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_16(VAR_8);
 VAR_13 = FUNC_17(VAR_8);
 if (VAR_13 < 0) {
  FUNC_15(VAR_8);
  return VAR_13;
 }

 VAR_11->dev = VAR_8;
 VAR_11->ops = &VAR_5;
 VAR_10 = &VAR_11->pp;

 VAR_12->pci = VAR_11;

 VAR_12->ops = FUNC_10(VAR_8);

 VAR_12->reset = FUNC_4(VAR_8, "perst", VAR_3);
 if (FUNC_1(VAR_12->reset)) {
  VAR_13 = FUNC_2(VAR_12->reset);
  goto err_pm_runtime_put;
 }

 VAR_9 = FUNC_13(VAR_7, VAR_4, "parf");
 VAR_12->parf = FUNC_5(VAR_8, VAR_9);
 if (FUNC_1(VAR_12->parf)) {
  VAR_13 = FUNC_2(VAR_12->parf);
  goto err_pm_runtime_put;
 }

 VAR_9 = FUNC_13(VAR_7, VAR_4, "dbi");
 VAR_11->dbi_base = FUNC_7(VAR_8, VAR_9);
 if (FUNC_1(VAR_11->dbi_base)) {
  VAR_13 = FUNC_2(VAR_11->dbi_base);
  goto err_pm_runtime_put;
 }

 VAR_9 = FUNC_13(VAR_7, VAR_4, "elbi");
 VAR_12->elbi = FUNC_5(VAR_8, VAR_9);
 if (FUNC_1(VAR_12->elbi)) {
  VAR_13 = FUNC_2(VAR_12->elbi);
  goto err_pm_runtime_put;
 }

 VAR_12->phy = FUNC_8(VAR_8, "pciephy");
 if (FUNC_1(VAR_12->phy)) {
  VAR_13 = FUNC_2(VAR_12->phy);
  goto err_pm_runtime_put;
 }

 VAR_13 = VAR_12->ops->get_resources(VAR_12);
 if (VAR_13)
  goto err_pm_runtime_put;

 VAR_10->ops = &VAR_6;

 if (FUNC_0(VAR_0)) {
  VAR_10->msi_irq = FUNC_12(VAR_7, "msi");
  if (VAR_10->msi_irq < 0) {
   VAR_13 = VAR_10->msi_irq;
   goto err_pm_runtime_put;
  }
 }

 VAR_13 = FUNC_11(VAR_12->phy);
 if (VAR_13) {
  FUNC_15(&VAR_7->dev);
  goto err_pm_runtime_put;
 }

 FUNC_14(VAR_7, VAR_12);

 VAR_13 = FUNC_9(VAR_10);
 if (VAR_13) {
  FUNC_3(VAR_8, "cannot initialize host\n");
  FUNC_15(&VAR_7->dev);
  goto err_pm_runtime_put;
 }

 return 0;

err_pm_runtime_put:
 FUNC_18(VAR_8);
 FUNC_15(VAR_8);

 return VAR_13;
}
