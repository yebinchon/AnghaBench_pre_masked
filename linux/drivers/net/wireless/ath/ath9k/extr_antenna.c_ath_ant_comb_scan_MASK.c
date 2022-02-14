
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_ant_comb {int low_rssi_thresh; int ant_ratio; int total_pkt_count; int main_total_rssi; int alt_total_rssi; int alt_recv_cnt; scalar_t__ count; int alt_good; int scan; int scan_not_start; scalar_t__ main_recv_cnt; int scan_start_time; int quick_scan_cnt; int ant_ratio2; } ;
struct ath_softc {int sc_ah; struct ath_ant_comb ant_comb; } ;
struct ath_rx_status {int* rs_rssi_ctl; scalar_t__ rs_moreaggr; } ;
struct ath_hw_antcomb_conf {int alt_lna_conf; int main_lna_conf; int lna1_lna2_delta; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct ath_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct ath_softc*,struct ath_hw_antcomb_conf*,int,int) ;
 int FUNC_3 (int ,struct ath_hw_antcomb_conf*) ;
 int FUNC_4 (int ,struct ath_hw_antcomb_conf*) ;
 int FUNC_5 (struct ath_hw_antcomb_conf*,struct ath_ant_comb*,int) ;
 int FUNC_6 (struct ath_ant_comb*) ;
 int FUNC_7 (struct ath_ant_comb*,struct ath_hw_antcomb_conf*,int,int,int) ;
 int FUNC_8 (struct ath_hw_antcomb_conf*,struct ath_ant_comb*,int,int,int,int,int) ;
 int FUNC_9 (struct ath_ant_comb*,struct ath_hw_antcomb_conf,int) ;
 int FUNC_10 (struct ath_ant_comb*,struct ath_hw_antcomb_conf*,int,int,int) ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_11(struct ath_softc *VAR_15, struct ath_rx_status *VAR_16)
{
 struct ath_hw_antcomb_conf VAR_17;
 struct ath_ant_comb *VAR_18 = &VAR_15->ant_comb;
 int VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22;
 int VAR_23;
 int VAR_24 = VAR_16->rs_rssi_ctl[0];
 int VAR_25 = VAR_16->rs_rssi_ctl[1];
 int VAR_26, VAR_27;
 bool VAR_28 = 0, VAR_29;

 VAR_26 = (VAR_16->rs_rssi_ctl[2] >> VAR_10) &
         VAR_12;
 VAR_27 = (VAR_16->rs_rssi_ctl[2] >> VAR_11) &
    VAR_12;

 if (VAR_25 >= VAR_18->low_rssi_thresh) {
  VAR_18->ant_ratio = VAR_2;
  VAR_18->ant_ratio2 = VAR_3;
 } else {
  VAR_18->ant_ratio = VAR_5;
  VAR_18->ant_ratio2 = VAR_4;
 }


 if (VAR_24 > 0 && VAR_25 > 0) {
  VAR_18->total_pkt_count++;
  VAR_18->main_total_rssi += VAR_24;
  VAR_18->alt_total_rssi += VAR_25;

  if (VAR_27 == VAR_26)
   VAR_18->main_recv_cnt++;
  else
   VAR_18->alt_recv_cnt++;
 }

 if (VAR_27 == VAR_26) {
  FUNC_1(VAR_15, VAR_1, VAR_14);
  FUNC_0(VAR_15, VAR_1, VAR_26);
 } else {
  FUNC_1(VAR_15, VAR_0, VAR_14);
  FUNC_0(VAR_15, VAR_0, VAR_26);
 }


 VAR_28 = FUNC_6(VAR_18);

 if (((VAR_18->total_pkt_count < VAR_9) ||
      VAR_16->rs_moreaggr) && !VAR_28)
  return;

 if (VAR_18->total_pkt_count) {
  VAR_19 = ((VAR_18->alt_recv_cnt * 100) /
        VAR_18->total_pkt_count);
  VAR_21 = (VAR_18->main_total_rssi /
     VAR_18->total_pkt_count);
  VAR_20 = (VAR_18->alt_total_rssi /
     VAR_18->total_pkt_count);
 }

 FUNC_3(VAR_15->sc_ah, &VAR_17);
 VAR_22 = VAR_17.alt_lna_conf;
 VAR_23 = VAR_17.main_lna_conf;
 VAR_18->count++;

 if (VAR_18->count == VAR_8) {
  if (VAR_19 > VAR_18->ant_ratio) {
   FUNC_9(VAR_18, VAR_17,
        VAR_21);
   VAR_18->alt_good = 1;
  } else {
   VAR_18->alt_good = 0;
  }

  VAR_18->count = 0;
  VAR_18->scan = 1;
  VAR_18->scan_not_start = 1;
 }

 if (!VAR_18->scan) {
  VAR_29 = FUNC_8(&VAR_17, VAR_18, VAR_19,
      VAR_20, VAR_21,
      VAR_23, VAR_22);
  if (VAR_29)
   goto div_comb_done;
 }

 if (!VAR_18->scan &&
     (VAR_20 < (VAR_21 + VAR_17.lna1_lna2_delta)))
  goto div_comb_done;

 if (!VAR_18->scan_not_start) {
  FUNC_7(VAR_18, &VAR_17, VAR_22,
     VAR_20, VAR_21);
 } else {
  if (!VAR_18->alt_good) {
   VAR_18->scan_not_start = 0;

   if (VAR_23 == VAR_7) {
    VAR_17.main_lna_conf =
     VAR_7;
    VAR_17.alt_lna_conf =
     VAR_6;
   } else if (VAR_23 == VAR_6) {
    VAR_17.main_lna_conf =
     VAR_6;
    VAR_17.alt_lna_conf =
     VAR_7;
   }
   goto div_comb_done;
  }
  FUNC_10(VAR_18, &VAR_17,
         VAR_21, VAR_20,
         VAR_19);
  VAR_18->quick_scan_cnt++;
 }

div_comb_done:
 FUNC_5(&VAR_17, VAR_18, VAR_19);
 FUNC_4(VAR_15->sc_ah, &VAR_17);
 FUNC_2(VAR_15, &VAR_17, VAR_21, VAR_20);

 VAR_18->scan_start_time = VAR_13;
 VAR_18->total_pkt_count = 0;
 VAR_18->main_total_rssi = 0;
 VAR_18->alt_total_rssi = 0;
 VAR_18->main_recv_cnt = 0;
 VAR_18->alt_recv_cnt = 0;
}
