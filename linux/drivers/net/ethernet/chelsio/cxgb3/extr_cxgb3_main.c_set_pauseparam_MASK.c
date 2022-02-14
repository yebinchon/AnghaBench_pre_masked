
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_config {int requested_fc; int supported; scalar_t__ autoneg; int fc; } ;
struct port_info {int mac; int phy; struct link_config link_config; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int *,struct link_config*) ;
 int FUNC_3 (int *,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7,
     struct ethtool_pauseparam *VAR_8)
{
 struct port_info *VAR_9 = FUNC_0(VAR_7);
 struct link_config *VAR_10 = &VAR_9->link_config;

 if (VAR_8->autoneg == VAR_0)
  VAR_10->requested_fc = 0;
 else if (VAR_10->supported & VAR_6)
  VAR_10->requested_fc = VAR_3;
 else
  return -VAR_2;

 if (VAR_8->rx_pause)
  VAR_10->requested_fc |= VAR_4;
 if (VAR_8->tx_pause)
  VAR_10->requested_fc |= VAR_5;
 if (VAR_10->autoneg == VAR_1) {
  if (FUNC_1(VAR_7))
   FUNC_2(&VAR_9->phy, &VAR_9->mac, VAR_10);
 } else {
  VAR_10->fc = VAR_10->requested_fc & (VAR_4 | VAR_5);
  if (FUNC_1(VAR_7))
   FUNC_3(&VAR_9->mac, -1, -1, VAR_10->fc);
 }
 return 0;
}
