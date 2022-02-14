
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_fini; int is_rx_idle; int rx_error_check; int rx_crypto_check; int get_netif_rx_params; int get_reorder_params; int wmi_addba_rx_resp; int rx_init; int tx_ring_modify; int tx_ring_tso; int tx_desc_unmap; int tx_desc_map; int tx_fini; int tx_init; int ring_init_bcast; int ring_fini_tx; int ring_init_tx; int configure_interrupt_moderation; } ;
struct wil6210_priv {TYPE_1__ txrx_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

void FUNC_0(struct wil6210_priv *VAR_18)
{
 VAR_18->txrx_ops.configure_interrupt_moderation =
  VAR_1;

 VAR_18->txrx_ops.ring_init_tx = VAR_7;
 VAR_18->txrx_ops.ring_fini_tx = VAR_5;
 VAR_18->txrx_ops.ring_init_bcast = VAR_6;
 VAR_18->txrx_ops.tx_init = VAR_15;
 VAR_18->txrx_ops.tx_fini = VAR_14;
 VAR_18->txrx_ops.tx_desc_map = VAR_12;
 VAR_18->txrx_ops.tx_desc_unmap = VAR_13;
 VAR_18->txrx_ops.tx_ring_tso = VAR_0;
 VAR_18->txrx_ops.tx_ring_modify = VAR_16;

 VAR_18->txrx_ops.rx_init = VAR_11;
 VAR_18->txrx_ops.wmi_addba_rx_resp = VAR_17;
 VAR_18->txrx_ops.get_reorder_params = VAR_3;
 VAR_18->txrx_ops.get_netif_rx_params = VAR_2;
 VAR_18->txrx_ops.rx_crypto_check = VAR_8;
 VAR_18->txrx_ops.rx_error_check = VAR_9;
 VAR_18->txrx_ops.is_rx_idle = VAR_4;
 VAR_18->txrx_ops.rx_fini = VAR_10;
}
