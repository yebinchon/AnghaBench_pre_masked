
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u16 ;
struct pulse_event {int freq; scalar_t__ width; int chirp; scalar_t__ ts; int rssi; } ;
struct ath_softc {scalar_t__ dfs_prev_pulse_ts; struct ath_hw* sc_ah; } ;
struct ath_rx_status {scalar_t__ rs_phyerr; int rs_datalen; int* rs_rssi_ctl; int* rs_rssi_ext; } ;
struct ath_radar_data {int rssi; int ext_rssi; char pulse_bw_info; char pulse_length_ext; char pulse_length_pri; } ;
struct ath_hw {TYPE_1__* curchan; } ;
struct ath_common {int dummy; } ;
struct TYPE_3__ {int channel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_softc*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct ath_softc*,void*,int,int,int) ;
 int FUNC_4 (struct ath_softc*,struct pulse_event*) ;
 struct ath_common* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_softc*,struct ath_radar_data*,struct pulse_event*) ;
 int FUNC_7 (struct ath_common*,int ,char*,int,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_8(struct ath_softc *VAR_10, void *VAR_11,
         struct ath_rx_status *VAR_12, u64 VAR_13)
{
 struct ath_radar_data VAR_14;
 u16 VAR_15;
 char *VAR_16;
 struct pulse_event VAR_17;
 struct ath_hw *VAR_18 = VAR_10->sc_ah;
 struct ath_common *VAR_19 = FUNC_5(VAR_18);

 FUNC_0(VAR_10, VAR_9);
 if ((VAR_12->rs_phyerr != VAR_1) &&
     (VAR_12->rs_phyerr != VAR_0)) {
  FUNC_7(VAR_19, VAR_2,
   "Error: rs_phyer=0x%x not a radar error\n",
   VAR_12->rs_phyerr);
  FUNC_0(VAR_10, VAR_8);
  return;
 }

 VAR_15 = VAR_12->rs_datalen;
 if (VAR_15 == 0) {
  FUNC_0(VAR_10, VAR_7);
  return;
 }

 VAR_14.rssi = VAR_12->rs_rssi_ctl[0];
 VAR_14.ext_rssi = VAR_12->rs_rssi_ext[0];





 if (VAR_14.rssi & 0x80)
  VAR_14.rssi = 0;
 if (VAR_14.ext_rssi & 0x80)
  VAR_14.ext_rssi = 0;

 VAR_16 = VAR_11 + VAR_15;
 VAR_14.pulse_bw_info = VAR_16[-1];
 VAR_14.pulse_length_ext = VAR_16[-2];
 VAR_14.pulse_length_pri = VAR_16[-3];
 VAR_17.freq = VAR_18->curchan->channel;
 VAR_17.ts = VAR_13;
 if (!FUNC_6(VAR_10, &VAR_14, &VAR_17))
  return;

 if (VAR_17.width > VAR_5 &&
     VAR_17.width < VAR_4) {
  bool VAR_20 = !!(VAR_14.pulse_bw_info & VAR_6);
  bool VAR_21 = !!(VAR_14.pulse_bw_info & VAR_3);
  int VAR_22 = VAR_15 - 3;
  VAR_17.chirp = FUNC_3(VAR_10, VAR_11, VAR_22, VAR_20, VAR_21);
 } else {
  VAR_17.chirp = 0;
 }

 FUNC_7(VAR_19, VAR_2,
  "ath9k_dfs_process_phyerr: type=%d, freq=%d, ts=%llu, "
  "width=%d, rssi=%d, delta_ts=%llu\n",
  VAR_14.pulse_bw_info, VAR_17.freq, VAR_17.ts, VAR_17.width, VAR_17.rssi,
  VAR_17.ts - VAR_10->dfs_prev_pulse_ts);
 VAR_10->dfs_prev_pulse_ts = VAR_17.ts;
 if (VAR_14.pulse_bw_info & VAR_6)
  FUNC_4(VAR_10, &VAR_17);
 if (FUNC_1(VAR_18->curchan) &&
     VAR_14.pulse_bw_info & VAR_3) {
  VAR_17.freq += FUNC_2(VAR_18->curchan) ? 20 : -20;
  FUNC_4(VAR_10, &VAR_17);
 }
}
