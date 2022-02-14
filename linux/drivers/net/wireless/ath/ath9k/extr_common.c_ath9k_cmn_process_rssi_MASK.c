
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_rx_status {int chains; int* chain_signal; int signal; int flag; } ;
struct ieee80211_hw {int dummy; } ;
struct ath_rx_status {int rs_rssi; int* rs_rssi_ctl; scalar_t__ is_mybeacon; scalar_t__ rs_moreaggr; } ;
struct TYPE_2__ {int avgbrssi; } ;
struct ath_hw {int rxchainmask; int noise; scalar_t__ opmode; TYPE_1__ stats; } ;
struct ath_common {int last_rssi; struct ath_hw* ah; } ;
typedef int s8 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(struct ath_common *VAR_6,
       struct ieee80211_hw *VAR_7,
       struct ath_rx_status *VAR_8,
       struct ieee80211_rx_status *VAR_9)
{
 struct ath_hw *VAR_10 = VAR_6->ah;
 int VAR_11;
 int VAR_12 = VAR_8->rs_rssi;
 int VAR_13, VAR_14;




 if (VAR_8->rs_moreaggr) {
  VAR_9->flag |= VAR_5;
  return;
 }





 if (VAR_8->rs_rssi == VAR_0) {
  VAR_9->flag |= VAR_5;
  return;
 }

 for (VAR_13 = 0, VAR_14 = 0; VAR_13 < FUNC_0(VAR_8->rs_rssi_ctl); VAR_13++) {
  s8 VAR_15;

  if (!(VAR_10->rxchainmask & FUNC_3(VAR_13)))
   continue;

  VAR_15 = VAR_8->rs_rssi_ctl[VAR_13];
  if (VAR_15 != VAR_0) {
      VAR_9->chains |= FUNC_3(VAR_14);
      VAR_9->chain_signal[VAR_14] = VAR_10->noise + VAR_15;
  }
  VAR_14++;
 }




 if (VAR_8->is_mybeacon &&
     ((VAR_10->opmode == VAR_4) ||
      (VAR_10->opmode == VAR_3))) {
  FUNC_2(VAR_6->last_rssi, VAR_8->rs_rssi);
  VAR_11 = VAR_6->last_rssi;

  if (FUNC_4(VAR_11 != VAR_1))
   VAR_12 = FUNC_1(VAR_11, VAR_2);
  if (VAR_12 < 0)
   VAR_12 = 0;

  VAR_10->stats.avgbrssi = VAR_12;
 }

 VAR_9->signal = VAR_10->noise + VAR_8->rs_rssi;
}
