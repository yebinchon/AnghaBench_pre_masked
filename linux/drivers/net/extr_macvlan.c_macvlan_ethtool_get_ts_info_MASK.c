
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; } ;
struct net_device {struct phy_device* phydev; struct ethtool_ops* ethtool_ops; } ;
struct ethtool_ts_info {int so_timestamping; int phc_index; } ;
struct ethtool_ops {int (* get_ts_info ) (struct net_device*,struct ethtool_ts_info*) ;} ;
struct TYPE_2__ {int (* ts_info ) (struct phy_device*,struct ethtool_ts_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,struct ethtool_ts_info*) ;
 int FUNC_2 (struct net_device*,struct ethtool_ts_info*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
           struct ethtool_ts_info *VAR_3)
{
 struct net_device *VAR_4 = FUNC_0(VAR_2);
 const struct ethtool_ops *VAR_5 = VAR_4->ethtool_ops;
 struct phy_device *VAR_6 = VAR_4->phydev;

 if (VAR_6 && VAR_6->drv && VAR_6->drv->ts_info) {
   return VAR_6->drv->ts_info(VAR_6, VAR_3);
 } else if (VAR_5->get_ts_info) {
  return VAR_5->get_ts_info(VAR_4, VAR_3);
 } else {
  VAR_3->so_timestamping = VAR_0 |
   VAR_1;
  VAR_3->phc_index = -1;
 }

 return 0;
}
