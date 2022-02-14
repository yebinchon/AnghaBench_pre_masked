
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_desc_ops {int rx_desc_init; int tx_desc_init; int unmap_desc_data; int map_rx_buffer; int map_tx_skb; int free_channels_and_rings; int alloc_channles_and_rings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(struct xlgmac_desc_ops *VAR_7)
{
 VAR_7->alloc_channles_and_rings = VAR_0;
 VAR_7->free_channels_and_rings = VAR_1;
 VAR_7->map_tx_skb = VAR_3;
 VAR_7->map_rx_buffer = VAR_2;
 VAR_7->unmap_desc_data = VAR_6;
 VAR_7->tx_desc_init = VAR_5;
 VAR_7->rx_desc_init = VAR_4;
}
