
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int rx_batched; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; } ;


 struct tun_struct* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
       struct ethtool_coalesce *VAR_1)
{
 struct tun_struct *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_max_coalesced_frames = VAR_2->rx_batched;

 return 0;
}
