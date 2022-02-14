
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_port {int pcie; scalar_t__ reset_gpio; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;
 int FUNC_2 (scalar_t__,int) ;
 unsigned long FUNC_3 (struct tegra_pcie_port*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct tegra_pcie_port *VAR_1)
{
 unsigned long VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;


 if (VAR_1->reset_gpio) {
  FUNC_2(VAR_1->reset_gpio, 1);
 } else {
  VAR_3 = FUNC_0(VAR_1->pcie, VAR_2);
  VAR_3 &= ~VAR_0;
  FUNC_1(VAR_1->pcie, VAR_3, VAR_2);
 }

 FUNC_4(1000, 2000);

 if (VAR_1->reset_gpio) {
  FUNC_2(VAR_1->reset_gpio, 0);
 } else {
  VAR_3 = FUNC_0(VAR_1->pcie, VAR_2);
  VAR_3 |= VAR_0;
  FUNC_1(VAR_1->pcie, VAR_3, VAR_2);
 }
}
