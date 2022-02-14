
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ts_src; int rx_fifo_size; int tx_fifo_size; int pps_out_num; int aux_snap_num; int tx_ch_cnt; int rx_ch_cnt; int tx_q_cnt; int rx_q_cnt; int l3l4_filter_num; int hash_table_size; int tc_cnt; scalar_t__ rss; scalar_t__ dma_debug; scalar_t__ tso; scalar_t__ sph; scalar_t__ dcb; int dma_width; scalar_t__ adv_ts_hi; scalar_t__ sa_vlan_ins; scalar_t__ addn_mac; scalar_t__ rx_coe; scalar_t__ tx_coe; scalar_t__ eee; scalar_t__ ts; scalar_t__ aoe; scalar_t__ mmc; scalar_t__ mgk; scalar_t__ rwk; scalar_t__ sma; scalar_t__ vlhash; } ;
struct xlgmac_pdata {TYPE_1__ hw_feat; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1(struct xlgmac_pdata *VAR_0)
{
 char *VAR_1 = ((void*)0);

 FUNC_0("\n");
 FUNC_0("=====================================================\n");
 FUNC_0("\n");
 FUNC_0("HW support following features\n");
 FUNC_0("\n");

 FUNC_0("VLAN Hash Filter Selected                   : %s\n",
    VAR_0->hw_feat.vlhash ? "YES" : "NO");
 FUNC_0("SMA (MDIO) Interface                        : %s\n",
    VAR_0->hw_feat.sma ? "YES" : "NO");
 FUNC_0("PMT Remote Wake-up Packet Enable            : %s\n",
    VAR_0->hw_feat.rwk ? "YES" : "NO");
 FUNC_0("PMT Magic Packet Enable                     : %s\n",
    VAR_0->hw_feat.mgk ? "YES" : "NO");
 FUNC_0("RMON/MMC Module Enable                      : %s\n",
    VAR_0->hw_feat.mmc ? "YES" : "NO");
 FUNC_0("ARP Offload Enabled                         : %s\n",
    VAR_0->hw_feat.aoe ? "YES" : "NO");
 FUNC_0("IEEE 1588-2008 Timestamp Enabled            : %s\n",
    VAR_0->hw_feat.ts ? "YES" : "NO");
 FUNC_0("Energy Efficient Ethernet Enabled           : %s\n",
    VAR_0->hw_feat.eee ? "YES" : "NO");
 FUNC_0("Transmit Checksum Offload Enabled           : %s\n",
    VAR_0->hw_feat.tx_coe ? "YES" : "NO");
 FUNC_0("Receive Checksum Offload Enabled            : %s\n",
    VAR_0->hw_feat.rx_coe ? "YES" : "NO");
 FUNC_0("Additional MAC Addresses 1-31 Selected      : %s\n",
    VAR_0->hw_feat.addn_mac ? "YES" : "NO");

 switch (VAR_0->hw_feat.ts_src) {
 case 0:
  VAR_1 = "RESERVED";
  break;
 case 1:
  VAR_1 = "INTERNAL";
  break;
 case 2:
  VAR_1 = "EXTERNAL";
  break;
 case 3:
  VAR_1 = "BOTH";
  break;
 }
 FUNC_0("Timestamp System Time Source                : %s\n", VAR_1);

 FUNC_0("Source Address or VLAN Insertion Enable     : %s\n",
    VAR_0->hw_feat.sa_vlan_ins ? "YES" : "NO");


 switch (VAR_0->hw_feat.rx_fifo_size) {
 case 0:
  VAR_1 = "128 bytes";
  break;
 case 1:
  VAR_1 = "256 bytes";
  break;
 case 2:
  VAR_1 = "512 bytes";
  break;
 case 3:
  VAR_1 = "1 KBytes";
  break;
 case 4:
  VAR_1 = "2 KBytes";
  break;
 case 5:
  VAR_1 = "4 KBytes";
  break;
 case 6:
  VAR_1 = "8 KBytes";
  break;
 case 7:
  VAR_1 = "16 KBytes";
  break;
 case 8:
  VAR_1 = "32 kBytes";
  break;
 case 9:
  VAR_1 = "64 KBytes";
  break;
 case 10:
  VAR_1 = "128 KBytes";
  break;
 case 11:
  VAR_1 = "256 KBytes";
  break;
 default:
  VAR_1 = "RESERVED";
 }
 FUNC_0("MTL Receive FIFO Size                       : %s\n", VAR_1);

 switch (VAR_0->hw_feat.tx_fifo_size) {
 case 0:
  VAR_1 = "128 bytes";
  break;
 case 1:
  VAR_1 = "256 bytes";
  break;
 case 2:
  VAR_1 = "512 bytes";
  break;
 case 3:
  VAR_1 = "1 KBytes";
  break;
 case 4:
  VAR_1 = "2 KBytes";
  break;
 case 5:
  VAR_1 = "4 KBytes";
  break;
 case 6:
  VAR_1 = "8 KBytes";
  break;
 case 7:
  VAR_1 = "16 KBytes";
  break;
 case 8:
  VAR_1 = "32 kBytes";
  break;
 case 9:
  VAR_1 = "64 KBytes";
  break;
 case 10:
  VAR_1 = "128 KBytes";
  break;
 case 11:
  VAR_1 = "256 KBytes";
  break;
 default:
  VAR_1 = "RESERVED";
 }
 FUNC_0("MTL Transmit FIFO Size                      : %s\n", VAR_1);

 FUNC_0("IEEE 1588 High Word Register Enable         : %s\n",
    VAR_0->hw_feat.adv_ts_hi ? "YES" : "NO");
 FUNC_0("Address width                               : %u\n",
    VAR_0->hw_feat.dma_width);
 FUNC_0("DCB Feature Enable                          : %s\n",
    VAR_0->hw_feat.dcb ? "YES" : "NO");
 FUNC_0("Split Header Feature Enable                 : %s\n",
    VAR_0->hw_feat.sph ? "YES" : "NO");
 FUNC_0("TCP Segmentation Offload Enable             : %s\n",
    VAR_0->hw_feat.tso ? "YES" : "NO");
 FUNC_0("DMA Debug Registers Enabled                 : %s\n",
    VAR_0->hw_feat.dma_debug ? "YES" : "NO");
 FUNC_0("RSS Feature Enabled                         : %s\n",
    VAR_0->hw_feat.rss ? "YES" : "NO");
 FUNC_0("Number of Traffic classes                   : %u\n",
    (VAR_0->hw_feat.tc_cnt));
 FUNC_0("Hash Table Size                             : %u\n",
    VAR_0->hw_feat.hash_table_size);
 FUNC_0("Total number of L3 or L4 Filters            : %u\n",
    VAR_0->hw_feat.l3l4_filter_num);


 FUNC_0("Number of MTL Receive Queues                : %u\n",
    VAR_0->hw_feat.rx_q_cnt);
 FUNC_0("Number of MTL Transmit Queues               : %u\n",
    VAR_0->hw_feat.tx_q_cnt);
 FUNC_0("Number of DMA Receive Channels              : %u\n",
    VAR_0->hw_feat.rx_ch_cnt);
 FUNC_0("Number of DMA Transmit Channels             : %u\n",
    VAR_0->hw_feat.tx_ch_cnt);

 switch (VAR_0->hw_feat.pps_out_num) {
 case 0:
  VAR_1 = "No PPS output";
  break;
 case 1:
  VAR_1 = "1 PPS output";
  break;
 case 2:
  VAR_1 = "2 PPS output";
  break;
 case 3:
  VAR_1 = "3 PPS output";
  break;
 case 4:
  VAR_1 = "4 PPS output";
  break;
 default:
  VAR_1 = "RESERVED";
 }
 FUNC_0("Number of PPS Outputs                       : %s\n", VAR_1);

 switch (VAR_0->hw_feat.aux_snap_num) {
 case 0:
  VAR_1 = "No auxiliary input";
  break;
 case 1:
  VAR_1 = "1 auxiliary input";
  break;
 case 2:
  VAR_1 = "2 auxiliary input";
  break;
 case 3:
  VAR_1 = "3 auxiliary input";
  break;
 case 4:
  VAR_1 = "4 auxiliary input";
  break;
 default:
  VAR_1 = "RESERVED";
 }
 FUNC_0("Number of Auxiliary Snapshot Inputs         : %s", VAR_1);

 FUNC_0("\n");
 FUNC_0("=====================================================\n");
 FUNC_0("\n");
}
