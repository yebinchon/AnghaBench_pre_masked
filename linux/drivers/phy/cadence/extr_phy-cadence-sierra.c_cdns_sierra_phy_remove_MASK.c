
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct cdns_sierra_phy {int nsubnodes; TYPE_1__* phys; int apb_rst; int phy_rst; } ;
struct TYPE_3__ {int lnk_rst; } ;


 struct cdns_sierra_phy* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct cdns_sierra_phy *VAR_1 = FUNC_0(VAR_0->dev.parent);
 int VAR_2;

 FUNC_2(VAR_1->phy_rst);
 FUNC_2(VAR_1->apb_rst);
 FUNC_1(&VAR_0->dev);





 for (VAR_2 = 0; VAR_2 < VAR_1->nsubnodes; VAR_2++) {
  FUNC_2(VAR_1->phys[VAR_2].lnk_rst);
  FUNC_3(VAR_1->phys[VAR_2].lnk_rst);
 }
 return 0;
}
