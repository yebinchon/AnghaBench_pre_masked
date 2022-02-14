
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_pdata {scalar_t__ phy_mode; int mdio_driver; int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_pdata *VAR_2)
{
 int VAR_3;

 if (VAR_2->phy_mode == VAR_1)
  return;

 if (!FUNC_0(VAR_0))
  return;

 VAR_3 = FUNC_1(VAR_2->ndev);
 if (!VAR_3)
  VAR_2->mdio_driver = 1;
}
