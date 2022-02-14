
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rx_fwinfo_8821ae {int pwdb_all; } ;
struct rtl_stats {int is_cck; int packet_matchbssid; int packet_toself; int packet_beacon; int* rx_mimo_signalquality; int rx_pwdb_all; int recvsignalpower; int signalquality; int* rx_snr; int* rx_mimo_signalstrength; int rxpower; scalar_t__ rate; int* rx_mimo_evm_dbm; int signalstrength; scalar_t__ is_vht; scalar_t__ is_ht; void** cfo_tail; void** cfo_short; } ;
struct TYPE_6__ {int* cfo_tail; int packet_count; scalar_t__* rfpath_rxenable; } ;
struct TYPE_5__ {int* rx_snr_db; } ;
struct TYPE_8__ {scalar_t__ hw_type; } ;
struct rtl_phy {scalar_t__ cck_high_power; } ;
struct rtl_priv {TYPE_2__ dm; TYPE_1__ stats; TYPE_4__ rtlhal; struct rtl_phy phy; } ;
struct TYPE_7__ {int antsel_rx_keep_1; int antsel_rx_keep_0; } ;
struct rtl_dm {TYPE_3__ fat_table; } ;
struct phy_status_rpt {int* cfosho; int pwdb_all; int* gain_trsw; int* rxsnr; int* cfotail; int antidx_antb; int antidx_anta; int * rxevm; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 struct rtl_dm* FUNC_2 (struct rtl_priv*) ;
 int FUNC_3 (int ) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct ieee80211_hw*,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_8,
         struct rtl_stats *VAR_9, __le32 *VAR_10,
         struct rx_fwinfo_8821ae *VAR_11,
         bool VAR_12,
         bool VAR_13, bool VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_4(VAR_8);
 struct phy_status_rpt *VAR_16 = (struct phy_status_rpt *)VAR_11;
 struct rtl_dm *VAR_17 = FUNC_2(FUNC_4(VAR_8));
 struct rtl_phy *VAR_18 = &VAR_15->phy;
 s8 VAR_19 = 0, VAR_20[4];
 u8 VAR_21 = 0, VAR_22, VAR_23, VAR_24;
 u8 VAR_25, VAR_26;
 u32 VAR_27, VAR_28 = 0;
 bool VAR_29 = VAR_9->is_cck;
 u8 VAR_30, VAR_31;


 VAR_9->packet_matchbssid = VAR_12;
 VAR_9->packet_toself = VAR_13;
 VAR_9->packet_beacon = VAR_14;
 VAR_9->rx_mimo_signalquality[0] = -1;
 VAR_9->rx_mimo_signalquality[1] = -1;

 if (VAR_29) {
  u8 VAR_32;
  u8 VAR_33;

  VAR_33 = VAR_16->cfosho[0];





  VAR_32 = (u8)VAR_18->cck_high_power;

  VAR_30 = ((VAR_33 & 0xE0) >> 5);
  VAR_31 = (VAR_33 & 0x1f);
  if (VAR_15->rtlhal.hw_type == VAR_4) {
   switch (VAR_30) {
   case 7:
    if (VAR_31 <= 27)

     VAR_19 = -100 + 2*(27-VAR_31);
    else
     VAR_19 = -100;
    break;
   case 6:

    VAR_19 = -48 + 2*(2-VAR_31);
    break;
   case 5:

    VAR_19 = -42 + 2*(7-VAR_31);
    break;
   case 4:

    VAR_19 = -36 + 2*(7-VAR_31);
    break;
   case 3:

    VAR_19 = -24 + 2*(7-VAR_31);
    break;
   case 2:
    if (VAR_32)

     VAR_19 = -12 + 2*(5-VAR_31);
    else
     VAR_19 = -6 + 2*(5-VAR_31);
    break;
   case 1:
    VAR_19 = 8-2*VAR_31;
    break;
   case 0:
    VAR_19 = 14-2*VAR_31;
    break;
   default:
    break;
   }
   VAR_19 += 6;
   VAR_24 = FUNC_5(VAR_19);
   if (!VAR_32) {
    if (VAR_24 >= 80)
     VAR_24 =
       ((VAR_24 - 80)<<1) +
      ((VAR_24 - 80)>>1) + 80;
    else if ((VAR_24 <= 78) && (VAR_24 >= 20))
     VAR_24 += 3;
    if (VAR_24 > 100)
     VAR_24 = 100;
   }
  } else {
   s8 VAR_34 = -6;

   switch (VAR_30) {
   case 5:
    VAR_19 = VAR_34 - 32 - (2*VAR_31);
     break;
   case 4:
    VAR_19 = VAR_34 - 24 - (2*VAR_31);
     break;
   case 2:
    VAR_19 = VAR_34 - 11 - (2*VAR_31);
     break;
   case 1:
    VAR_19 = VAR_34 + 5 - (2*VAR_31);
     break;
   case 0:
    VAR_19 = VAR_34 + 21 - (2*VAR_31);
     break;
   }
   VAR_24 = FUNC_5(VAR_19);
  }

  VAR_9->rx_pwdb_all = VAR_24;
  VAR_9->recvsignalpower = VAR_19;


  if (VAR_12) {
   u8 VAR_35;

   if (VAR_9->rx_pwdb_all > 40) {
    VAR_35 = 100;
   } else {
    VAR_35 = VAR_16->pwdb_all;
    if (VAR_35 > 64)
     VAR_35 = 0;
    else if (VAR_35 < 20)
     VAR_35 = 100;
    else
     VAR_35 = ((64 - VAR_35) * 100) / 44;
   }

   VAR_9->signalquality = VAR_35;
   VAR_9->rx_mimo_signalquality[0] = VAR_35;
   VAR_9->rx_mimo_signalquality[1] = -1;
  }
 } else {

  for (VAR_25 = VAR_6; VAR_25 < VAR_5; VAR_25++) {

   if (VAR_15->dm.rfpath_rxenable[VAR_25])
    VAR_21++;

   VAR_20[VAR_25] = (VAR_16->gain_trsw[VAR_25] & 0x7f) - 110;


   VAR_27 = FUNC_5(VAR_20[VAR_25]);
   VAR_28 += VAR_27;


   VAR_9->rx_snr[VAR_25] = VAR_16->rxsnr[VAR_25] / 2;
   VAR_15->stats.rx_snr_db[VAR_25] = VAR_16->rxsnr[VAR_25] / 2;

   VAR_9->cfo_short[VAR_25] = FUNC_1(VAR_16->cfosho[VAR_25]);
   VAR_9->cfo_tail[VAR_25] = FUNC_1(VAR_16->cfotail[VAR_25]);

   VAR_9->rx_mimo_signalstrength[VAR_25] = (u8)VAR_27;
  }




  VAR_19 = ((VAR_11->pwdb_all >> 1) & 0x7f) - 110;

  VAR_24 = FUNC_5(VAR_19);
  VAR_9->rx_pwdb_all = VAR_24;
  VAR_9->rxpower = VAR_19;
  VAR_9->recvsignalpower = VAR_19;


  if ((VAR_9->is_ht && VAR_9->rate >= VAR_1 &&
       VAR_9->rate <= VAR_0) ||
      (VAR_9->is_vht &&
       VAR_9->rate >= VAR_2 &&
       VAR_9->rate <= VAR_3))
   VAR_26 = 2;
  else
   VAR_26 = 1;

  for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++) {
   VAR_22 = FUNC_3(VAR_16->rxevm[VAR_25]);
   VAR_23 = FUNC_0(VAR_16->rxevm[VAR_25]);

   if (VAR_12) {



    if (VAR_25 == 0)
     VAR_9->signalquality = VAR_22;
    VAR_9->rx_mimo_signalquality[VAR_25] = VAR_22;
    VAR_9->rx_mimo_evm_dbm[VAR_25] = VAR_23;
   }
  }
  if (VAR_12) {
   for (VAR_25 = VAR_6; VAR_25 <= VAR_7; VAR_25++)
    FUNC_4(VAR_8)->dm.cfo_tail[VAR_25] =
     (s8)VAR_16->cfotail[VAR_25];

   FUNC_4(VAR_8)->dm.packet_count++;
  }
 }




 if (VAR_29)
  VAR_9->signalstrength = (u8)(FUNC_6(VAR_8,
   VAR_24));
 else if (VAR_21 != 0)
  VAR_9->signalstrength = (u8)(FUNC_6(VAR_8,
   VAR_28 /= VAR_21));

 VAR_17->fat_table.antsel_rx_keep_0 = VAR_16->antidx_anta;
 VAR_17->fat_table.antsel_rx_keep_1 = VAR_16->antidx_antb;
}
