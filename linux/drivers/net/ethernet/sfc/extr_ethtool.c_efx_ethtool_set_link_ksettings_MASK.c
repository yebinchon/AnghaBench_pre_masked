
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ speed; scalar_t__ duplex; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct efx_nic {int mac_lock; TYPE_1__* phy_op; int net_dev; } ;
struct TYPE_3__ {int (* set_link_ksettings ) (struct efx_nic*,struct ethtool_link_ksettings const*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct efx_nic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_4 (struct efx_nic*,struct ethtool_link_ksettings const*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_4,
          const struct ethtool_link_ksettings *VAR_5)
{
 struct efx_nic *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;


 if ((VAR_5->base.speed == VAR_2) &&
     (VAR_5->base.duplex != VAR_0)) {
  FUNC_3(VAR_6, VAR_3, VAR_6->net_dev,
     "rejecting unsupported 1000Mbps HD setting\n");
  return -VAR_1;
 }

 FUNC_0(&VAR_6->mac_lock);
 VAR_7 = VAR_6->phy_op->set_link_ksettings(VAR_6, VAR_5);
 FUNC_1(&VAR_6->mac_lock);
 return VAR_7;
}
