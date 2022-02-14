
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb {unsigned int num_phys; int * phys; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_xusb *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_phys; VAR_1++) {
  FUNC_1(VAR_0->phys[VAR_1]);
  FUNC_0(VAR_0->phys[VAR_1]);
 }
}
