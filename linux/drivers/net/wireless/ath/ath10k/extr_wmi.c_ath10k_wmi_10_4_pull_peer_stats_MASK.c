
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct wmi_10_4_peer_stats {int peer_rx_rate; int peer_tx_rate; int peer_rssi; TYPE_1__ peer_macaddr; } ;
struct ath10k_fw_stats_peer {void* peer_rx_rate; void* peer_tx_rate; void* peer_rssi; int peer_macaddr; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(const struct wmi_10_4_peer_stats *VAR_0,
    struct ath10k_fw_stats_peer *VAR_1)
{
 FUNC_1(VAR_1->peer_macaddr, VAR_0->peer_macaddr.addr);
 VAR_1->peer_rssi = FUNC_0(VAR_0->peer_rssi);
 VAR_1->peer_tx_rate = FUNC_0(VAR_0->peer_tx_rate);
 VAR_1->peer_rx_rate = FUNC_0(VAR_0->peer_rx_rate);
}
