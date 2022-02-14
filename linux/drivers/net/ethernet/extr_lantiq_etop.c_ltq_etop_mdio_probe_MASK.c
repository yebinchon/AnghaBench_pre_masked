
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ltq_etop_priv {TYPE_1__* pldata; int mii_bus; } ;
struct TYPE_2__ {int mii_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct net_device*,char*) ;
 struct ltq_etop_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct phy_device*) ;
 struct phy_device* FUNC_5 (struct net_device*,int ,int *,int ) ;
 struct phy_device* FUNC_6 (int ) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*) ;

__attribute__((used)) static int
FUNC_9(struct net_device *VAR_3)
{
 struct ltq_etop_priv *VAR_4 = FUNC_3(VAR_3);
 struct phy_device *VAR_5;

 VAR_5 = FUNC_6(VAR_4->mii_bus);

 if (!VAR_5) {
  FUNC_2(VAR_3, "no PHY found\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_5(VAR_3, FUNC_8(VAR_5),
        &VAR_2, VAR_4->pldata->mii_mode);

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_3, "Could not attach to PHY\n");
  return FUNC_1(VAR_5);
 }

 FUNC_7(VAR_5, VAR_1);

 FUNC_4(VAR_5);

 return 0;
}
