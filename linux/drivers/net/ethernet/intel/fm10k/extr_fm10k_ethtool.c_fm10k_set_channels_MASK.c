
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fm10k_intfc {TYPE_1__* ring_feature; } ;
struct ethtool_channels {unsigned int combined_count; scalar_t__ other_count; scalar_t__ tx_count; scalar_t__ rx_count; } ;
struct TYPE_2__ {unsigned int limit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct fm10k_intfc* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
         struct ethtool_channels *VAR_4)
{
 struct fm10k_intfc *VAR_5 = FUNC_3(VAR_3);
 unsigned int VAR_6 = VAR_4->combined_count;


 if (!VAR_6 || VAR_4->rx_count || VAR_4->tx_count)
  return -VAR_0;


 if (VAR_4->other_count != VAR_1)
  return -VAR_0;


 if (VAR_6 > FUNC_0(VAR_3))
  return -VAR_0;

 VAR_5->ring_feature[VAR_2].limit = VAR_6;


 return FUNC_1(VAR_3, FUNC_2(VAR_3));
}
