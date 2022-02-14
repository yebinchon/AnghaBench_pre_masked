
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ tx_pending; scalar_t__ rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
    struct ethtool_ringparam *VAR_5)
{
 if (FUNC_0(VAR_4))
  return -VAR_0;

 if (VAR_5->rx_mini_pending || VAR_5->rx_jumbo_pending)
  return -VAR_1;

 if (VAR_5->tx_pending > VAR_2 ||
     VAR_5->tx_pending < VAR_3 ||
     VAR_5->rx_pending > VAR_2 ||
     VAR_5->rx_pending < VAR_3) {
  FUNC_1(VAR_4, "Queue depth out of range [%d-%d]\n",
      VAR_3, VAR_2);
  return -VAR_1;
 }

 return 0;
}
