
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {TYPE_2__* sq; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; int tx_max_coalesced_frames; int cmd; } ;
typedef int ec_default ;
struct TYPE_3__ {scalar_t__ weight; } ;
struct TYPE_4__ {TYPE_1__ napi; } ;


 int VAR_0 ;
 int FUNC_0 (struct ethtool_coalesce*,struct ethtool_coalesce*,int) ;
 struct virtnet_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct ethtool_coalesce *VAR_2)
{
 struct ethtool_coalesce VAR_3 = {
  .cmd = VAR_0,
  .rx_max_coalesced_frames = 1,
 };
 struct virtnet_info *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, &VAR_3, sizeof(VAR_3));

 if (VAR_4->sq[0].napi.weight)
  VAR_2->tx_max_coalesced_frames = 1;

 return 0;
}
