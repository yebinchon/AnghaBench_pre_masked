
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sky2_port {int tx_ring_size; struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ const tx_coalesce_usecs; scalar_t__ const rx_coalesce_usecs; scalar_t__ const rx_coalesce_usecs_irq; int tx_max_coalesced_frames; scalar_t__ rx_max_coalesced_frames; scalar_t__ rx_max_coalesced_frames_irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct sky2_hw*,int) ;
 int FUNC_2 (struct sky2_hw*,scalar_t__) ;
 int FUNC_3 (struct sky2_hw*,int ,int) ;
 int FUNC_4 (struct sky2_hw*,int ,int ) ;
 int FUNC_5 (struct sky2_hw*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_13,
        struct ethtool_coalesce *VAR_14)
{
 struct sky2_port *VAR_15 = FUNC_0(VAR_13);
 struct sky2_hw *VAR_16 = VAR_15->hw;
 const u32 VAR_17 = FUNC_1(VAR_16, 0x0ffffff);

 if (VAR_14->tx_coalesce_usecs > VAR_17 ||
     VAR_14->rx_coalesce_usecs > VAR_17 ||
     VAR_14->rx_coalesce_usecs_irq > VAR_17)
  return -VAR_0;

 if (VAR_14->tx_max_coalesced_frames >= VAR_15->tx_ring_size-1)
  return -VAR_0;
 if (VAR_14->rx_max_coalesced_frames > VAR_1)
  return -VAR_0;
 if (VAR_14->rx_max_coalesced_frames_irq > VAR_1)
  return -VAR_0;

 if (VAR_14->tx_coalesce_usecs == 0)
  FUNC_5(VAR_16, VAR_9, VAR_12);
 else {
  FUNC_4(VAR_16, VAR_10,
        FUNC_2(VAR_16, VAR_14->tx_coalesce_usecs));
  FUNC_5(VAR_16, VAR_9, VAR_11);
 }
 FUNC_3(VAR_16, VAR_8, VAR_14->tx_max_coalesced_frames);

 if (VAR_14->rx_coalesce_usecs == 0)
  FUNC_5(VAR_16, VAR_6, VAR_12);
 else {
  FUNC_4(VAR_16, VAR_7,
        FUNC_2(VAR_16, VAR_14->rx_coalesce_usecs));
  FUNC_5(VAR_16, VAR_6, VAR_11);
 }
 FUNC_5(VAR_16, VAR_3, VAR_14->rx_max_coalesced_frames);

 if (VAR_14->rx_coalesce_usecs_irq == 0)
  FUNC_5(VAR_16, VAR_4, VAR_12);
 else {
  FUNC_4(VAR_16, VAR_5,
        FUNC_2(VAR_16, VAR_14->rx_coalesce_usecs_irq));
  FUNC_5(VAR_16, VAR_4, VAR_11);
 }
 FUNC_5(VAR_16, VAR_2, VAR_14->rx_max_coalesced_frames_irq);
 return 0;
}
