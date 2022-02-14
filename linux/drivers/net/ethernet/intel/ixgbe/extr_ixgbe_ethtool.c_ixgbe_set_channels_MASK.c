
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int hw_tcs; TYPE_1__* ring_feature; } ;
struct ethtool_channels {unsigned int combined_count; scalar_t__ other_count; scalar_t__ tx_count; scalar_t__ rx_count; } ;
struct TYPE_2__ {unsigned int limit; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 unsigned int FUNC_0 (struct ixgbe_adapter*) ;
 unsigned int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct net_device*,int ) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6,
         struct ethtool_channels *VAR_7)
{
 struct ixgbe_adapter *VAR_8 = FUNC_3(VAR_6);
 unsigned int VAR_9 = VAR_7->combined_count;
 u8 VAR_10 = FUNC_1(VAR_8);


 if (!VAR_9 || VAR_7->rx_count || VAR_7->tx_count)
  return -VAR_0;


 if (VAR_7->other_count != VAR_2)
  return -VAR_0;


 if (VAR_9 > FUNC_0(VAR_8))
  return -VAR_0;


 VAR_8->ring_feature[VAR_4].limit = VAR_9;


 if (VAR_9 > VAR_10)
  VAR_9 = VAR_10;
 VAR_8->ring_feature[VAR_5].limit = VAR_9;
 return FUNC_2(VAR_6, VAR_8->hw_tcs);
}
