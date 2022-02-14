
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rx_fwinfo_8723be {int dummy; } ;
struct rtl_stats {int is_cck; int packet_matchbssid; int packet_toself; int packet_beacon; int* rx_mimo_signalquality; int rx_pwdb_all; int bt_rx_rssi_percentage; int signalquality; int* rx_mimo_signalstrength; scalar_t__ rate; int signalstrength; void* recvsignalpower; void* rxpower; void** rx_pwr; } ;
struct TYPE_4__ {int* cfo_tail; int packet_count; scalar_t__* rfpath_rxenable; } ;
struct rtl_priv {TYPE_2__ dm; } ;
struct phy_status_rpt {int cck_agc_rpt_ofdm_cfosho_a; int cck_sig_qual_ofdm_pwdb_all; scalar_t__* path_cfotail; int * stream_rxevm; TYPE_1__* path_agc; } ;
struct ieee80211_hw {int dummy; } ;
typedef void* s8 ;
typedef int __le32 ;
struct TYPE_3__ {int gain; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_6,
      struct rtl_stats *VAR_7,
      __le32 *VAR_8,
      struct rx_fwinfo_8723be *VAR_9,
      bool VAR_10,
      bool VAR_11,
      bool VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_3(VAR_6);
 struct phy_status_rpt *VAR_14 = (struct phy_status_rpt *)VAR_9;
 s8 VAR_15 = 0, VAR_16[4];
 u8 VAR_17 = 0, VAR_18, VAR_19, VAR_20 = 0;
 u8 VAR_21, VAR_22;
 u32 VAR_23, VAR_24 = 0;
 bool VAR_25 = VAR_7->is_cck;
 u8 VAR_26, VAR_27;


 VAR_7->packet_matchbssid = VAR_10;
 VAR_7->packet_toself = VAR_11;
 VAR_7->packet_beacon = VAR_12;
 VAR_7->rx_mimo_signalquality[0] = -1;
 VAR_7->rx_mimo_signalquality[1] = -1;

 if (VAR_25) {
  u8 VAR_28;
  u8 VAR_29;

  VAR_29 = VAR_14->cck_agc_rpt_ofdm_cfosho_a;





  VAR_28 = (u8)FUNC_2(VAR_6, VAR_5,
       FUNC_0(9));

  VAR_26 = ((VAR_29 & 0xE0) >> 5);
  VAR_27 = (VAR_29 & 0x1f);

  switch (VAR_26) {


  case 6:
   VAR_15 = -34 - (2 * VAR_27);
   break;
  case 4:
   VAR_15 = -14 - (2 * VAR_27);
   break;
  case 1:
   VAR_15 = 6 - (2 * VAR_27);
   break;
  case 0:
   VAR_15 = 16 - (2 * VAR_27);
   break;
  default:
   break;
  }

  VAR_19 = FUNC_4(VAR_15);
  if (VAR_19 > 100)
   VAR_19 = 100;

  VAR_7->rx_pwdb_all = VAR_19;
  VAR_7->bt_rx_rssi_percentage = VAR_19;
  VAR_7->recvsignalpower = VAR_15;


  if (VAR_10) {
   u8 VAR_30, VAR_31;
   if (VAR_7->rx_pwdb_all > 40) {
    VAR_30 = 100;
   } else {
    VAR_31 = VAR_14->cck_sig_qual_ofdm_pwdb_all;
    if (VAR_31 > 64)
     VAR_30 = 0;
    else if (VAR_31 < 20)
     VAR_30 = 100;
    else
     VAR_30 = ((64 - VAR_31) * 100) / 44;
   }
   VAR_7->signalquality = VAR_30;
   VAR_7->rx_mimo_signalquality[0] = VAR_30;
   VAR_7->rx_mimo_signalquality[1] = -1;
  }
 } else {

  for (VAR_21 = VAR_3; VAR_21 < VAR_2; VAR_21++) {

   if (VAR_13->dm.rfpath_rxenable[VAR_21])
    VAR_17++;

   VAR_16[VAR_21] = ((VAR_14->path_agc[VAR_21].gain & 0x3f) * 2)
        - 110;

   VAR_7->rx_pwr[VAR_21] = VAR_16[VAR_21];

   VAR_23 = FUNC_4(VAR_16[VAR_21]);
   VAR_24 += VAR_23;

   VAR_7->rx_mimo_signalstrength[VAR_21] = (u8)VAR_23;
  }




  VAR_15 = ((VAR_14->cck_sig_qual_ofdm_pwdb_all >> 1) &
        0x7f) - 110;

  VAR_19 = FUNC_4(VAR_15);
  VAR_20 = VAR_19;
  VAR_7->rx_pwdb_all = VAR_19;
  VAR_7->bt_rx_rssi_percentage = VAR_20;
  VAR_7->rxpower = VAR_15;
  VAR_7->recvsignalpower = VAR_15;


  if (VAR_7->rate >= VAR_1 &&
      VAR_7->rate <= VAR_0)
   VAR_22 = 2;
  else
   VAR_22 = 1;

  for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
   VAR_18 = FUNC_1(
      VAR_14->stream_rxevm[VAR_21]);

   if (VAR_10) {



    if (VAR_21 == 0)
     VAR_7->signalquality =
       (u8)(VAR_18 & 0xff);
    VAR_7->rx_mimo_signalquality[VAR_21] =
       (u8)(VAR_18 & 0xff);
   }
  }

  if (VAR_10) {
   for (VAR_21 = VAR_3; VAR_21 <= VAR_4; VAR_21++)
    FUNC_3(VAR_6)->dm.cfo_tail[VAR_21] =
     (int)VAR_14->path_cfotail[VAR_21];

   if (FUNC_3(VAR_6)->dm.packet_count == 0xffffffff)
    FUNC_3(VAR_6)->dm.packet_count = 0;
   else
    FUNC_3(VAR_6)->dm.packet_count++;
  }
 }




 if (VAR_25)
  VAR_7->signalstrength = (u8)(FUNC_5(VAR_6,
        VAR_19));
 else if (VAR_17 != 0)
  VAR_7->signalstrength = (u8)(FUNC_5(VAR_6,
      VAR_24 /= VAR_17));
}
