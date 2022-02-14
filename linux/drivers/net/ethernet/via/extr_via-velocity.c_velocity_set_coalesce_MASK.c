
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_intsup; int tx_intsup; int txqueue_timer; int rxqueue_timer; } ;
struct velocity_info {int lock; int mac_regs; int int_mask; TYPE_1__ options; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int rx_coalesce_usecs; int tx_max_coalesced_frames; int rx_max_coalesced_frames; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct velocity_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct velocity_info*) ;
 int FUNC_7 (struct velocity_info*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_1,
  struct ethtool_coalesce *VAR_2)
{
 struct velocity_info *VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = 0x3f * 64;
 unsigned long VAR_5;


 if (VAR_2->tx_coalesce_usecs > VAR_4)
  return -VAR_0;
 if (VAR_2->rx_coalesce_usecs > VAR_4)
  return -VAR_0;

 if (VAR_2->tx_max_coalesced_frames > 0xff)
  return -VAR_0;
 if (VAR_2->rx_max_coalesced_frames > 0xff)
  return -VAR_0;

 VAR_3->options.rx_intsup = VAR_2->rx_max_coalesced_frames;
 VAR_3->options.tx_intsup = VAR_2->tx_max_coalesced_frames;

 FUNC_5(&VAR_3->options.rxqueue_timer,
   VAR_2->rx_coalesce_usecs);
 FUNC_5(&VAR_3->options.txqueue_timer,
   VAR_2->tx_coalesce_usecs);


 FUNC_8(&VAR_3->lock, VAR_5);
 FUNC_1(VAR_3->mac_regs);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3);

 FUNC_3(VAR_3->int_mask, VAR_3->mac_regs);
 FUNC_0(VAR_3->mac_regs);
 FUNC_2(VAR_3->mac_regs);
 FUNC_9(&VAR_3->lock, VAR_5);

 return 0;
}
