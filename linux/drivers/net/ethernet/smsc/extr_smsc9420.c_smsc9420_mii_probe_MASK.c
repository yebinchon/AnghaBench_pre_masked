
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc9420_pdata {int last_duplex; int last_carrier; int mii_bus; } ;
struct phy_device {int dummy; } ;
struct net_device {int phydev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct phy_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct phy_device*) ;
 int VAR_2 ;
 struct phy_device* FUNC_3 (int ,int) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct smsc9420_pdata* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct phy_device*) ;
 struct phy_device* FUNC_7 (struct net_device*,int ,int ,int ) ;
 int FUNC_8 (struct phy_device*,int ) ;
 int FUNC_9 (struct phy_device*) ;
 int FUNC_10 (struct phy_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4)
{
 struct smsc9420_pdata *VAR_5 = FUNC_5(VAR_4);
 struct phy_device *VAR_6 = ((void*)0);

 FUNC_0(VAR_4->phydev);


 VAR_6 = FUNC_3(VAR_5->mii_bus, 1);
 if (!VAR_6) {
  FUNC_4(VAR_4, "no PHY found at address 1\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_7(VAR_4, FUNC_10(VAR_6),
        VAR_3, VAR_1);

 if (FUNC_1(VAR_6)) {
  FUNC_4(VAR_4, "Could not attach to PHY\n");
  return FUNC_2(VAR_6);
 }

 FUNC_8(VAR_6, VAR_2);


 FUNC_9(VAR_6);

 FUNC_6(VAR_6);

 VAR_5->last_duplex = -1;
 VAR_5->last_carrier = -1;

 return 0;
}
