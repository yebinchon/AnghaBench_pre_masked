
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct TYPE_3__ {int requested_mode; int current_mode; } ;
struct igc_hw {TYPE_2__ phy; TYPE_1__ fc; } ;
struct igc_adapter {scalar_t__ fc_autoneg; int state; int netdev; struct igc_hw hw; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct igc_adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct igc_hw*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct igc_adapter*) ;
 int FUNC_4 (struct igc_hw*) ;
 int FUNC_5 (struct igc_adapter*) ;
 struct igc_adapter* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8,
         struct ethtool_pauseparam *VAR_9)
{
 struct igc_adapter *VAR_10 = FUNC_6(VAR_8);
 struct igc_hw *VAR_11 = &VAR_10->hw;
 int VAR_12 = 0;

 VAR_10->fc_autoneg = VAR_9->autoneg;

 while (FUNC_8(VAR_1, &VAR_10->state))
  FUNC_9(1000, 2000);

 if (VAR_10->fc_autoneg == VAR_0) {
  VAR_11->fc.requested_mode = VAR_2;
  if (FUNC_7(VAR_10->netdev)) {
   FUNC_1(VAR_10);
   FUNC_5(VAR_10);
  } else {
   FUNC_3(VAR_10);
  }
 } else {
  if (VAR_9->rx_pause && VAR_9->tx_pause)
   VAR_11->fc.requested_mode = VAR_3;
  else if (VAR_9->rx_pause && !VAR_9->tx_pause)
   VAR_11->fc.requested_mode = VAR_5;
  else if (!VAR_9->rx_pause && VAR_9->tx_pause)
   VAR_11->fc.requested_mode = VAR_6;
  else if (!VAR_9->rx_pause && !VAR_9->tx_pause)
   VAR_11->fc.requested_mode = VAR_4;

  VAR_11->fc.current_mode = VAR_11->fc.requested_mode;

  VAR_12 = ((VAR_11->phy.media_type == VAR_7) ?
     FUNC_2(VAR_11) : FUNC_4(VAR_11));
 }

 FUNC_0(VAR_1, &VAR_10->state);
 return VAR_12;
}
