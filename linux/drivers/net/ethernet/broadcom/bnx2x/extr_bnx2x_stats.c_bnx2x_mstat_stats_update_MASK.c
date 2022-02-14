
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rx_grxpp_lo; int rx_grxpp_hi; } ;
struct TYPE_7__ {int tx_gtxpp_lo; int tx_gtxpp_hi; } ;
struct mstat_stats {TYPE_2__ stats_rx; TYPE_1__ stats_tx; } ;
struct host_port_stats {int pfc_frames_tx_lo; int pfc_frames_tx_hi; int pfc_frames_rx_lo; int pfc_frames_rx_hi; TYPE_3__* mac_stx; } ;
struct bnx2x_eth_stats {int pfc_frames_sent_lo; int pfc_frames_sent_hi; int pfc_frames_received_lo; int pfc_frames_received_hi; int pause_frames_sent_lo; int pause_frames_sent_hi; int pause_frames_received_lo; int pause_frames_received_hi; int etherstatspktsover1522octets_lo; int etherstatspktsover1522octets_hi; int etherstatspkts1024octetsto1522octets_lo; int etherstatspkts1024octetsto1522octets_hi; } ;
struct bnx2x {struct bnx2x_eth_stats eth_stats; } ;
struct TYPE_12__ {int mstat_stats; } ;
struct TYPE_11__ {int rx_grxpf; int rx_grxcf; int rx_grfrg; int rx_grovr; int rx_grund; int rx_grfcs; int rx_grerb; } ;
struct TYPE_10__ {int tx_gtufl; int tx_gterr; int tx_gt16383; int tx_gt9216; int tx_gt4095; int tx_gt2047; int tx_gt1518; int tx_gt1023; int tx_gt511; int tx_gt255; int tx_gt127; int tx_gt64; int tx_gtxpf; } ;
struct TYPE_9__ {int tx_stat_outxoffsent_lo; int tx_stat_outxoffsent_hi; int rx_stat_mac_xpf_lo; int rx_stat_mac_xpf_hi; int tx_stat_mac_16383_lo; int tx_stat_mac_16383_hi; int tx_stat_mac_9216_lo; int tx_stat_mac_9216_hi; int tx_stat_mac_4095_lo; int tx_stat_mac_4095_hi; int tx_stat_mac_2047_lo; int tx_stat_mac_2047_hi; int tx_stat_etherstatspkts1024octetsto1522octets_lo; int tx_stat_etherstatspkts1024octetsto1522octets_hi; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (struct bnx2x*,int ) ;
 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__ VAR_10 ;
 TYPE_4__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_26)
{
 struct host_port_stats *VAR_27 = FUNC_2(VAR_26, VAR_1);
 struct bnx2x_eth_stats *VAR_28 = &VAR_26->eth_stats;

 struct mstat_stats *VAR_29 = FUNC_2(VAR_26, VAR_0.mstat_stats);

 FUNC_1(VAR_10.rx_grerb, VAR_6);
 FUNC_1(VAR_10.rx_grfcs, VAR_2);
 FUNC_1(VAR_10.rx_grund, VAR_5);
 FUNC_1(VAR_10.rx_grovr, VAR_3);
 FUNC_1(VAR_10.rx_grfrg, VAR_4);
 FUNC_1(VAR_10.rx_grxcf, VAR_8);
 FUNC_1(VAR_10.rx_grxpf, VAR_9);
 FUNC_1(VAR_10.rx_grxpf, VAR_7);
 FUNC_1(VAR_11.tx_gtxpf, VAR_25);
 FUNC_1(VAR_11.tx_gtxpf, VAR_19);


 FUNC_0(VAR_27->pfc_frames_tx_hi, VAR_29->stats_tx.tx_gtxpp_hi,
  VAR_27->pfc_frames_tx_lo, VAR_29->stats_tx.tx_gtxpp_lo);
 FUNC_0(VAR_27->pfc_frames_rx_hi, VAR_29->stats_rx.rx_grxpp_hi,
  VAR_27->pfc_frames_rx_lo, VAR_29->stats_rx.rx_grxpp_lo);

 FUNC_1(VAR_11.tx_gt64, VAR_17);
 FUNC_1(VAR_11.tx_gt127,
   VAR_18);
 FUNC_1(VAR_11.tx_gt255,
   VAR_14);
 FUNC_1(VAR_11.tx_gt511,
   VAR_15);
 FUNC_1(VAR_11.tx_gt1023,
   VAR_16);
 FUNC_1(VAR_11.tx_gt1518,
   VAR_13);
 FUNC_1(VAR_11.tx_gt2047, VAR_21);

 FUNC_1(VAR_11.tx_gt4095, VAR_22);
 FUNC_1(VAR_11.tx_gt9216, VAR_23);
 FUNC_1(VAR_11.tx_gt16383, VAR_20);

 FUNC_1(VAR_11.tx_gterr,
   VAR_12);
 FUNC_1(VAR_11.tx_gtufl, VAR_24);

 VAR_28->etherstatspkts1024octetsto1522octets_hi =
     VAR_27->mac_stx[1].tx_stat_etherstatspkts1024octetsto1522octets_hi;
 VAR_28->etherstatspkts1024octetsto1522octets_lo =
     VAR_27->mac_stx[1].tx_stat_etherstatspkts1024octetsto1522octets_lo;

 VAR_28->etherstatspktsover1522octets_hi =
     VAR_27->mac_stx[1].tx_stat_mac_2047_hi;
 VAR_28->etherstatspktsover1522octets_lo =
     VAR_27->mac_stx[1].tx_stat_mac_2047_lo;

 FUNC_0(VAR_28->etherstatspktsover1522octets_hi,
        VAR_27->mac_stx[1].tx_stat_mac_4095_hi,
        VAR_28->etherstatspktsover1522octets_lo,
        VAR_27->mac_stx[1].tx_stat_mac_4095_lo);

 FUNC_0(VAR_28->etherstatspktsover1522octets_hi,
        VAR_27->mac_stx[1].tx_stat_mac_9216_hi,
        VAR_28->etherstatspktsover1522octets_lo,
        VAR_27->mac_stx[1].tx_stat_mac_9216_lo);

 FUNC_0(VAR_28->etherstatspktsover1522octets_hi,
        VAR_27->mac_stx[1].tx_stat_mac_16383_hi,
        VAR_28->etherstatspktsover1522octets_lo,
        VAR_27->mac_stx[1].tx_stat_mac_16383_lo);

 VAR_28->pause_frames_received_hi =
    VAR_27->mac_stx[1].rx_stat_mac_xpf_hi;
 VAR_28->pause_frames_received_lo =
    VAR_27->mac_stx[1].rx_stat_mac_xpf_lo;

 VAR_28->pause_frames_sent_hi =
    VAR_27->mac_stx[1].tx_stat_outxoffsent_hi;
 VAR_28->pause_frames_sent_lo =
    VAR_27->mac_stx[1].tx_stat_outxoffsent_lo;

 VAR_28->pfc_frames_received_hi =
    VAR_27->pfc_frames_rx_hi;
 VAR_28->pfc_frames_received_lo =
    VAR_27->pfc_frames_rx_lo;
 VAR_28->pfc_frames_sent_hi =
    VAR_27->pfc_frames_tx_hi;
 VAR_28->pfc_frames_sent_lo =
    VAR_27->pfc_frames_tx_lo;
}
