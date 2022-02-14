
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tegra_pcie {int irq; } ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {struct tegra_pcie* sysdata; } ;


 int FUNC_0 (struct pci_dev const*,int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(const struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct tegra_pcie *VAR_3 = VAR_0->bus->sysdata;
 int VAR_4;

 FUNC_1();

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_4)
  VAR_4 = VAR_3->irq;

 return VAR_4;
}
