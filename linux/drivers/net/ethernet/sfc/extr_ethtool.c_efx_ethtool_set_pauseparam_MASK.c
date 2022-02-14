
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct efx_nic {scalar_t__* link_advertising; int wanted_fc; int mac_lock; int net_dev; TYPE_2__* phy_op; TYPE_1__* type; } ;
struct TYPE_4__ {int (* reconfigure ) (struct efx_nic*) ;} ;
struct TYPE_3__ {int (* prepare_enable_fc_tx ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct efx_nic*,int) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct efx_nic* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5,
          struct ethtool_pauseparam *VAR_6)
{
 struct efx_nic *VAR_7 = FUNC_4(VAR_5);
 u8 VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11 = 0;

 FUNC_2(&VAR_7->mac_lock);

 VAR_8 = ((VAR_6->rx_pause ? VAR_1 : 0) |
       (VAR_6->tx_pause ? VAR_2 : 0) |
       (VAR_6->autoneg ? VAR_0 : 0));

 if ((VAR_8 & VAR_2) && !(VAR_8 & VAR_1)) {
  FUNC_5(VAR_7, VAR_4, VAR_7->net_dev,
     "Flow control unsupported: tx ON rx OFF\n");
  VAR_11 = -VAR_3;
  goto out;
 }

 if ((VAR_8 & VAR_0) && !VAR_7->link_advertising[0]) {
  FUNC_5(VAR_7, VAR_4, VAR_7->net_dev,
     "Autonegotiation is disabled\n");
  VAR_11 = -VAR_3;
  goto out;
 }


 if (VAR_7->type->prepare_enable_fc_tx &&
     (VAR_8 & VAR_2) && !(VAR_7->wanted_fc & VAR_2))
  VAR_7->type->prepare_enable_fc_tx(VAR_7);

 VAR_10 = VAR_7->link_advertising[0];
 VAR_9 = VAR_7->wanted_fc;
 FUNC_0(VAR_7, VAR_8);
 if (VAR_7->link_advertising[0] != VAR_10 ||
     (VAR_7->wanted_fc ^ VAR_9) & VAR_0) {
  VAR_11 = VAR_7->phy_op->reconfigure(VAR_7);
  if (VAR_11) {
   FUNC_6(VAR_7, VAR_4, VAR_7->net_dev,
      "Unable to advertise requested flow "
      "control setting\n");
   goto out;
  }
 }




 FUNC_1(VAR_7);

out:
 FUNC_3(&VAR_7->mac_lock);

 return VAR_11;
}
