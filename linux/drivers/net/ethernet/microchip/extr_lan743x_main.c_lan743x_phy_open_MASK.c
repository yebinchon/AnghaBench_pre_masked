
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int autoneg; } ;
struct net_device {int dummy; } ;
struct lan743x_phy {int fc_request_control; int fc_autoneg; } ;
struct lan743x_adapter {int mdiobus; struct net_device* netdev; struct lan743x_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,struct phy_device*,int ,int ) ;
 struct phy_device* FUNC_1 (int ) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*) ;

__attribute__((used)) static int FUNC_6(struct lan743x_adapter *VAR_6)
{
 struct lan743x_phy *VAR_7 = &VAR_6->phy;
 struct phy_device *VAR_8;
 struct net_device *VAR_9;
 int VAR_10 = -VAR_0;

 VAR_9 = VAR_6->netdev;
 VAR_8 = FUNC_1(VAR_6->mdiobus);
 if (!VAR_8)
  goto return_error;

 VAR_10 = FUNC_0(VAR_9, VAR_8,
     VAR_5,
     VAR_4);
 if (VAR_10)
  goto return_error;


 FUNC_2(VAR_8, VAR_1);


 FUNC_5(VAR_8);
 VAR_7->fc_request_control = (VAR_2 | VAR_3);
 VAR_7->fc_autoneg = VAR_8->autoneg;

 FUNC_3(VAR_8);
 FUNC_4(VAR_8);
 return 0;

return_error:
 return VAR_10;
}
