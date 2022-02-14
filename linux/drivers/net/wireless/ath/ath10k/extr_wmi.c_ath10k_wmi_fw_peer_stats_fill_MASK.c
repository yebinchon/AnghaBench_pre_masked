
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_fw_stats_peer {int rx_duration; int peer_rx_rate; int peer_tx_rate; int peer_rssi; int peer_macaddr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_1(const struct ath10k_fw_stats_peer *VAR_1,
         char *VAR_2, u32 *VAR_3, bool VAR_4)
{
 u32 VAR_5 = *VAR_3;
 u32 VAR_6 = VAR_0;

 VAR_5 += FUNC_0(VAR_2 + VAR_5, VAR_6 - VAR_5, "%30s %pM\n",
   "Peer MAC address", VAR_1->peer_macaddr);
 VAR_5 += FUNC_0(VAR_2 + VAR_5, VAR_6 - VAR_5, "%30s %u\n",
   "Peer RSSI", VAR_1->peer_rssi);
 VAR_5 += FUNC_0(VAR_2 + VAR_5, VAR_6 - VAR_5, "%30s %u\n",
   "Peer TX rate", VAR_1->peer_tx_rate);
 VAR_5 += FUNC_0(VAR_2 + VAR_5, VAR_6 - VAR_5, "%30s %u\n",
   "Peer RX rate", VAR_1->peer_rx_rate);
 if (!VAR_4)
  VAR_5 += FUNC_0(VAR_2 + VAR_5, VAR_6 - VAR_5, "%30s %llu\n",
    "Peer RX duration", VAR_1->rx_duration);

 VAR_5 += FUNC_0(VAR_2 + VAR_5, VAR_6 - VAR_5, "\n");
 *VAR_3 = VAR_5;
}
