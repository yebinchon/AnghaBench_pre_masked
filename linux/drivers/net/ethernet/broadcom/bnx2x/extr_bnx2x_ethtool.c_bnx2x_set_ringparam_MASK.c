
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;
struct bnx2x {scalar_t__ recovery_state; scalar_t__ rx_ring_size; scalar_t__ tx_ring_size; scalar_t__ disable_tpa; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (struct net_device*) ;
 struct bnx2x* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_11,
          struct ethtool_ringparam *VAR_12)
{
 struct bnx2x *VAR_13 = FUNC_3(VAR_11);

 FUNC_0(VAR_0,
    "set ring params command parameters: rx_pending = %d, tx_pending = %d\n",
    VAR_12->rx_pending, VAR_12->tx_pending);

 if (FUNC_4(VAR_13->pdev)) {
  FUNC_0(VAR_1,
     "VFs are enabled, can not change ring parameters\n");
  return -VAR_5;
 }

 if (VAR_13->recovery_state != VAR_2) {
  FUNC_0(VAR_0,
     "Handling parity error recovery. Try again later\n");
  return -VAR_3;
 }

 if ((VAR_12->rx_pending > VAR_6) ||
     (VAR_12->rx_pending < (VAR_13->disable_tpa ? VAR_9 :
          VAR_10)) ||
     (VAR_12->tx_pending > (FUNC_1(VAR_13) ? 0 : VAR_8)) ||
     (VAR_12->tx_pending <= VAR_7 + 4)) {
  FUNC_0(VAR_0, "Command parameters not supported\n");
  return -VAR_4;
 }

 VAR_13->rx_ring_size = VAR_12->rx_pending;
 VAR_13->tx_ring_size = VAR_12->tx_pending;

 return FUNC_2(VAR_11);
}
