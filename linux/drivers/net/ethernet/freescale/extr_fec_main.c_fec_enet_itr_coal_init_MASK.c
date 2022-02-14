
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {void* tx_max_coalesced_frames; void* tx_coalesce_usecs; void* rx_max_coalesced_frames; void* rx_coalesce_usecs; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct net_device*,struct ethtool_coalesce*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 struct ethtool_coalesce VAR_3;

 VAR_3.rx_coalesce_usecs = VAR_1;
 VAR_3.rx_max_coalesced_frames = VAR_0;

 VAR_3.tx_coalesce_usecs = VAR_1;
 VAR_3.tx_max_coalesced_frames = VAR_0;

 FUNC_0(VAR_2, &VAR_3);
}
