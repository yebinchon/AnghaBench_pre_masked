
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_pcie {int phy_count; int * phy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct cdns_pcie *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->phy_count; VAR_2++) {
  VAR_1 = FUNC_1(VAR_0->phy[VAR_2]);
  if (VAR_1 < 0)
   goto err_phy;

  VAR_1 = FUNC_3(VAR_0->phy[VAR_2]);
  if (VAR_1 < 0) {
   FUNC_0(VAR_0->phy[VAR_2]);
   goto err_phy;
  }
 }

 return 0;

err_phy:
 while (--VAR_2 >= 0) {
  FUNC_2(VAR_0->phy[VAR_2]);
  FUNC_0(VAR_0->phy[VAR_2]);
 }

 return VAR_1;
}
