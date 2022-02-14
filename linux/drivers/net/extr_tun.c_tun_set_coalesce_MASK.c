
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {scalar_t__ rx_batched; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ rx_max_coalesced_frames; } ;


 scalar_t__ VAR_0 ;
 struct tun_struct* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
       struct ethtool_coalesce *VAR_2)
{
 struct tun_struct *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2->rx_max_coalesced_frames > VAR_0)
  VAR_3->rx_batched = VAR_0;
 else
  VAR_3->rx_batched = VAR_2->rx_max_coalesced_frames;

 return 0;
}
