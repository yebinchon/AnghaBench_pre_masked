
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
struct rx_drvinfo_819x_usb {scalar_t__ RxRate; scalar_t__ BW; scalar_t__ RxHT; } ;
struct TYPE_6__ {long* rxSNRdB; int * received_bwtype; int numqry_phystatusHT; int numqry_phystatusCCK; int numqry_phystatus; } ;
struct r8192_priv {int NumTotalRFPath; TYPE_2__ stats; TYPE_1__* ieee80211; scalar_t__* brfpath_rxenable; int bCckHighPower; } ;
struct phy_ofdm_rx_status_rxsc_sgien_exintfflag {int rxsc; } ;
struct ieee80211_rx_stats {int bPacketMatchBSSID; int bPacketToSelf; int bIsCCK; int bPacketBeacon; int bToSelfBA; int* RxMIMOSignalQuality; int RxPWDBAll; int RecvSignalPower; int SignalQuality; int* RxMIMOSignalStrength; int RxPower; int SignalStrength; } ;
typedef int s8 ;
struct TYPE_7__ {int* trsw_gain_X; int* rxsnr_X; int pwdb_all; int* rxevm_X; int rxsc_sgien_exflg; } ;
typedef TYPE_3__ phy_sts_ofdm_819xusb_t ;
struct TYPE_8__ {int cck_agc_rpt; int sq_rpt; } ;
typedef TYPE_4__ phy_sts_cck_819xusb_t ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_rx_stats*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (long) ;
 int FUNC_5 (struct rx_drvinfo_819x_usb*) ;

__attribute__((used)) static void FUNC_6(struct r8192_priv *VAR_3,
          struct ieee80211_rx_stats *VAR_4,
          struct rx_drvinfo_819x_usb *VAR_5,
          struct ieee80211_rx_stats *VAR_6,
          bool VAR_7,
          bool VAR_8,
          bool VAR_9,
          bool VAR_10)
{
 phy_sts_ofdm_819xusb_t *VAR_11;
 phy_sts_cck_819xusb_t *VAR_12;
 struct phy_ofdm_rx_status_rxsc_sgien_exintfflag *VAR_13;
 u8 *VAR_14;
 u8 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 s8 VAR_20[4], VAR_21 = 0;
 s8 VAR_22, VAR_23;
 u8 VAR_24, VAR_25;
 u32 VAR_26, VAR_27 = 0;
 u8 VAR_28 = 0;
 u8 VAR_29 = 0;
 u8 VAR_30;


 VAR_3->stats.numqry_phystatus++;

 VAR_28 = FUNC_5(VAR_5);


 FUNC_0(VAR_6, 0, sizeof(struct ieee80211_rx_stats));
 VAR_4->bPacketMatchBSSID =
  VAR_6->bPacketMatchBSSID = VAR_7;
 VAR_4->bPacketToSelf = VAR_6->bPacketToSelf = VAR_8;
 VAR_4->bIsCCK = VAR_6->bIsCCK = VAR_28;
 VAR_4->bPacketBeacon = VAR_6->bPacketBeacon = VAR_9;
 VAR_4->bToSelfBA = VAR_6->bToSelfBA = VAR_10;

 VAR_14 = (u8 *)VAR_5;


 VAR_14 += sizeof(struct rx_drvinfo_819x_usb);


 VAR_12 = (phy_sts_cck_819xusb_t *)VAR_14;
 VAR_11 = (phy_sts_ofdm_819xusb_t *)VAR_14;

 VAR_4->RxMIMOSignalQuality[0] = -1;
 VAR_4->RxMIMOSignalQuality[1] = -1;
 VAR_6->RxMIMOSignalQuality[0] = -1;
 VAR_6->RxMIMOSignalQuality[1] = -1;

 if (VAR_28) {





  u8 VAR_31;

  VAR_3->stats.numqry_phystatusCCK++;

  if (!VAR_3->bCckHighPower) {
   VAR_31 = VAR_12->cck_agc_rpt & 0xc0;
   VAR_31 >>= 6;
   switch (VAR_31) {
   case 0x3:
    VAR_21 = -35 - (VAR_12->cck_agc_rpt & 0x3e);
    break;
   case 0x2:
    VAR_21 = -23 - (VAR_12->cck_agc_rpt & 0x3e);
    break;
   case 0x1:
    VAR_21 = -11 - (VAR_12->cck_agc_rpt & 0x3e);
    break;
   case 0x0:
    VAR_21 = 6 - (VAR_12->cck_agc_rpt & 0x3e);
    break;
   }
  } else {
   VAR_31 = VAR_12->cck_agc_rpt & 0x60;
   VAR_31 >>= 5;
   switch (VAR_31) {
   case 0x3:
    VAR_21 = -35 - ((VAR_12->cck_agc_rpt & 0x1f) << 1);
    break;
   case 0x2:
    VAR_21 = -23 - ((VAR_12->cck_agc_rpt & 0x1f) << 1);
    break;
   case 0x1:
    VAR_21 = -11 - ((VAR_12->cck_agc_rpt & 0x1f) << 1);
    break;
   case 0x0:
    VAR_21 = 6 - ((VAR_12->cck_agc_rpt & 0x1f) << 1);
    break;
   }
  }

  VAR_25 = FUNC_3(VAR_21);
  VAR_4->RxPWDBAll = VAR_6->RxPWDBAll = VAR_25;
  VAR_4->RecvSignalPower = VAR_25;



  if (VAR_4->RxPWDBAll > 40) {
   VAR_30 = 100;
  } else {
   VAR_30 = VAR_12->sq_rpt;

   if (VAR_12->sq_rpt > 64)
    VAR_30 = 0;
   else if (VAR_12->sq_rpt < 20)
    VAR_30 = 100;
   else
    VAR_30 = ((64 - VAR_30) * 100) / 44;
  }
  VAR_4->SignalQuality = VAR_6->SignalQuality = VAR_30;
  VAR_4->RxMIMOSignalQuality[0] =
   VAR_6->RxMIMOSignalQuality[0] = VAR_30;
  VAR_4->RxMIMOSignalQuality[1] =
   VAR_6->RxMIMOSignalQuality[1] = -1;

 } else {
  VAR_3->stats.numqry_phystatusHT++;


  for (VAR_15 = VAR_2; VAR_15 < VAR_3->NumTotalRFPath; VAR_15++) {

   if (VAR_3->brfpath_rxenable[VAR_15])
    VAR_29++;
   else
    continue;

   if (!FUNC_1(
     VAR_3->ieee80211->dev, VAR_15))
    continue;

   VAR_20[VAR_15] =
    ((VAR_11->trsw_gain_X[VAR_15] & 0x3F) * 2) - 106;


   VAR_17 = VAR_11->rxsnr_X[VAR_15];
   VAR_22 = (s8)(VAR_17);
   VAR_22 /= 2;
   VAR_3->stats.rxSNRdB[VAR_15] = (long)VAR_22;


   VAR_26 = FUNC_3(VAR_20[VAR_15]);
   VAR_27 += VAR_26;


   VAR_4->RxMIMOSignalStrength[VAR_15] = (u8)VAR_26;
   VAR_6->RxMIMOSignalStrength[VAR_15] = (u8)VAR_26;
  }





  VAR_21 = (((VAR_11->pwdb_all) >> 1) & 0x7f) - 106;
  VAR_25 = FUNC_3(VAR_21);

  VAR_4->RxPWDBAll = VAR_6->RxPWDBAll = VAR_25;
  VAR_4->RxPower = VAR_6->RxPower = VAR_21;


  if (VAR_5->RxHT && VAR_5->RxRate >= VAR_1 &&
      VAR_5->RxRate <= VAR_0)

   VAR_16 = 2;
  else

   VAR_16 = 1;

  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
   VAR_18 = VAR_11->rxevm_X[VAR_15];
   VAR_23 = (s8)(VAR_18);
   VAR_23 /= 2;

   VAR_24 = FUNC_2(VAR_23);
   if (VAR_15 == 0)



    VAR_4->SignalQuality =
     VAR_6->SignalQuality =
     VAR_24 & 0xff;
   VAR_4->RxMIMOSignalQuality[VAR_15] =
    VAR_6->RxMIMOSignalQuality[VAR_15] =
    VAR_24 & 0xff;
  }



  VAR_19 = VAR_11->rxsc_sgien_exflg;
  VAR_13 = (struct phy_ofdm_rx_status_rxsc_sgien_exintfflag *)
   &VAR_19;
  if (VAR_5->BW)
   VAR_3->stats.received_bwtype[1 + VAR_13->rxsc]++;
  else
   VAR_3->stats.received_bwtype[0]++;
 }





 if (VAR_28) {
  VAR_4->SignalStrength =
   VAR_6->SignalStrength =
   (u8)(FUNC_4((long)VAR_25));
 } else {

  if (VAR_29 != 0) {
   VAR_4->SignalStrength =
    VAR_6->SignalStrength =
    (u8)(FUNC_4((long)(VAR_27 /= VAR_29)));
  }
 }
}
