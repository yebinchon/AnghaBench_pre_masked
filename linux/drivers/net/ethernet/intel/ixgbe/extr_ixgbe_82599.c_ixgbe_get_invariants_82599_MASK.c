
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_mac_info {int max_msix_vectors; int max_tx_queues; int max_rx_queues; int rx_pb_size; int num_rar_entries; int vft_size; int mcft_size; } ;
struct ixgbe_hw {struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_6)
{
 struct ixgbe_mac_info *VAR_7 = &VAR_6->mac;

 FUNC_1(VAR_6);

 VAR_7->mcft_size = VAR_2;
 VAR_7->vft_size = VAR_5;
 VAR_7->num_rar_entries = VAR_3;
 VAR_7->rx_pb_size = VAR_4;
 VAR_7->max_rx_queues = VAR_0;
 VAR_7->max_tx_queues = VAR_1;
 VAR_7->max_msix_vectors = FUNC_0(VAR_6);

 return 0;
}
