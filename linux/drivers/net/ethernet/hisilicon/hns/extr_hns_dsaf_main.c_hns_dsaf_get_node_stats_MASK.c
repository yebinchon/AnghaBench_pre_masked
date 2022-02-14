
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dsaf_hw_stats {int tx_pkts; int * tx_pfc; int * rx_pfc; int stp_drop; int vlan_drop; int local_addr_false; int rslt_drop; int bp_drop; int crc_false; int sbm_drop; int release_buf_num; int rx_pause_frame; int rx_pkt_id; int rx_pkts; int man_pkts; int pad_drop; } ;
struct dsaf_device {int dsaf_ver; struct dsaf_hw_stats* hw_stats; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u64 *FUNC_1(struct dsaf_device *VAR_2, u64 *VAR_3,
        int VAR_4)
{
 u64 *VAR_5 = VAR_3;
 int VAR_6;
 struct dsaf_hw_stats *VAR_7 = &VAR_2->hw_stats[VAR_4];
 bool VAR_8 = FUNC_0(VAR_2->dsaf_ver);

 VAR_5[0] = VAR_7->pad_drop;
 VAR_5[1] = VAR_7->man_pkts;
 VAR_5[2] = VAR_7->rx_pkts;
 VAR_5[3] = VAR_7->rx_pkt_id;
 VAR_5[4] = VAR_7->rx_pause_frame;
 VAR_5[5] = VAR_7->release_buf_num;
 VAR_5[6] = VAR_7->sbm_drop;
 VAR_5[7] = VAR_7->crc_false;
 VAR_5[8] = VAR_7->bp_drop;
 VAR_5[9] = VAR_7->rslt_drop;
 VAR_5[10] = VAR_7->local_addr_false;
 VAR_5[11] = VAR_7->vlan_drop;
 VAR_5[12] = VAR_7->stp_drop;
 if (VAR_4 < VAR_1 && !VAR_8) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   VAR_5[13 + VAR_6 + 0 * VAR_0] = VAR_7->rx_pfc[VAR_6];
   VAR_5[13 + VAR_6 + 1 * VAR_0] = VAR_7->tx_pfc[VAR_6];
  }
  VAR_5[29] = VAR_7->tx_pkts;
  return &VAR_5[30];
 }

 VAR_5[13] = VAR_7->tx_pkts;
 return &VAR_5[14];
}
