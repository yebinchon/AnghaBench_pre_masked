
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dra7xx_pcie {int phy_count; int * phy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dra7xx_pcie *VAR_1)
{
 int VAR_2 = VAR_1->phy_count;
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_4(VAR_1->phy[VAR_4], VAR_0);
  if (VAR_3 < 0)
   goto err_phy;

  VAR_3 = FUNC_1(VAR_1->phy[VAR_4]);
  if (VAR_3 < 0)
   goto err_phy;

  VAR_3 = FUNC_3(VAR_1->phy[VAR_4]);
  if (VAR_3 < 0) {
   FUNC_0(VAR_1->phy[VAR_4]);
   goto err_phy;
  }
 }

 return 0;

err_phy:
 while (--VAR_4 >= 0) {
  FUNC_2(VAR_1->phy[VAR_4]);
  FUNC_0(VAR_1->phy[VAR_4]);
 }

 return VAR_3;
}
