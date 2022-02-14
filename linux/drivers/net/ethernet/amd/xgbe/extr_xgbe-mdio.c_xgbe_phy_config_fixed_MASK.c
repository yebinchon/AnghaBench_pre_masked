
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ duplex; int speed; } ;
struct TYPE_4__ {int (* get_mode ) (struct xgbe_prv_data*,int ) ;} ;
struct TYPE_5__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {TYPE_3__ phy; TYPE_2__ phy_if; int netdev; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_1 (struct xgbe_prv_data*,int ) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*,int) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_3)
{
 enum xgbe_mode VAR_4;

 FUNC_0(VAR_3, VAR_2, VAR_3->netdev, "fixed PHY configuration\n");


 FUNC_2(VAR_3);


 VAR_4 = VAR_3->phy_if.phy_impl.get_mode(VAR_3, VAR_3->phy.speed);
 switch (VAR_4) {
 case 134:
 case 133:
 case 135:
 case 131:
 case 130:
 case 128:
 case 132:
  break;
 case 129:
 default:
  return -VAR_1;
 }


 if (VAR_3->phy.duplex != VAR_0)
  return -VAR_1;

 FUNC_3(VAR_3, VAR_4);

 return 0;
}
