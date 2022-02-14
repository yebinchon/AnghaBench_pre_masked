
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txqueue_timer; int rxqueue_timer; int rx_intsup; int tx_intsup; } ;
struct velocity_info {TYPE_1__ options; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {void* tx_coalesce_usecs; void* rx_coalesce_usecs; int rx_max_coalesced_frames; int tx_max_coalesced_frames; } ;


 void* FUNC_0 (int ) ;
 struct velocity_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
  struct ethtool_coalesce *VAR_1)
{
 struct velocity_info *VAR_2 = FUNC_1(VAR_0);

 VAR_1->tx_max_coalesced_frames = VAR_2->options.tx_intsup;
 VAR_1->rx_max_coalesced_frames = VAR_2->options.rx_intsup;

 VAR_1->rx_coalesce_usecs = FUNC_0(VAR_2->options.rxqueue_timer);
 VAR_1->tx_coalesce_usecs = FUNC_0(VAR_2->options.txqueue_timer);

 return 0;
}
