
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rx_fwinfo {scalar_t__ RxRate; scalar_t__ BW; scalar_t__ RxHT; } ;
struct rx_desc {int dummy; } ;
struct rtllib_rx_stats {int bPacketMatchBSSID; int bPacketToSelf; int bIsCCK; int bPacketBeacon; int bToSelfBA; int* RxMIMOSignalQuality; int RxPWDBAll; int RecvSignalPower; int SignalQuality; int* RxMIMOSignalStrength; int RxPower; int SignalStrength; } ;
struct TYPE_4__ {long* rxSNRdB; int * received_bwtype; int numqry_phystatusHT; int numqry_phystatusCCK; int numqry_phystatus; } ;
struct r8192_priv {TYPE_2__ stats; scalar_t__* brfpath_rxenable; TYPE_1__* rtllib; } ;
struct phy_sts_ofdm_819xpci {int* trsw_gain_X; int* rxsnr_X; int pwdb_all; int* rxevm_X; int rxsc_sgien_exflg; } ;
struct phy_sts_cck_819xpci {int cck_agc_rpt; int sq_rpt; } ;
struct phy_ofdm_rx_status_rxsc_sgien_exintfflag {int rxsc; } ;
typedef int s8 ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct r8192_priv*,long) ;
 int FUNC_1 (struct rtllib_rx_stats*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct rx_fwinfo*) ;

__attribute__((used)) static void FUNC_6(
 struct r8192_priv *VAR_5,
 struct rtllib_rx_stats *VAR_6,
 struct rx_desc *VAR_7,
 struct rx_fwinfo *VAR_8,
 struct rtllib_rx_stats *VAR_9,
 bool VAR_10,
 bool VAR_11,
 bool VAR_12,
 bool VAR_13
 )
{
 struct phy_sts_ofdm_819xpci *VAR_14;
 struct phy_sts_cck_819xpci *VAR_15;
 struct phy_ofdm_rx_status_rxsc_sgien_exintfflag *VAR_16;
 u8 *VAR_17;
 u8 VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 s8 VAR_23[4], VAR_24 = 0;
 s8 VAR_25, VAR_26;
 u8 VAR_27, VAR_28;
 u32 VAR_29, VAR_30 = 0;
 u8 VAR_31 = 0;
 u8 VAR_32 = 0;
 static u8 VAR_33;
 static u32 VAR_34;

 VAR_5->stats.numqry_phystatus++;

 VAR_31 = FUNC_5(VAR_8);
 FUNC_1(VAR_9, 0, sizeof(struct rtllib_rx_stats));
 VAR_6->bPacketMatchBSSID = VAR_9->bPacketMatchBSSID =
        VAR_10;
 VAR_6->bPacketToSelf = VAR_9->bPacketToSelf = VAR_11;
 VAR_6->bIsCCK = VAR_9->bIsCCK = VAR_31;
 VAR_6->bPacketBeacon = VAR_9->bPacketBeacon = VAR_12;
 VAR_6->bToSelfBA = VAR_9->bToSelfBA = VAR_13;
 if (VAR_33 == 0) {
  VAR_34 = FUNC_3(VAR_5->rtllib->dev,
      VAR_4,
      0x200);
  VAR_33 = 1;
 }


 VAR_17 = (u8 *)VAR_8;

 VAR_17 += sizeof(struct rx_fwinfo);

 VAR_15 = (struct phy_sts_cck_819xpci *)VAR_17;
 VAR_14 = (struct phy_sts_ofdm_819xpci *)VAR_17;

 VAR_6->RxMIMOSignalQuality[0] = -1;
 VAR_6->RxMIMOSignalQuality[1] = -1;
 VAR_9->RxMIMOSignalQuality[0] = -1;
 VAR_9->RxMIMOSignalQuality[1] = -1;

 if (VAR_31) {
  u8 VAR_35;

  VAR_5->stats.numqry_phystatusCCK++;
  if (!VAR_34) {
   VAR_35 = VAR_15->cck_agc_rpt & 0xc0;
   VAR_35 >>= 6;
   switch (VAR_35) {
   case 0x3:
    VAR_24 = -35 - (VAR_15->cck_agc_rpt &
          0x3e);
    break;
   case 0x2:
    VAR_24 = -23 - (VAR_15->cck_agc_rpt &
          0x3e);
    break;
   case 0x1:
    VAR_24 = -11 - (VAR_15->cck_agc_rpt &
          0x3e);
    break;
   case 0x0:
    VAR_24 = 8 - (VAR_15->cck_agc_rpt & 0x3e);
    break;
   }
  } else {
   VAR_35 = VAR_15->cck_agc_rpt & 0x60;
   VAR_35 >>= 5;
   switch (VAR_35) {
   case 0x3:
    VAR_24 = -35 -
     ((VAR_15->cck_agc_rpt &
     0x1f) << 1);
    break;
   case 0x2:
    VAR_24 = -23 -
     ((VAR_15->cck_agc_rpt &
      0x1f) << 1);
    break;
   case 0x1:
    VAR_24 = -11 -
      ((VAR_15->cck_agc_rpt &
      0x1f) << 1);
    break;
   case 0x0:
    VAR_24 = -8 -
      ((VAR_15->cck_agc_rpt &
      0x1f) << 1);
    break;
   }
  }

  VAR_28 = FUNC_4(VAR_24);
  VAR_6->RxPWDBAll = VAR_9->RxPWDBAll = VAR_28;
  VAR_6->RecvSignalPower = VAR_24;

  if (VAR_10) {
   u8 VAR_36;

   if (VAR_6->RxPWDBAll > 40) {
    VAR_36 = 100;
   } else {
    VAR_36 = VAR_15->sq_rpt;

    if (VAR_15->sq_rpt > 64)
     VAR_36 = 0;
    else if (VAR_15->sq_rpt < 20)
     VAR_36 = 100;
    else
     VAR_36 = ((64-VAR_36) * 100) / 44;
   }
   VAR_6->SignalQuality = VAR_36;
   VAR_9->SignalQuality = VAR_36;
   VAR_6->RxMIMOSignalQuality[0] = VAR_36;
   VAR_9->RxMIMOSignalQuality[0] = VAR_36;
   VAR_6->RxMIMOSignalQuality[1] = -1;
   VAR_9->RxMIMOSignalQuality[1] = -1;
  }
 } else {
  VAR_5->stats.numqry_phystatusHT++;
  for (VAR_18 = VAR_2; VAR_18 < VAR_3; VAR_18++) {
   if (VAR_5->brfpath_rxenable[VAR_18])
    VAR_32++;

   VAR_23[VAR_18] = ((VAR_14->trsw_gain_X[VAR_18] & 0x3F) *
         2) - 110;

   VAR_20 = VAR_14->rxsnr_X[VAR_18];
   VAR_25 = (s8)(VAR_20);
   VAR_25 /= 2;
   VAR_5->stats.rxSNRdB[VAR_18] = (long)VAR_25;

   VAR_29 = FUNC_4(VAR_23[VAR_18]);
   if (VAR_5->brfpath_rxenable[VAR_18])
    VAR_30 += VAR_29;

   if (VAR_10) {
    VAR_6->RxMIMOSignalStrength[VAR_18] = (u8) VAR_29;
    VAR_9->RxMIMOSignalStrength[VAR_18] =
        (u8) VAR_29;
   }
  }


  VAR_24 = (((VAR_14->pwdb_all) >> 1) & 0x7f) - 106;
  VAR_28 = FUNC_4(VAR_24);

  VAR_6->RxPWDBAll = VAR_9->RxPWDBAll = VAR_28;
  VAR_6->RxPower = VAR_9->RxPower = VAR_24;
  VAR_6->RecvSignalPower = VAR_24;
  if (VAR_8->RxHT && VAR_8->RxRate >= VAR_1 &&
      VAR_8->RxRate <= VAR_0)
   VAR_19 = 2;
  else
   VAR_19 = 1;

  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
   VAR_21 = VAR_14->rxevm_X[VAR_18];
   VAR_26 = (s8)(VAR_21);

   VAR_26 /= 2;

   VAR_27 = FUNC_2(VAR_26);
   if (VAR_10) {
    if (VAR_18 == 0) {
     VAR_6->SignalQuality = VAR_27 & 0xff;
     VAR_9->SignalQuality = VAR_27 & 0xff;
    }
    VAR_6->RxMIMOSignalQuality[VAR_18] = VAR_27 & 0xff;
    VAR_9->RxMIMOSignalQuality[VAR_18] = VAR_27 & 0xff;
   }
  }


  VAR_22 = VAR_14->rxsc_sgien_exflg;
  VAR_16 = (struct phy_ofdm_rx_status_rxsc_sgien_exintfflag *)
   &VAR_22;
  if (VAR_8->BW)
   VAR_5->stats.received_bwtype[1+VAR_16->rxsc]++;
  else
   VAR_5->stats.received_bwtype[0]++;
 }

 if (VAR_31) {
  VAR_6->SignalStrength = VAR_9->SignalStrength =
      (u8)(FUNC_0(VAR_5,
      (long)VAR_28));

 } else {
  if (VAR_32 != 0)
   VAR_6->SignalStrength = VAR_9->SignalStrength =
      (u8)(FUNC_0(VAR_5,
      (long)(VAR_30 /= VAR_32)));
 }
}
