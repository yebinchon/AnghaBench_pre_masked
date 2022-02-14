
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int get; int msg; } ;
union nic_mbx {TYPE_1__ pfc; } ;
struct TYPE_4__ {int fc_tx; int fc_rx; int autoneg; } ;
struct nicvf {scalar_t__ mac_type; TYPE_2__ pfc; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct nicvf* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nicvf*,union nic_mbx*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4,
     struct ethtool_pauseparam *VAR_5)
{
 struct nicvf *VAR_6 = FUNC_0(VAR_4);
 union nic_mbx VAR_7 = {};


 if ((VAR_6->mac_type == VAR_2) ||
     (VAR_6->mac_type == VAR_0) ||
     (VAR_6->mac_type == VAR_1))
  return;

 VAR_7.pfc.msg = VAR_3;
 VAR_7.pfc.get = 1;
 if (!FUNC_1(VAR_6, &VAR_7)) {
  VAR_5->autoneg = VAR_6->pfc.autoneg;
  VAR_5->rx_pause = VAR_6->pfc.fc_rx;
  VAR_5->tx_pause = VAR_6->pfc.fc_tx;
 }
}
