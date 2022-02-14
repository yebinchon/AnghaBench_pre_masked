
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {int rx_pause; struct fm10k_hw hw; } ;
struct ethtool_pauseparam {scalar_t__ rx_pause; int tx_pause; scalar_t__ autoneg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fm10k_intfc*) ;
 struct fm10k_intfc* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
    struct ethtool_pauseparam *VAR_3)
{
 struct fm10k_intfc *VAR_4 = FUNC_1(VAR_2);
 struct fm10k_hw *VAR_5 = &VAR_4->hw;

 if (VAR_3->autoneg || !VAR_3->tx_pause)
  return -VAR_0;


 if (VAR_5->mac.type == VAR_1)
  VAR_4->rx_pause = VAR_3->rx_pause ? ~0 : 0;
 else if (VAR_3->rx_pause)
  return -VAR_0;

 if (FUNC_2(VAR_2))
  FUNC_0(VAR_4);

 return 0;
}
