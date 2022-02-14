
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_port {struct sky2_hw* hw; } ;
struct sky2_hw {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ rx_max_coalesced_frames_irq; void* rx_coalesce_usecs_irq; scalar_t__ rx_max_coalesced_frames; void* rx_coalesce_usecs; int tx_max_coalesced_frames; void* tx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;
 void* FUNC_1 (struct sky2_hw*,int ) ;
 int FUNC_2 (struct sky2_hw*,int ) ;
 int FUNC_3 (struct sky2_hw*,int ) ;
 scalar_t__ FUNC_4 (struct sky2_hw*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_10,
        struct ethtool_coalesce *VAR_11)
{
 struct sky2_port *VAR_12 = FUNC_0(VAR_10);
 struct sky2_hw *VAR_13 = VAR_12->hw;

 if (FUNC_4(VAR_13, VAR_7) == VAR_9)
  VAR_11->tx_coalesce_usecs = 0;
 else {
  u32 VAR_14 = FUNC_3(VAR_13, VAR_8);
  VAR_11->tx_coalesce_usecs = FUNC_1(VAR_13, VAR_14);
 }
 VAR_11->tx_max_coalesced_frames = FUNC_2(VAR_13, VAR_6);

 if (FUNC_4(VAR_13, VAR_4) == VAR_9)
  VAR_11->rx_coalesce_usecs = 0;
 else {
  u32 VAR_15 = FUNC_3(VAR_13, VAR_5);
  VAR_11->rx_coalesce_usecs = FUNC_1(VAR_13, VAR_15);
 }
 VAR_11->rx_max_coalesced_frames = FUNC_4(VAR_13, VAR_1);

 if (FUNC_4(VAR_13, VAR_2) == VAR_9)
  VAR_11->rx_coalesce_usecs_irq = 0;
 else {
  u32 VAR_16 = FUNC_3(VAR_13, VAR_3);
  VAR_11->rx_coalesce_usecs_irq = FUNC_1(VAR_13, VAR_16);
 }

 VAR_11->rx_max_coalesced_frames_irq = FUNC_4(VAR_13, VAR_0);

 return 0;
}
