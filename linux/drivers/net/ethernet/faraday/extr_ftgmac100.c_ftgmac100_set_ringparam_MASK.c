
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ftgmac100 {scalar_t__ new_rx_q_entries; scalar_t__ new_tx_q_entries; int reset_task; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 struct ftgmac100* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
       struct ethtool_ringparam *VAR_6)
{
 struct ftgmac100 *VAR_7 = FUNC_1(VAR_5);

 if (VAR_6->rx_pending > VAR_1 ||
     VAR_6->tx_pending > VAR_2 ||
     VAR_6->rx_pending < VAR_3 ||
     VAR_6->tx_pending < VAR_4 ||
     !FUNC_0(VAR_6->rx_pending) ||
     !FUNC_0(VAR_6->tx_pending))
  return -VAR_0;

 VAR_7->new_rx_q_entries = VAR_6->rx_pending;
 VAR_7->new_tx_q_entries = VAR_6->tx_pending;
 if (FUNC_2(VAR_5))
  FUNC_3(&VAR_7->reset_task);

 return 0;
}
