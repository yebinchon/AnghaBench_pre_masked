
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_link_stats_global {int tx_fail_no_ack; int rx_crc_errors; int rx_mic_errors; int tx_beacons; int tx_ba_frames; int rx_ba_frames; int tx_frames; int rx_frames; } ;
struct wil6210_priv {int dummy; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wil6210_priv *VAR_0,
     struct seq_file *VAR_1,
     struct wmi_link_stats_global *VAR_2)
{
 FUNC_1(VAR_1, "Frames(rx:tx) %d:%d\n"
     "BA Frames(rx:tx) %d:%d\n"
     "Beacons %d\n"
     "Rx Errors (MIC:CRC) %d:%d\n"
     "Tx Errors (no ack) %d\n",
     FUNC_0(VAR_2->rx_frames),
     FUNC_0(VAR_2->tx_frames),
     FUNC_0(VAR_2->rx_ba_frames),
     FUNC_0(VAR_2->tx_ba_frames),
     FUNC_0(VAR_2->tx_beacons),
     FUNC_0(VAR_2->rx_mic_errors),
     FUNC_0(VAR_2->rx_crc_errors),
     FUNC_0(VAR_2->tx_fail_no_ack));
}
