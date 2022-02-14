
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_fw_extd_stats_peer {int rx_duration; int peer_macaddr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_1(const struct ath10k_fw_extd_stats_peer *VAR_1,
       char *VAR_2, u32 *VAR_3)
{
 u32 VAR_4 = *VAR_3;
 u32 VAR_5 = VAR_0;

 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %pM\n",
   "Peer MAC address", VAR_1->peer_macaddr);
 VAR_4 += FUNC_0(VAR_2 + VAR_4, VAR_5 - VAR_4, "%30s %llu\n",
   "Peer RX duration", VAR_1->rx_duration);
}
