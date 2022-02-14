
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int autoneg; } ;
struct net_device {int dummy; } ;
struct et131x_adapter {TYPE_1__* pdev; int mii_bus; } ;
struct TYPE_2__ {scalar_t__ device; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_3 ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*) ;
 int VAR_6 ;
 struct et131x_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct phy_device*) ;
 struct phy_device* FUNC_5 (struct net_device*,int ,int *,int ) ;
 struct phy_device* FUNC_6 (int ) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7)
{
 struct et131x_adapter *VAR_8 = FUNC_3(VAR_7);
 struct phy_device *VAR_9 = ((void*)0);

 VAR_9 = FUNC_6(VAR_8->mii_bus);
 if (!VAR_9) {
  FUNC_2(&VAR_8->pdev->dev, "no PHY found\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_5(VAR_7, FUNC_8(VAR_9),
        &VAR_6, VAR_3);

 if (FUNC_0(VAR_9)) {
  FUNC_2(&VAR_8->pdev->dev, "Could not attach to PHY\n");
  return FUNC_1(VAR_9);
 }

 FUNC_7(VAR_9, VAR_4);

 if (VAR_8->pdev->device != VAR_2)
  FUNC_7(VAR_9, VAR_5);

 VAR_9->autoneg = VAR_0;

 FUNC_4(VAR_9);

 return 0;
}
