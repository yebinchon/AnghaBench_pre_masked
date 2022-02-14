
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dra7xx_pcie {int phy_count; int * phy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dra7xx_pcie *VAR_0)
{
 int VAR_1 = VAR_0->phy_count;

 while (VAR_1--) {
  FUNC_1(VAR_0->phy[VAR_1]);
  FUNC_0(VAR_0->phy[VAR_1]);
 }
}
