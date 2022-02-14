
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethtool_link_ksettings {int dummy; } ;
struct TYPE_2__ {scalar_t__ autoneg; int duplex; int speed; struct ethtool_link_ksettings lks; } ;
struct xgbe_prv_data {scalar_t__ an_again; TYPE_1__ phy; scalar_t__ parallel_detect; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ethtool_link_ksettings*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 scalar_t__ FUNC_4 (struct xgbe_prv_data*,int) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_7)
{
 struct ethtool_link_ksettings *VAR_8 = &VAR_7->phy.lks;
 enum xgbe_mode VAR_9;

 FUNC_0(VAR_8);

 if ((VAR_7->phy.autoneg != VAR_0) || VAR_7->parallel_detect)
  VAR_9 = FUNC_1(VAR_7);
 else
  VAR_9 = FUNC_3(VAR_7);

 switch (VAR_9) {
 case 131:
  VAR_7->phy.speed = VAR_2;
  break;
 case 128:
 case 134:
 case 130:
  VAR_7->phy.speed = VAR_3;
  break;
 case 133:
  VAR_7->phy.speed = VAR_5;
  break;
 case 135:
 case 132:
  VAR_7->phy.speed = VAR_4;
  break;
 case 129:
 default:
  VAR_7->phy.speed = VAR_6;
 }

 VAR_7->phy.duplex = VAR_1;

 if (FUNC_4(VAR_7, VAR_9) && VAR_7->an_again)
  FUNC_2(VAR_7);
}
