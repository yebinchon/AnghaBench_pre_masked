
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ link_duplex; int link_speed; } ;
struct pch_gbe_hw {TYPE_1__ mac; } ;
struct pch_gbe_adapter {int watchdog_timer; int mii; int tx_queue_len; struct pch_gbe_hw hw; struct net_device* netdev; } ;
struct net_device {int tx_queue_len; } ;
struct ethtool_cmd {scalar_t__ duplex; int cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct pch_gbe_adapter* VAR_5 ;
 int FUNC_0 (struct ethtool_cmd*) ;
 struct pch_gbe_adapter* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int *,struct ethtool_cmd*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct net_device*,char*,...) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct pch_gbe_adapter*,int ,scalar_t__) ;
 int FUNC_13 (struct pch_gbe_adapter*,int ,scalar_t__) ;
 int FUNC_14 (struct pch_gbe_adapter*) ;
 int FUNC_15 (scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_16(struct timer_list *VAR_8)
{
 struct pch_gbe_adapter *VAR_9 = FUNC_1(VAR_9, VAR_8,
           VAR_7);
 struct net_device *VAR_10 = VAR_9->netdev;
 struct pch_gbe_hw *VAR_11 = &VAR_9->hw;

 FUNC_5(VAR_10, "right now = %ld\n", VAR_6);

 FUNC_14(VAR_9);
 if ((FUNC_3(&VAR_9->mii)) && (!FUNC_8(VAR_10))) {
  struct ethtool_cmd VAR_12 = { .cmd = VAR_2 };
  VAR_10->tx_queue_len = VAR_9->tx_queue_len;

  if (FUNC_2(&VAR_9->mii, &VAR_12)) {
   FUNC_6(VAR_10, "ethtool get setting Error\n");
   FUNC_4(&VAR_9->watchdog_timer,
      FUNC_15(VAR_6 +
      VAR_3));
   return;
  }
  VAR_11->mac.link_speed = FUNC_0(&VAR_12);
  VAR_11->mac.link_duplex = VAR_12.duplex;

  FUNC_13(VAR_9, VAR_11->mac.link_speed,
      VAR_11->mac.link_duplex);

  FUNC_12(VAR_9, VAR_11->mac.link_speed,
     VAR_11->mac.link_duplex);
  FUNC_5(VAR_10,
      "Link is Up %d Mbps %s-Duplex\n",
      VAR_11->mac.link_speed,
      VAR_12.duplex == VAR_0 ? "Full" : "Half");
  FUNC_9(VAR_10);
  FUNC_11(VAR_10);
 } else if ((!FUNC_3(&VAR_9->mii)) &&
     (FUNC_8(VAR_10))) {
  FUNC_5(VAR_10, "NIC Link is Down\n");
  VAR_11->mac.link_speed = VAR_4;
  VAR_11->mac.link_duplex = VAR_1;
  FUNC_7(VAR_10);
  FUNC_10(VAR_10);
 }
 FUNC_4(&VAR_9->watchdog_timer,
    FUNC_15(VAR_6 + VAR_3));
}
