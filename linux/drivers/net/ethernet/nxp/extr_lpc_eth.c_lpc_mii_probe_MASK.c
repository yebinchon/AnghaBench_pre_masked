
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct netdata_local {int duplex; scalar_t__ speed; scalar_t__ link; TYPE_1__* pdev; int mii_bus; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct netdata_local* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct phy_device*) ;
 struct phy_device* FUNC_7 (struct net_device*,int ,int *,scalar_t__) ;
 struct phy_device* FUNC_8 (int ) ;
 int FUNC_9 (struct phy_device*,int ) ;
 int FUNC_10 (struct phy_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4)
{
 struct netdata_local *VAR_5 = FUNC_5(VAR_4);
 struct phy_device *VAR_6 = FUNC_8(VAR_5->mii_bus);

 if (!VAR_6) {
  FUNC_3(VAR_4, "no PHY found\n");
  return -VAR_0;
 }


 if (FUNC_2(&VAR_5->pdev->dev) == VAR_1)
  FUNC_4(VAR_4, "using MII interface\n");
 else
  FUNC_4(VAR_4, "using RMII interface\n");
 VAR_6 = FUNC_7(VAR_4, FUNC_10(VAR_6),
        &VAR_3,
        FUNC_2(&VAR_5->pdev->dev));

 if (FUNC_0(VAR_6)) {
  FUNC_3(VAR_4, "Could not attach to PHY\n");
  return FUNC_1(VAR_6);
 }

 FUNC_9(VAR_6, VAR_2);

 VAR_5->link = 0;
 VAR_5->speed = 0;
 VAR_5->duplex = -1;

 FUNC_6(VAR_6);

 return 0;
}
