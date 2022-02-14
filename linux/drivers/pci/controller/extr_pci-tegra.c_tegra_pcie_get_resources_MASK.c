
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_soc {scalar_t__ program_uphy; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct tegra_pcie {int irq; void* cfg; struct resource cs; void* afi; void* pads; struct tegra_pcie_soc* soc; struct device* dev; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct device*,struct resource*) ;
 int FUNC_4 (struct platform_device*,char*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,char*) ;
 int FUNC_6 (int,int ,int ,char*,struct tegra_pcie*) ;
 int FUNC_7 (struct tegra_pcie*) ;
 int VAR_4 ;
 int FUNC_8 (struct tegra_pcie*) ;
 int FUNC_9 (struct tegra_pcie*) ;
 int FUNC_10 (struct tegra_pcie*) ;
 struct platform_device* FUNC_11 (struct device*) ;

__attribute__((used)) static int FUNC_12(struct tegra_pcie *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 struct platform_device *VAR_7 = FUNC_11(VAR_6);
 struct resource *VAR_8, *VAR_9, *VAR_10;
 const struct tegra_pcie_soc *VAR_11 = VAR_5->soc;
 int VAR_12;

 VAR_12 = FUNC_7(VAR_5);
 if (VAR_12) {
  FUNC_2(VAR_6, "failed to get clocks: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_10(VAR_5);
 if (VAR_12) {
  FUNC_2(VAR_6, "failed to get resets: %d\n", VAR_12);
  return VAR_12;
 }

 if (VAR_11->program_uphy) {
  VAR_12 = FUNC_8(VAR_5);
  if (VAR_12 < 0) {
   FUNC_2(VAR_6, "failed to get PHYs: %d\n", VAR_12);
   return VAR_12;
  }
 }

 VAR_8 = FUNC_5(VAR_7, VAR_1, "pads");
 VAR_5->pads = FUNC_3(VAR_6, VAR_8);
 if (FUNC_0(VAR_5->pads)) {
  VAR_12 = FUNC_1(VAR_5->pads);
  goto phys_put;
 }

 VAR_9 = FUNC_5(VAR_7, VAR_1, "afi");
 VAR_5->afi = FUNC_3(VAR_6, VAR_9);
 if (FUNC_0(VAR_5->afi)) {
  VAR_12 = FUNC_1(VAR_5->afi);
  goto phys_put;
 }


 VAR_10 = FUNC_5(VAR_7, VAR_1, "cs");
 if (!VAR_10) {
  VAR_12 = -VAR_0;
  goto phys_put;
 }

 VAR_5->cs = *VAR_10;


 VAR_5->cs.end = VAR_5->cs.start + VAR_3 - 1;

 VAR_5->cfg = FUNC_3(VAR_6, &VAR_5->cs);
 if (FUNC_0(VAR_5->cfg)) {
  VAR_12 = FUNC_1(VAR_5->cfg);
  goto phys_put;
 }


 VAR_12 = FUNC_4(VAR_7, "intr");
 if (VAR_12 < 0) {
  FUNC_2(VAR_6, "failed to get IRQ: %d\n", VAR_12);
  goto phys_put;
 }

 VAR_5->irq = VAR_12;

 VAR_12 = FUNC_6(VAR_5->irq, VAR_4, VAR_2, "PCIE", VAR_5);
 if (VAR_12) {
  FUNC_2(VAR_6, "failed to register IRQ: %d\n", VAR_12);
  goto phys_put;
 }

 return 0;

phys_put:
 if (VAR_11->program_uphy)
  FUNC_9(VAR_5);
 return VAR_12;
}
