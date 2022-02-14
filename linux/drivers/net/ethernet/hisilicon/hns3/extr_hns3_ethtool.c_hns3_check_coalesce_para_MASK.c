
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int use_adaptive_tx_coalesce; int use_adaptive_rx_coalesce; } ;


 int FUNC_0 (struct net_device*,struct ethtool_coalesce*) ;
 int FUNC_1 (struct net_device*,struct ethtool_coalesce*) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 int FUNC_3 (struct net_device*,char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
        struct ethtool_coalesce *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_0,
      "Check gl coalesce param fail. ret = %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_0,
      "Check rl coalesce param fail. ret = %d\n", VAR_2);
  return VAR_2;
 }

 if (VAR_1->use_adaptive_tx_coalesce == 1 ||
     VAR_1->use_adaptive_rx_coalesce == 1) {
  FUNC_3(VAR_0,
       "adaptive-tx=%d and adaptive-rx=%d, tx_usecs or rx_usecs will changed dynamically.\n",
       VAR_1->use_adaptive_tx_coalesce,
       VAR_1->use_adaptive_rx_coalesce);
 }

 return 0;
}
