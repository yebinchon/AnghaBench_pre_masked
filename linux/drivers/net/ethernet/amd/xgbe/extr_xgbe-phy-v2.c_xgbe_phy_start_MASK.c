
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* i2c_start ) (struct xgbe_prv_data*) ;int (* i2c_stop ) (struct xgbe_prv_data*) ;} ;
struct TYPE_3__ {int (* set_ext_mii_mode ) (struct xgbe_prv_data*,int ,int ) ;} ;
struct xgbe_prv_data {TYPE_2__ i2c_if; int netdev; TYPE_1__ hw_if; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int port_mode; int start_mode; int redrv_addr; int redrv_if; scalar_t__ redrv; } ;


 int VAR_0 ;

 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*,int ) ;
 int FUNC_7 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_8(struct xgbe_prv_data *VAR_1)
{
 struct xgbe_phy_data *VAR_2 = VAR_1->phy_data;
 int VAR_3;


 VAR_3 = VAR_1->i2c_if.i2c_start(VAR_1);
 if (VAR_3)
  return VAR_3;


 if (VAR_2->redrv && !VAR_2->redrv_if) {
  VAR_3 = VAR_1->hw_if.set_ext_mii_mode(VAR_1, VAR_2->redrv_addr,
          VAR_0);
  if (VAR_3) {
   FUNC_0(VAR_1->netdev,
       "redriver mdio port not compatible (%u)\n",
       VAR_2->redrv_addr);
   return VAR_3;
  }
 }


 FUNC_6(VAR_1, VAR_2->start_mode);


 FUNC_4(VAR_1);


 switch (VAR_2->port_mode) {
 case 128:
  FUNC_7(VAR_1);
  break;
 default:
  break;
 }


 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  goto err_i2c;

 return 0;

err_i2c:
 VAR_1->i2c_if.i2c_stop(VAR_1);

 return VAR_3;
}
