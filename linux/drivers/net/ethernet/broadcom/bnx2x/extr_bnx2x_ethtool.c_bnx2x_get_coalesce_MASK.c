
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int rx_coalesce_usecs; } ;
struct bnx2x {int tx_ticks; int rx_ticks; } ;


 int FUNC_0 (struct ethtool_coalesce*,int ,int) ;
 struct bnx2x* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
         struct ethtool_coalesce *VAR_1)
{
 struct bnx2x *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, 0, sizeof(struct ethtool_coalesce));

 VAR_1->rx_coalesce_usecs = VAR_2->rx_ticks;
 VAR_1->tx_coalesce_usecs = VAR_2->tx_ticks;

 return 0;
}
