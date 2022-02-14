
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rx_fwinfo_88e {int* gain_trsw; int* rxsnr; int pwdb_all; int * rxevm; } ;
struct rtl_stats {int is_cck; int packet_matchbssid; int packet_toself; int packet_beacon; int* rx_mimo_signalquality; int rx_pwdb_all; int recvsignalpower; int signalquality; int* rx_mimo_signalstrength; int rxpower; scalar_t__ rate; int signalstrength; scalar_t__ is_ht; } ;
struct rtl_ps_ctl {scalar_t__ rfpwr_state; } ;
struct TYPE_5__ {long* rx_snr_db; } ;
struct TYPE_4__ {int* rfpath_rxenable; } ;
struct rtl_priv {TYPE_2__ stats; TYPE_1__ dm; } ;
struct TYPE_6__ {int antsel_rx_keep_2; int antsel_rx_keep_1; int antsel_rx_keep_0; } ;
struct rtl_dm {TYPE_3__ fat_table; } ;
struct phy_sts_cck_8192s_t {int cck_agc_rpt; int sq_rpt; } ;
struct phy_status_rpt {int antsel_rx_keep_2; int ant_sel_b; int ant_sel; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rtl_dm* FUNC_1 (struct rtl_priv*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_5 (struct rtl_priv*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct ieee80211_hw*,int) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_6,
   struct rtl_stats *VAR_7, __le32 *VAR_8,
   struct rx_fwinfo_88e *VAR_9,
   bool VAR_10,
   bool VAR_11, bool VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_4(VAR_6);
 struct rtl_ps_ctl *VAR_14 = FUNC_5(VAR_13);
 struct phy_sts_cck_8192s_t *VAR_15;
 struct phy_status_rpt *VAR_16 =
  (struct phy_status_rpt *)VAR_9;
 struct rtl_dm *VAR_17 = FUNC_1(FUNC_4(VAR_6));
 s8 VAR_18 = 0, VAR_19[4];
 u8 VAR_20 = 0, VAR_21, VAR_22;
 u8 VAR_23, VAR_24;
 u32 VAR_25, VAR_26 = 0;
 bool VAR_27 = VAR_7->is_cck;
 u8 VAR_28, VAR_29;


 VAR_7->packet_matchbssid = VAR_10;
 VAR_7->packet_toself = VAR_11;
 VAR_7->packet_beacon = VAR_12;
 VAR_7->rx_mimo_signalquality[0] = -1;
 VAR_7->rx_mimo_signalquality[1] = -1;

 if (VAR_27) {
  u8 VAR_30;
  u8 VAR_31;

  VAR_15 = (struct phy_sts_cck_8192s_t *)VAR_9;
  VAR_31 = VAR_15->cck_agc_rpt;





  if (VAR_14->rfpwr_state == VAR_2)
   VAR_30 =
    (u8)FUNC_3(VAR_6, VAR_5,
        FUNC_0(9));
  else
   VAR_30 = 0;

  VAR_28 = ((VAR_31 & 0xE0) >> 5);
  VAR_29 = (VAR_31 & 0x1f);
  switch (VAR_28) {
  case 7:
   if (VAR_29 <= 27)

    VAR_18 = -100 + 2*(27-VAR_29);
   else
    VAR_18 = -100;
   break;
  case 6:

   VAR_18 = -48 + 2*(2-VAR_29);
   break;
  case 5:

   VAR_18 = -42 + 2*(7-VAR_29);
   break;
  case 4:

   VAR_18 = -36 + 2*(7-VAR_29);
   break;
  case 3:

   VAR_18 = -24 + 2*(7-VAR_29);
   break;
  case 2:
   if (VAR_30)

    VAR_18 = -12 + 2*(5-VAR_29);
   else
    VAR_18 = -6 + 2*(5-VAR_29);
   break;
  case 1:
   VAR_18 = 8-2*VAR_29;
   break;
  case 0:
   VAR_18 = 14-2*VAR_29;
   break;
  default:
   break;
  }
  VAR_18 += 6;
  VAR_22 = FUNC_6(VAR_18);


  VAR_22 += 6;
  if (VAR_22 > 100)
   VAR_22 = 100;



  if (VAR_22 > 34 && VAR_22 <= 42)
   VAR_22 -= 2;
  else if (VAR_22 > 26 && VAR_22 <= 34)
   VAR_22 -= 6;
  else if (VAR_22 > 14 && VAR_22 <= 26)
   VAR_22 -= 8;
  else if (VAR_22 > 4 && VAR_22 <= 14)
   VAR_22 -= 4;
  if (!VAR_30) {
   if (VAR_22 >= 80)
    VAR_22 = ((VAR_22-80)<<1) +
        ((VAR_22-80)>>1) + 80;
   else if ((VAR_22 <= 78) && (VAR_22 >= 20))
    VAR_22 += 3;
   if (VAR_22 > 100)
    VAR_22 = 100;
  }

  VAR_7->rx_pwdb_all = VAR_22;
  VAR_7->recvsignalpower = VAR_18;


  if (VAR_10) {
   u8 VAR_32;

   if (VAR_7->rx_pwdb_all > 40)
    VAR_32 = 100;
   else {
    VAR_32 = VAR_15->sq_rpt;
    if (VAR_32 > 64)
     VAR_32 = 0;
    else if (VAR_32 < 20)
     VAR_32 = 100;
    else
     VAR_32 = ((64 - VAR_32) * 100) / 44;
   }

   VAR_7->signalquality = VAR_32;
   VAR_7->rx_mimo_signalquality[0] = VAR_32;
   VAR_7->rx_mimo_signalquality[1] = -1;
  }
 } else {
  VAR_13->dm.rfpath_rxenable[0] =
      VAR_13->dm.rfpath_rxenable[1] = 1;


  for (VAR_23 = VAR_4; VAR_23 < VAR_3; VAR_23++) {

   if (VAR_13->dm.rfpath_rxenable[VAR_23])
    VAR_20++;

   VAR_19[VAR_23] = ((VAR_9->gain_trsw[VAR_23] &
          0x3f) * 2) - 110;


   VAR_25 = FUNC_6(VAR_19[VAR_23]);
   VAR_26 += VAR_25;


   VAR_13->stats.rx_snr_db[VAR_23] =
    (long)(VAR_9->rxsnr[VAR_23] / 2);


   if (VAR_10)
    VAR_7->rx_mimo_signalstrength[VAR_23] = (u8)VAR_25;
  }




  VAR_18 = ((VAR_9->pwdb_all >> 1) & 0x7f) - 110;

  VAR_22 = FUNC_6(VAR_18);
  VAR_7->rx_pwdb_all = VAR_22;
  VAR_7->rxpower = VAR_18;
  VAR_7->recvsignalpower = VAR_18;


  if (VAR_7->is_ht && VAR_7->rate >= VAR_1 &&
      VAR_7->rate <= VAR_0)
   VAR_24 = 2;
  else
   VAR_24 = 1;

  for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++) {
   VAR_21 = FUNC_2(VAR_9->rxevm[VAR_23]);

   if (VAR_10) {



    if (VAR_23 == 0)
     VAR_7->signalquality =
      (u8)(VAR_21 & 0xff);
    VAR_7->rx_mimo_signalquality[VAR_23] =
     (u8)(VAR_21 & 0xff);
   }
  }
 }




 if (VAR_27)
  VAR_7->signalstrength = (u8)(FUNC_7(VAR_6,
   VAR_22));
 else if (VAR_20 != 0)
  VAR_7->signalstrength = (u8)(FUNC_7(VAR_6,
   VAR_26 /= VAR_20));

 VAR_17->fat_table.antsel_rx_keep_0 = VAR_16->ant_sel;
 VAR_17->fat_table.antsel_rx_keep_1 = VAR_16->ant_sel_b;
 VAR_17->fat_table.antsel_rx_keep_2 = VAR_16->antsel_rx_keep_2;
}
