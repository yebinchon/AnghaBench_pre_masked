
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {int max_queue_pairs; TYPE_2__* sq; } ;
struct net_device {int flags; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; int tx_max_coalesced_frames; int cmd; } ;
typedef int ec_default ;
struct TYPE_3__ {int weight; } ;
struct TYPE_4__ {TYPE_1__ napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ethtool_coalesce*,struct ethtool_coalesce*,int) ;
 struct virtnet_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5,
    struct ethtool_coalesce *VAR_6)
{
 struct ethtool_coalesce VAR_7 = {
  .cmd = VAR_2,
  .rx_max_coalesced_frames = 1,
 };
 struct virtnet_info *VAR_8 = FUNC_1(VAR_5);
 int VAR_9, VAR_10;

 if (VAR_6->tx_max_coalesced_frames > 1)
  return -VAR_1;

 VAR_7.tx_max_coalesced_frames = VAR_6->tx_max_coalesced_frames;
 VAR_10 = VAR_6->tx_max_coalesced_frames ? VAR_4 : 0;


 if (FUNC_0(VAR_6, &VAR_7, sizeof(VAR_7)))
  return -VAR_1;

 if (VAR_10 ^ VAR_8->sq[0].napi.weight) {
  if (VAR_5->flags & VAR_3)
   return -VAR_0;
  for (VAR_9 = 0; VAR_9 < VAR_8->max_queue_pairs; VAR_9++)
   VAR_8->sq[VAR_9].napi.weight = VAR_10;
 }

 return 0;
}
