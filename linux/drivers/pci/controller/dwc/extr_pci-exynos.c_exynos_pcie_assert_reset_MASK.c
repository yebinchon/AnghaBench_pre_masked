
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_pcie {int reset_gpio; struct dw_pcie* pci; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct exynos_pcie *VAR_1)
{
 struct dw_pcie *VAR_2 = VAR_1->pci;
 struct device *VAR_3 = VAR_2->dev;

 if (VAR_1->reset_gpio >= 0)
  FUNC_0(VAR_3, VAR_1->reset_gpio,
    VAR_0, "RESET");
}
