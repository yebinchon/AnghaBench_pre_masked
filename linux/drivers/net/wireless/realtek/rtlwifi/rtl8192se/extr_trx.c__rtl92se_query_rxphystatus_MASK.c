
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rx_fwinfo {int* cfosho; int* gain_trsw; int* rxsnr; int pwdb_all; int * rxevm; } ;
struct rtl_stats {int is_cck; int packet_matchbssid; int packet_toself; int packet_beacon; int* rx_mimo_sig_qual; int rx_pwdb_all; int signalquality; int* rx_mimo_signalstrength; scalar_t__ rate; int signalstrength; scalar_t__ is_ht; void* recvsignalpower; void* rxpower; } ;
struct rtl_ps_ctl {scalar_t__ rfpwr_state; } ;
struct TYPE_4__ {long* rx_snr_db; } ;
struct TYPE_3__ {int* rfpath_rxenable; } ;
struct rtl_priv {TYPE_2__ stats; TYPE_1__ dm; } ;
struct phy_sts_cck_8192s_t {int cck_agc_rpt; int sq_rpt; } ;
struct ieee80211_hw {int dummy; } ;
typedef void* s8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,int ,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_3 (struct rtl_priv*) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_6,
           struct rtl_stats *VAR_7, u8 *VAR_8,
           struct rx_fwinfo *VAR_9,
           bool VAR_10,
           bool VAR_11,
           bool VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_2(VAR_6);
 struct phy_sts_cck_8192s_t *VAR_14;
 struct rtl_ps_ctl *VAR_15 = FUNC_3(VAR_13);
 s8 VAR_16 = 0, VAR_17[4];
 u8 VAR_18 = 0, VAR_19, VAR_20;
 u8 VAR_21, VAR_22;
 u32 VAR_23, VAR_24 = 0;
 bool VAR_25 = VAR_7->is_cck;

 VAR_7->packet_matchbssid = VAR_10;
 VAR_7->packet_toself = VAR_11;
 VAR_7->packet_beacon = VAR_12;
 VAR_7->rx_mimo_sig_qual[0] = -1;
 VAR_7->rx_mimo_sig_qual[1] = -1;

 if (VAR_25) {
  u8 VAR_26, VAR_27;
  VAR_14 = (struct phy_sts_cck_8192s_t *)VAR_9;

  if (VAR_15->rfpwr_state == VAR_2)
   VAR_27 = (u8) FUNC_1(VAR_6,
      VAR_5,
      0x200);
  else
   VAR_27 = 0;

  if (!VAR_27) {
   u8 VAR_28 = VAR_14->cck_agc_rpt;
   VAR_26 = VAR_14->cck_agc_rpt & 0xc0;
   VAR_26 = VAR_26 >> 6;
   switch (VAR_26) {
   case 0x3:
    VAR_16 = -40 - (VAR_28 & 0x3e);
    break;
   case 0x2:
    VAR_16 = -20 - (VAR_28 & 0x3e);
    break;
   case 0x1:
    VAR_16 = -2 - (VAR_28 & 0x3e);
    break;
   case 0x0:
    VAR_16 = 14 - (VAR_28 & 0x3e);
    break;
   }
  } else {
   u8 VAR_29 = VAR_14->cck_agc_rpt;
   VAR_26 = VAR_9->cfosho[0] & 0x60;
   VAR_26 = VAR_26 >> 5;
   switch (VAR_26) {
   case 0x3:
    VAR_16 = -40 - ((VAR_29 & 0x1f) << 1);
    break;
   case 0x2:
    VAR_16 = -20 - ((VAR_29 & 0x1f) << 1);
    break;
   case 0x1:
    VAR_16 = -2 - ((VAR_29 & 0x1f) << 1);
    break;
   case 0x0:
    VAR_16 = 14 - ((VAR_29 & 0x1f) << 1);
    break;
   }
  }

  VAR_20 = FUNC_4(VAR_16);



  VAR_20 += 6;
  if (VAR_20 > 100)
   VAR_20 = 100;

  if (VAR_20 > 34 && VAR_20 <= 42)
   VAR_20 -= 2;
  else if (VAR_20 > 26 && VAR_20 <= 34)
   VAR_20 -= 6;
  else if (VAR_20 > 14 && VAR_20 <= 26)
   VAR_20 -= 8;
  else if (VAR_20 > 4 && VAR_20 <= 14)
   VAR_20 -= 4;

  VAR_7->rx_pwdb_all = VAR_20;
  VAR_7->recvsignalpower = VAR_16;

  if (VAR_10) {
   u8 VAR_30;
   if (VAR_7->rx_pwdb_all > 40) {
    VAR_30 = 100;
   } else {
    VAR_30 = VAR_14->sq_rpt;
    if (VAR_30 > 64)
     VAR_30 = 0;
    else if (VAR_30 < 20)
     VAR_30 = 100;
    else
     VAR_30 = ((64 - VAR_30) * 100) / 44;
   }

   VAR_7->signalquality = VAR_30;
   VAR_7->rx_mimo_sig_qual[0] = VAR_30;
   VAR_7->rx_mimo_sig_qual[1] = -1;
  }
 } else {
  VAR_13->dm.rfpath_rxenable[0] =
      VAR_13->dm.rfpath_rxenable[1] = 1;
  for (VAR_21 = VAR_4; VAR_21 < VAR_3; VAR_21++) {
   if (VAR_13->dm.rfpath_rxenable[VAR_21])
    VAR_18++;

   VAR_17[VAR_21] = ((VAR_9->gain_trsw[VAR_21] &
        0x3f) * 2) - 110;
   VAR_23 = FUNC_4(VAR_17[VAR_21]);
   VAR_24 += VAR_23;
   VAR_13->stats.rx_snr_db[VAR_21] =
      (long)(VAR_9->rxsnr[VAR_21] / 2);

   if (VAR_10)
    VAR_7->rx_mimo_signalstrength[VAR_21] = (u8) VAR_23;
  }

  VAR_16 = ((VAR_9->pwdb_all >> 1) & 0x7f) - 110;
  VAR_20 = FUNC_4(VAR_16);
  VAR_7->rx_pwdb_all = VAR_20;
  VAR_7->rxpower = VAR_16;
  VAR_7->recvsignalpower = VAR_16;

  if (VAR_7->is_ht && VAR_7->rate >= VAR_1 &&
      VAR_7->rate <= VAR_0)
   VAR_22 = 2;
  else
   VAR_22 = 1;

  for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
   VAR_19 = FUNC_0(VAR_9->rxevm[VAR_21]);

   if (VAR_10) {
    if (VAR_21 == 0)
     VAR_7->signalquality = (u8)(VAR_19 &
         0xff);
    VAR_7->rx_mimo_sig_qual[VAR_21] = (u8) (VAR_19 & 0xff);
   }
  }
 }

 if (VAR_25)
  VAR_7->signalstrength = (u8)(FUNC_5(VAR_6,
      VAR_20));
 else if (VAR_18 != 0)
  VAR_7->signalstrength = (u8) (FUNC_5(VAR_6,
    VAR_24 /= VAR_18));
}
