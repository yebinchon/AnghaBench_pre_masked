
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ rx_coalesce_usecs; scalar_t__ tx_coalesce_usecs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,char*,scalar_t__) ;
 int FUNC_2 (struct net_device*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
           struct ethtool_coalesce *VAR_3)
{
 u32 VAR_4, VAR_5;

 if (VAR_3->rx_coalesce_usecs > VAR_1) {
  FUNC_1(VAR_2,
      "Invalid rx-usecs value, rx-usecs range is 0-%d\n",
      VAR_1);
  return -VAR_0;
 }

 if (VAR_3->tx_coalesce_usecs > VAR_1) {
  FUNC_1(VAR_2,
      "Invalid tx-usecs value, tx-usecs range is 0-%d\n",
      VAR_1);
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_3->rx_coalesce_usecs);
 if (VAR_4 != VAR_3->rx_coalesce_usecs) {
  FUNC_2(VAR_2,
       "rx_usecs(%d) rounded down to %d, because it must be multiple of 2.\n",
       VAR_3->rx_coalesce_usecs, VAR_4);
 }

 VAR_5 = FUNC_0(VAR_3->tx_coalesce_usecs);
 if (VAR_5 != VAR_3->tx_coalesce_usecs) {
  FUNC_2(VAR_2,
       "tx_usecs(%d) rounded down to %d, because it must be multiple of 2.\n",
       VAR_3->tx_coalesce_usecs, VAR_5);
 }

 return 0;
}
