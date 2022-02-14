
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct dsaf_hw_stats {int tx_pkts; int * tx_pfc; int * rx_pfc; int stp_drop; int vlan_drop; int local_addr_false; int rslt_drop; int bp_drop; int crc_false; int sbm_drop; int release_buf_num; int rx_pause_frame; int rx_pkt_id; int rx_pkts; int man_pkts; int pad_drop; } ;
struct dsaf_device {int dsaf_ver; struct dsaf_hw_stats* hw_stats; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_1 (struct dsaf_device*,size_t) ;
 size_t FUNC_2 (int) ;

void FUNC_3(struct dsaf_device *VAR_19, u32 VAR_20)
{
 struct dsaf_hw_stats *VAR_21
  = &VAR_19->hw_stats[VAR_20];
 bool VAR_22 = FUNC_0(VAR_19->dsaf_ver);
 int VAR_23;
 u32 VAR_24;

 VAR_21->pad_drop += FUNC_1(VAR_19,
  VAR_8 + 0x80 * (u64)VAR_20);
 VAR_21->man_pkts += FUNC_1(VAR_19,
  VAR_3 + 0x80 * (u64)VAR_20);
 VAR_21->rx_pkts += FUNC_1(VAR_19,
  VAR_5 + 0x80 * (u64)VAR_20);
 VAR_21->rx_pkt_id += FUNC_1(VAR_19,
  VAR_11 + 0x80 * (u64)VAR_20);

 VAR_24 = VAR_22 ? VAR_4 :
       VAR_0;
 VAR_21->rx_pause_frame +=
  FUNC_1(VAR_19, VAR_24 + 0x80 * (u64)VAR_20);

 VAR_21->release_buf_num += FUNC_1(VAR_19,
  VAR_12 + 0x80 * (u64)VAR_20);
 VAR_21->sbm_drop += FUNC_1(VAR_19,
  VAR_10 + 0x80 * (u64)VAR_20);
 VAR_21->crc_false += FUNC_1(VAR_19,
  VAR_2 + 0x80 * (u64)VAR_20);
 VAR_21->bp_drop += FUNC_1(VAR_19,
  VAR_1 + 0x80 * (u64)VAR_20);
 VAR_21->rslt_drop += FUNC_1(VAR_19,
  VAR_9 + 0x80 * (u64)VAR_20);
 VAR_21->local_addr_false += FUNC_1(VAR_19,
  VAR_7 + 0x80 * (u64)VAR_20);

 VAR_21->vlan_drop += FUNC_1(VAR_19,
  VAR_13 + 4 * (u64)VAR_20);
 VAR_21->stp_drop += FUNC_1(VAR_19,
  VAR_6 + 4 * (u64)VAR_20);


 if ((VAR_20 < VAR_15) && !VAR_22) {
  for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++) {
   VAR_24 = FUNC_2(VAR_23);
   VAR_21->rx_pfc[VAR_23] += FUNC_1(VAR_19,
    VAR_24 + 0x4 * (u64)VAR_20);
   VAR_21->tx_pfc[VAR_23] += FUNC_1(VAR_19,
    VAR_17 +
    VAR_18 * VAR_23 +
    0xF0 * (u64)VAR_20);
  }
 }
 VAR_21->tx_pkts += FUNC_1(VAR_19,
  VAR_16 + 0x90 * (u64)VAR_20);
}
