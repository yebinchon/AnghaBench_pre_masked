
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int set_phy_power; } ;
struct ixgbe_phy_info {TYPE_1__ ops; } ;
struct ixgbe_mac_info {int max_msix_vectors; int max_tx_queues; int max_rx_queues; int rx_pb_size; int num_rar_entries; int vft_size; int mcft_size; } ;
struct ixgbe_hw {struct ixgbe_phy_info phy; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_6 ;

s32 FUNC_1(struct ixgbe_hw *VAR_7)
{
 struct ixgbe_mac_info *VAR_8 = &VAR_7->mac;
 struct ixgbe_phy_info *VAR_9 = &VAR_7->phy;


 VAR_9->ops.set_phy_power = VAR_6;

 VAR_8->mcft_size = VAR_2;
 VAR_8->vft_size = VAR_5;
 VAR_8->num_rar_entries = VAR_3;
 VAR_8->rx_pb_size = VAR_4;
 VAR_8->max_rx_queues = VAR_0;
 VAR_8->max_tx_queues = VAR_1;
 VAR_8->max_msix_vectors = FUNC_0(VAR_7);

 return 0;
}
