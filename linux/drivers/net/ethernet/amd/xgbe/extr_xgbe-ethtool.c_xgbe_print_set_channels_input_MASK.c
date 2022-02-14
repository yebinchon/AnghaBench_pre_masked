
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_channels {int tx_count; int rx_count; int combined_count; } ;


 int FUNC_0 (struct net_device*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
       struct ethtool_channels *VAR_1)
{
 FUNC_0(VAR_0, "channel inputs: combined=%u, rx-only=%u, tx-only=%u\n",
     VAR_1->combined_count, VAR_1->rx_count,
     VAR_1->tx_count);
}
