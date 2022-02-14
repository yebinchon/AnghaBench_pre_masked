
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_coalesce_usecs_high; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 int FUNC_2 (struct net_device*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
           struct ethtool_coalesce *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->tx_coalesce_usecs_high != VAR_3->rx_coalesce_usecs_high) {
  FUNC_1(VAR_2,
      "tx_usecs_high must be same as rx_usecs_high.\n");
  return -VAR_0;
 }

 if (VAR_3->rx_coalesce_usecs_high > VAR_1) {
  FUNC_1(VAR_2,
      "Invalid usecs_high value, usecs_high range is 0-%d\n",
      VAR_1);
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_3->rx_coalesce_usecs_high);
 if (VAR_4 != VAR_3->rx_coalesce_usecs_high) {
  FUNC_2(VAR_2,
       "usecs_high(%d) rounded down to %d, because it must be multiple of 4.\n",
       VAR_3->rx_coalesce_usecs_high, VAR_4);
 }

 return 0;
}
