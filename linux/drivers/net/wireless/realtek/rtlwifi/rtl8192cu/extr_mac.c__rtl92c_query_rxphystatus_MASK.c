
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rx_fwinfo_92c {int* cfosho; int* gain_trsw; int* rxsnr; int pwdb_all; int * rxevm; } ;
struct rx_desc_92c {int rxmcs; } ;
struct rtl_stats {int packet_matchbssid; int packet_toself; int packet_beacon; int is_cck; int* RX_SIGQ; int rx_pwdb_all; int signalquality; int* rx_mimo_signalstrength; int signalstrength; void* recvsignalpower; void* rxpower; } ;
struct TYPE_4__ {long* rx_snr_db; } ;
struct TYPE_3__ {int* rfpath_rxenable; } ;
struct rtl_phy {int cck_high_power; } ;
struct rtl_priv {TYPE_2__ stats; TYPE_1__ dm; struct rtl_phy phy; } ;
struct phy_sts_cck_8192s_t {int cck_agc_rpt; int sq_rpt; } ;
struct ieee80211_hw {int dummy; } ;
typedef void* s8 ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (struct ieee80211_hw*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_4,
          struct rtl_stats *VAR_5,
          struct rx_desc_92c *VAR_6,
          struct rx_fwinfo_92c *VAR_7,
          bool VAR_8,
          bool VAR_9,
          bool VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_5(VAR_4);
 struct rtl_phy *VAR_12 = &(VAR_11->phy);
 struct phy_sts_cck_8192s_t *VAR_13;
 s8 VAR_14 = 0, VAR_15[4];
 u8 VAR_16 = 0, VAR_17, VAR_18;
 u8 VAR_19, VAR_20;
 u32 VAR_21, VAR_22 = 0;
 bool VAR_23 = 0;
 bool VAR_24;
 __le32 *VAR_25 = (__le32 *)VAR_6;

 VAR_24 = FUNC_0(VAR_6->rxmcs);
 VAR_5->packet_matchbssid = VAR_8;
 VAR_5->packet_toself = VAR_9;
 VAR_5->packet_beacon = VAR_10;
 VAR_5->is_cck = VAR_24;
 VAR_5->RX_SIGQ[0] = -1;
 VAR_5->RX_SIGQ[1] = -1;
 if (VAR_24) {
  u8 VAR_26, VAR_27;

  VAR_13 = (struct phy_sts_cck_8192s_t *)VAR_7;
  if (!VAR_23)
   VAR_27 = VAR_12->cck_high_power;
  else
   VAR_27 = 0;
  if (!VAR_27) {
   u8 VAR_28 = VAR_13->cck_agc_rpt;

   VAR_26 = VAR_13->cck_agc_rpt & 0xc0;
   VAR_26 = VAR_26 >> 6;
   switch (VAR_26) {
   case 0x3:
    VAR_14 = -46 - (VAR_28 & 0x3e);
    break;
   case 0x2:
    VAR_14 = -26 - (VAR_28 & 0x3e);
    break;
   case 0x1:
    VAR_14 = -12 - (VAR_28 & 0x3e);
    break;
   case 0x0:
    VAR_14 = 16 - (VAR_28 & 0x3e);
    break;
   }
  } else {
   u8 VAR_29 = VAR_13->cck_agc_rpt;

   VAR_26 = VAR_7->cfosho[0] & 0x60;
   VAR_26 = VAR_26 >> 5;
   switch (VAR_26) {
   case 0x3:
    VAR_14 = -46 - ((VAR_29 & 0x1f) << 1);
    break;
   case 0x2:
    VAR_14 = -26 - ((VAR_29 & 0x1f) << 1);
    break;
   case 0x1:
    VAR_14 = -12 - ((VAR_29 & 0x1f) << 1);
    break;
   case 0x0:
    VAR_14 = 16 - ((VAR_29 & 0x1f) << 1);
    break;
   }
  }
  VAR_18 = FUNC_1(VAR_14);
  VAR_5->rx_pwdb_all = VAR_18;
  VAR_5->recvsignalpower = VAR_14;
  if (VAR_8) {
   u8 VAR_30;

   if (VAR_5->rx_pwdb_all > 40)
    VAR_30 = 100;
   else {
    VAR_30 = VAR_13->sq_rpt;
    if (VAR_30 > 64)
     VAR_30 = 0;
    else if (VAR_30 < 20)
     VAR_30 = 100;
    else
     VAR_30 = ((64 - VAR_30) * 100) / 44;
   }
   VAR_5->signalquality = VAR_30;
   VAR_5->RX_SIGQ[0] = VAR_30;
   VAR_5->RX_SIGQ[1] = -1;
  }
 } else {
  VAR_11->dm.rfpath_rxenable[0] =
      VAR_11->dm.rfpath_rxenable[1] = 1;
  for (VAR_19 = VAR_2; VAR_19 < VAR_3; VAR_19++) {
   if (VAR_11->dm.rfpath_rxenable[VAR_19])
    VAR_16++;
   VAR_15[VAR_19] =
       ((VAR_7->gain_trsw[VAR_19] & 0x3f) * 2) - 110;
   VAR_21 = FUNC_1(VAR_15[VAR_19]);
   VAR_22 += VAR_21;
   VAR_11->stats.rx_snr_db[VAR_19] =
       (long)(VAR_7->rxsnr[VAR_19] / 2);

   if (VAR_8)
    VAR_5->rx_mimo_signalstrength[VAR_19] = (u8) VAR_21;
  }
  VAR_14 = ((VAR_7->pwdb_all >> 1) & 0x7f) - 110;
  VAR_18 = FUNC_1(VAR_14);
  VAR_5->rx_pwdb_all = VAR_18;
  VAR_5->rxpower = VAR_14;
  VAR_5->recvsignalpower = VAR_14;
  if (FUNC_3(VAR_25) &&
      FUNC_3(VAR_25) >= VAR_1 &&
      FUNC_3(VAR_25) <= VAR_0)
   VAR_20 = 2;
  else
   VAR_20 = 1;
  for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
   VAR_17 = FUNC_4(VAR_7->rxevm[VAR_19]);
   if (VAR_8) {
    if (VAR_19 == 0)
     VAR_5->signalquality =
         (u8) (VAR_17 & 0xff);
    VAR_5->RX_SIGQ[VAR_19] =
        (u8) (VAR_17 & 0xff);
   }
  }
 }
 if (VAR_24)
  VAR_5->signalstrength =
      (u8) (FUNC_2(VAR_4, VAR_18));
 else if (VAR_16 != 0)
  VAR_5->signalstrength =
      (u8) (FUNC_2
     (VAR_4, VAR_22 /= VAR_16));
}
