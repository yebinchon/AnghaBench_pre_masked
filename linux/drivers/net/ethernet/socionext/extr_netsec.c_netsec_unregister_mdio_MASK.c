
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct netsec_priv {int mii_bus; int dev; struct phy_device* phydev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static void FUNC_4(struct netsec_priv *VAR_0)
{
 struct phy_device *VAR_1 = VAR_0->phydev;

 if (!FUNC_0(VAR_0->dev) && VAR_1) {
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
 }

 FUNC_1(VAR_0->mii_bus);
}
