
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int name; } ;
struct ftgmac100 {int mii_bus; struct net_device* netdev; } ;
typedef int phy_interface_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 int FUNC_3 (struct net_device*,char*,int ) ;
 int FUNC_4 (struct phy_device*) ;
 struct phy_device* FUNC_5 (struct net_device*,int ,int *,int ) ;
 struct phy_device* FUNC_6 (int ) ;
 int FUNC_7 (struct phy_device*) ;
 int FUNC_8 (struct phy_device*) ;

__attribute__((used)) static int FUNC_9(struct ftgmac100 *VAR_2, phy_interface_t VAR_3)
{
 struct net_device *VAR_4 = VAR_2->netdev;
 struct phy_device *VAR_5;

 VAR_5 = FUNC_6(VAR_2->mii_bus);
 if (!VAR_5) {
  FUNC_3(VAR_4, "%s: no PHY found\n", VAR_4->name);
  return -VAR_0;
 }

 VAR_5 = FUNC_5(VAR_4, FUNC_8(VAR_5),
        &VAR_1, VAR_3);

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_4, "%s: Could not attach to PHY\n", VAR_4->name);
  return FUNC_1(VAR_5);
 }




 FUNC_7(VAR_5);


 FUNC_4(VAR_5);

 return 0;
}
