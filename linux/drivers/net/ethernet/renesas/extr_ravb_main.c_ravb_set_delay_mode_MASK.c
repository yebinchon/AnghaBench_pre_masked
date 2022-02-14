
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {scalar_t__ phy_interface; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int ) ;
 struct ravb_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_3 (struct net_device*,int ,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_8)
{
 struct ravb_private *VAR_9 = FUNC_1(VAR_8);
 int VAR_10 = 0;

 if (VAR_9->phy_interface == VAR_4 ||
     VAR_9->phy_interface == VAR_5)
  VAR_10 |= VAR_2;

 if (VAR_9->phy_interface == VAR_4 ||
     VAR_9->phy_interface == VAR_6) {
  if (!FUNC_0(FUNC_4(VAR_7),
     "phy-mode %s requires TX clock internal delay mode which is not supported by this hardware revision. Please update device tree",
     FUNC_2(VAR_9->phy_interface)))
   VAR_10 |= VAR_3;
 }

 FUNC_3(VAR_8, VAR_0, VAR_1, VAR_10);
}
