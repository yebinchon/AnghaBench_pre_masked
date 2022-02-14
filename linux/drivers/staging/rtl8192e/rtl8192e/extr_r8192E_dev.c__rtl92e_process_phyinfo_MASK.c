
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct rtllib_rx_stats {unsigned int Seq_Num; size_t SignalStrength; int* RxMIMOSignalStrength; size_t RxPWDBAll; scalar_t__ SignalQuality; int* RxMIMOSignalQuality; scalar_t__ bToSelfBA; scalar_t__ bPacketBeacon; scalar_t__ bPacketToSelf; scalar_t__ bIsCCK; int bPacketMatchBSSID; int rssi; int bIsAMPDU; } ;
struct rtllib_hdr_3addr {int seq_ctl; } ;
struct TYPE_4__ {size_t* slide_signal_strength; size_t slide_rssi_total; int* rx_rssi_percentage; size_t* Slide_Beacon_pwdb; size_t Slide_Beacon_Total; size_t* slide_evm; size_t slide_evm_total; size_t signal_quality; size_t last_signal_strength_inpercent; int* rx_evm_percentage; int num_process_phyinfo; int signal_strength; } ;
struct r8192_priv {int undecorated_smoothed_pwdb; TYPE_2__ stats; TYPE_1__* rtllib; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_6 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (struct r8192_priv*,size_t) ;
 int FUNC_6 (struct r8192_priv*,struct rtllib_rx_stats*) ;

__attribute__((used)) static void FUNC_7(struct r8192_priv *VAR_7, u8 *VAR_8,
        struct rtllib_rx_stats *VAR_9,
        struct rtllib_rx_stats *VAR_10)
{
 bool VAR_11 = 0;
 u8 VAR_12;
 u32 VAR_13, VAR_14;
 static u32 VAR_15, VAR_16;
 static u32 VAR_17, VAR_18;
 static u32 VAR_19, VAR_20;
 static u32 VAR_21;
 static u32 VAR_22;
 static u32 VAR_23;
 struct rtllib_hdr_3addr *VAR_24;
 u16 VAR_25;
 unsigned int VAR_26, VAR_27;

 VAR_24 = (struct rtllib_hdr_3addr *)VAR_8;
 VAR_25 = FUNC_3(VAR_24->seq_ctl);
 VAR_26 = FUNC_1(VAR_25);
 VAR_27 = FUNC_2(VAR_25);
 VAR_10->Seq_Num = VAR_27;
 if (!VAR_9->bIsAMPDU)
  VAR_11 = 1;

 if (VAR_16++ >= VAR_3) {
  VAR_16 = VAR_3;
  VAR_19 = VAR_7->stats.slide_signal_strength[VAR_15];
  VAR_7->stats.slide_rssi_total -= VAR_19;
 }
 VAR_7->stats.slide_rssi_total += VAR_9->SignalStrength;

 VAR_7->stats.slide_signal_strength[VAR_15++] =
      VAR_9->SignalStrength;
 if (VAR_15 >= VAR_3)
  VAR_15 = 0;

 VAR_14 = VAR_7->stats.slide_rssi_total/VAR_16;
 VAR_7->stats.signal_strength = FUNC_5(VAR_7,
             (u8)VAR_14);
 VAR_10->rssi = VAR_7->stats.signal_strength;
 if (!VAR_9->bPacketMatchBSSID) {
  if (!VAR_9->bToSelfBA)
   return;
 }

 if (!VAR_11)
  return;

 VAR_7->stats.num_process_phyinfo++;
 if (!VAR_9->bIsCCK && VAR_9->bPacketToSelf) {
  for (VAR_12 = VAR_4; VAR_12 < VAR_5; VAR_12++) {
   if (!FUNC_4(VAR_7->rtllib->dev, VAR_12))
    continue;
   FUNC_0(VAR_0,
     "Jacken -> pPreviousstats->RxMIMOSignalStrength[rfpath]  = %d\n",
     VAR_9->RxMIMOSignalStrength[VAR_12]);
   if (VAR_7->stats.rx_rssi_percentage[VAR_12] == 0) {
    VAR_7->stats.rx_rssi_percentage[VAR_12] =
      VAR_9->RxMIMOSignalStrength[VAR_12];
   }
   if (VAR_9->RxMIMOSignalStrength[VAR_12] >
       VAR_7->stats.rx_rssi_percentage[VAR_12]) {
    VAR_7->stats.rx_rssi_percentage[VAR_12] =
     ((VAR_7->stats.rx_rssi_percentage[VAR_12]
     * (VAR_6 - 1)) +
     (VAR_9->RxMIMOSignalStrength
     [VAR_12])) / (VAR_6);
    VAR_7->stats.rx_rssi_percentage[VAR_12] =
      VAR_7->stats.rx_rssi_percentage[VAR_12]
      + 1;
   } else {
    VAR_7->stats.rx_rssi_percentage[VAR_12] =
       ((VAR_7->stats.rx_rssi_percentage[VAR_12] *
       (VAR_6-1)) +
       (VAR_9->RxMIMOSignalStrength[VAR_12])) /
       (VAR_6);
   }
   FUNC_0(VAR_0,
     "Jacken -> priv->RxStats.RxRSSIPercentage[rfPath]  = %d\n",
     VAR_7->stats.rx_rssi_percentage[VAR_12]);
  }
 }


 if (VAR_9->bPacketBeacon) {
  if (VAR_22++ >=
      VAR_2) {
   VAR_22 =
      VAR_2;
   VAR_23 = VAR_7->stats.Slide_Beacon_pwdb
            [VAR_21];
   VAR_7->stats.Slide_Beacon_Total -= VAR_23;
  }
  VAR_7->stats.Slide_Beacon_Total += VAR_9->RxPWDBAll;
  VAR_7->stats.Slide_Beacon_pwdb[VAR_21] =
        VAR_9->RxPWDBAll;
  VAR_21++;
  if (VAR_21 >= VAR_2)
   VAR_21 = 0;
  VAR_9->RxPWDBAll = VAR_7->stats.Slide_Beacon_Total /
         VAR_22;
  if (VAR_9->RxPWDBAll >= 3)
   VAR_9->RxPWDBAll -= 3;
 }

 FUNC_0(VAR_1, "Smooth %s PWDB = %d\n",
    VAR_9->bIsCCK ? "CCK" : "OFDM",
    VAR_9->RxPWDBAll);

 if (VAR_9->bPacketToSelf || VAR_9->bPacketBeacon ||
     VAR_9->bToSelfBA) {
  if (VAR_7->undecorated_smoothed_pwdb < 0)
   VAR_7->undecorated_smoothed_pwdb = VAR_9->RxPWDBAll;
  if (VAR_9->RxPWDBAll > (u32)VAR_7->undecorated_smoothed_pwdb) {
   VAR_7->undecorated_smoothed_pwdb =
     (((VAR_7->undecorated_smoothed_pwdb) *
     (VAR_6-1)) +
     (VAR_9->RxPWDBAll)) / (VAR_6);
   VAR_7->undecorated_smoothed_pwdb =
      VAR_7->undecorated_smoothed_pwdb + 1;
  } else {
   VAR_7->undecorated_smoothed_pwdb =
     (((VAR_7->undecorated_smoothed_pwdb) *
     (VAR_6-1)) +
     (VAR_9->RxPWDBAll)) / (VAR_6);
  }
  FUNC_6(VAR_7, VAR_9);
 }

 if (VAR_9->SignalQuality != 0) {
  if (VAR_9->bPacketToSelf || VAR_9->bPacketBeacon ||
      VAR_9->bToSelfBA) {
   if (VAR_18++ >= VAR_3) {
    VAR_18 = VAR_3;
    VAR_20 =
      VAR_7->stats.slide_evm[VAR_17];
    VAR_7->stats.slide_evm_total -= VAR_20;
   }

   VAR_7->stats.slide_evm_total += VAR_9->SignalQuality;

   VAR_7->stats.slide_evm[VAR_17++] =
       VAR_9->SignalQuality;
   if (VAR_17 >= VAR_3)
    VAR_17 = 0;

   VAR_14 = VAR_7->stats.slide_evm_total /
      VAR_18;
   VAR_7->stats.signal_quality = VAR_14;
   VAR_7->stats.last_signal_strength_inpercent = VAR_14;
  }

  if (VAR_9->bPacketToSelf ||
      VAR_9->bPacketBeacon ||
      VAR_9->bToSelfBA) {
   for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
    if (VAR_9->RxMIMOSignalQuality[VAR_13] != -1) {
     if (VAR_7->stats.rx_evm_percentage[VAR_13] == 0)
      VAR_7->stats.rx_evm_percentage[VAR_13] =
         VAR_9->RxMIMOSignalQuality[VAR_13];
     VAR_7->stats.rx_evm_percentage[VAR_13] =
       ((VAR_7->stats.rx_evm_percentage[VAR_13] *
       (VAR_6 - 1)) +
       (VAR_9->RxMIMOSignalQuality[VAR_13])) /
       (VAR_6);
    }
   }
  }
 }
}
