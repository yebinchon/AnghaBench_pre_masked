
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_config {int pcaps; int requested_fc; } ;
struct port_info {int tx_chan; TYPE_1__* adapter; struct link_config link_cfg; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct TYPE_2__ {int mbox; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,struct link_config*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
     struct ethtool_pauseparam *VAR_7)
{
 struct port_info *VAR_8 = FUNC_0(VAR_6);
 struct link_config *VAR_9 = &VAR_8->link_cfg;

 if (VAR_7->autoneg == VAR_0)
  VAR_9->requested_fc = 0;
 else if (VAR_9->pcaps & VAR_2)
  VAR_9->requested_fc = VAR_3;
 else
  return -VAR_1;

 if (VAR_7->rx_pause)
  VAR_9->requested_fc |= VAR_4;
 if (VAR_7->tx_pause)
  VAR_9->requested_fc |= VAR_5;
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_8->adapter, VAR_8->adapter->mbox, VAR_8->tx_chan,
         VAR_9);
 return 0;
}
