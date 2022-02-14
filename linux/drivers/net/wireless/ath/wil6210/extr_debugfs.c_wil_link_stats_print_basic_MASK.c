
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_link_stats_basic {int per_average; int other_tx_sector; int other_rx_sector; int my_tx_sector; int my_rx_sector; int rx_effective_ant_num; int selected_rfc; int snr; int sqi; int rssi; int rx_bcast_frames; int tx_goodput; int rx_goodput; int tx_tpt; int bf_mcs; int cid; } ;
struct wil6210_vif {int dummy; } ;
struct seq_file {int dummy; } ;
typedef int per ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_3(struct wil6210_vif *VAR_0,
           struct seq_file *VAR_1,
           struct wmi_link_stats_basic *VAR_2)
{
 char VAR_3[5] = "?";

 if (VAR_2->per_average != 0xff)
  FUNC_2(VAR_3, sizeof(VAR_3), "%d%%", VAR_2->per_average);

 FUNC_1(VAR_1, "CID %d {\n"
     "\tTxMCS %d TxTpt %d\n"
     "\tGoodput(rx:tx) %d:%d\n"
     "\tRxBcastFrames %d\n"
     "\tRSSI %d SQI %d SNR %d PER %s\n"
     "\tRx RFC %d Ant num %d\n"
     "\tSectors(rx:tx) my %d:%d peer %d:%d\n"
     "}\n",
     VAR_2->cid,
     VAR_2->bf_mcs, FUNC_0(VAR_2->tx_tpt),
     FUNC_0(VAR_2->rx_goodput),
     FUNC_0(VAR_2->tx_goodput),
     FUNC_0(VAR_2->rx_bcast_frames),
     VAR_2->rssi, VAR_2->sqi, VAR_2->snr, VAR_3,
     VAR_2->selected_rfc, VAR_2->rx_effective_ant_num,
     VAR_2->my_rx_sector, VAR_2->my_tx_sector,
     VAR_2->other_rx_sector, VAR_2->other_tx_sector);
}
