
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r6040_private {int old_duplex; scalar_t__ old_link; TYPE_1__* pdev; int mii_bus; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 struct r6040_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct phy_device*) ;
 struct phy_device* FUNC_5 (struct net_device*,int ,int *,int ) ;
 struct phy_device* FUNC_6 (int ) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4)
{
 struct r6040_private *VAR_5 = FUNC_3(VAR_4);
 struct phy_device *VAR_6 = ((void*)0);

 VAR_6 = FUNC_6(VAR_5->mii_bus);
 if (!VAR_6) {
  FUNC_2(&VAR_5->pdev->dev, "no PHY found\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_5(VAR_4, FUNC_8(VAR_6), &VAR_3,
        VAR_1);

 if (FUNC_0(VAR_6)) {
  FUNC_2(&VAR_5->pdev->dev, "could not attach to PHY\n");
  return FUNC_1(VAR_6);
 }

 FUNC_7(VAR_6, VAR_2);

 VAR_5->old_link = 0;
 VAR_5->old_duplex = -1;

 FUNC_4(VAR_6);

 return 0;
}
