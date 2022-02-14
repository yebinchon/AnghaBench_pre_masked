
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_msi {scalar_t__ irq; int domain; int phys; int virt; } ;
struct tegra_pcie {int dev; struct tegra_msi msi; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,struct tegra_pcie*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct tegra_pcie *VAR_3)
{
 struct tegra_msi *VAR_4 = &VAR_3->msi;
 unsigned int VAR_5, VAR_6;

 FUNC_0(VAR_3->dev, VAR_2, VAR_4->virt, VAR_4->phys,
         VAR_0);

 if (VAR_4->irq > 0)
  FUNC_1(VAR_4->irq, VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = FUNC_4(VAR_4->domain, VAR_5);
  if (VAR_6 > 0)
   FUNC_2(VAR_6);
 }

 FUNC_3(VAR_4->domain);
}
