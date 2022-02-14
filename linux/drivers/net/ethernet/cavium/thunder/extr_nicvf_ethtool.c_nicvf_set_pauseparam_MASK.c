
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fc_tx; int fc_rx; scalar_t__ get; int msg; } ;
union nic_mbx {TYPE_1__ pfc; } ;
struct TYPE_4__ {int fc_tx; int fc_rx; } ;
struct nicvf {scalar_t__ mac_type; TYPE_2__ pfc; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; scalar_t__ autoneg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nicvf* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6,
    struct ethtool_pauseparam *VAR_7)
{
 struct nicvf *VAR_8 = FUNC_0(VAR_6);
 union nic_mbx VAR_9 = {};


 if ((VAR_8->mac_type == VAR_2) ||
     (VAR_8->mac_type == VAR_0) ||
     (VAR_8->mac_type == VAR_1))
  return -VAR_4;

 if (VAR_7->autoneg)
  return -VAR_4;

 VAR_9.pfc.msg = VAR_5;
 VAR_9.pfc.get = 0;
 VAR_9.pfc.fc_rx = VAR_7->rx_pause;
 VAR_9.pfc.fc_tx = VAR_7->tx_pause;
 if (FUNC_1(VAR_8, &VAR_9))
  return -VAR_3;

 VAR_8->pfc.fc_rx = VAR_7->rx_pause;
 VAR_8->pfc.fc_tx = VAR_7->tx_pause;

 return 0;
}
