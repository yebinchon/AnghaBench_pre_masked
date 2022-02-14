
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct rtl_80211_hdr_3addr {int seq_ctl; } ;
struct TYPE_4__ {size_t* slide_signal_strength; size_t slide_rssi_total; int* rx_rssi_percentage; size_t* Slide_Beacon_pwdb; size_t Slide_Beacon_Total; size_t* slide_evm; size_t slide_evm_total; size_t signal_quality; size_t last_signal_strength_inpercent; int* rx_evm_percentage; int num_process_phyinfo; int signal_strength; } ;
struct r8192_priv {size_t NumTotalRFPath; int undecorated_smoothed_pwdb; TYPE_2__ stats; TYPE_1__* ieee80211; } ;
struct ieee80211_rx_stats {unsigned int Seq_Num; size_t SignalStrength; int* RxMIMOSignalStrength; size_t RxPWDBAll; size_t SignalQuality; int* RxMIMOSignalQuality; scalar_t__ bToSelfBA; scalar_t__ bPacketBeacon; scalar_t__ bPacketToSelf; scalar_t__ bIsCCK; int bPacketMatchBSSID; int rssi; int bIsAMPDU; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (size_t) ;

__attribute__((used)) static void FUNC_5(struct r8192_priv *VAR_6, u8 *VAR_7,
        struct ieee80211_rx_stats *VAR_8,
        struct ieee80211_rx_stats *VAR_9)
{
 bool VAR_10 = 0;
 u8 VAR_11;
 u32 VAR_12, VAR_13;
 static u32 VAR_14, VAR_15;
 static u32 VAR_16, VAR_17;
 static u32 VAR_18, VAR_19;

 static u32 VAR_20;
 static u32 VAR_21;
 static u32 VAR_22;

 struct rtl_80211_hdr_3addr *VAR_23;
 u16 VAR_24;
 unsigned int VAR_25;

 VAR_23 = (struct rtl_80211_hdr_3addr *)VAR_7;
 VAR_24 = FUNC_2(VAR_23->seq_ctl);
 VAR_25 = FUNC_1(VAR_24);

 VAR_9->Seq_Num = VAR_25;


 if (!VAR_8->bIsAMPDU) {

  VAR_10 = 1;
 }

 if (VAR_15++ >= VAR_3) {
  VAR_15 = VAR_3;
  VAR_18 = VAR_6->stats.slide_signal_strength[VAR_14];
  VAR_6->stats.slide_rssi_total -= VAR_18;
 }
 VAR_6->stats.slide_rssi_total += VAR_8->SignalStrength;

 VAR_6->stats.slide_signal_strength[VAR_14++] =
  VAR_8->SignalStrength;
 if (VAR_14 >= VAR_3)
  VAR_14 = 0;


 VAR_13 = VAR_6->stats.slide_rssi_total / VAR_15;
 VAR_6->stats.signal_strength = FUNC_4((u8)VAR_13);
 VAR_9->rssi = VAR_6->stats.signal_strength;


 if (!VAR_8->bPacketMatchBSSID) {
  if (!VAR_8->bToSelfBA)
   return;
 }

 if (!VAR_10)
  return;







 VAR_6->stats.num_process_phyinfo++;







 if (!VAR_8->bIsCCK &&
     (VAR_8->bPacketToSelf || VAR_8->bToSelfBA)) {
  for (VAR_11 = VAR_4; VAR_11 < VAR_6->NumTotalRFPath; VAR_11++) {
   if (!FUNC_3(
     VAR_6->ieee80211->dev, VAR_11))
    continue;

   if (VAR_6->stats.rx_rssi_percentage[VAR_11] == 0)
    VAR_6->stats.rx_rssi_percentage[VAR_11] =
     VAR_8->RxMIMOSignalStrength[VAR_11];
   if (VAR_8->RxMIMOSignalStrength[VAR_11] > VAR_6->stats.rx_rssi_percentage[VAR_11]) {
    VAR_6->stats.rx_rssi_percentage[VAR_11] =
     ((VAR_6->stats.rx_rssi_percentage[VAR_11] * (VAR_5 - 1)) +
      (VAR_8->RxMIMOSignalStrength[VAR_11])) / (VAR_5);
    VAR_6->stats.rx_rssi_percentage[VAR_11] = VAR_6->stats.rx_rssi_percentage[VAR_11] + 1;
   } else {
    VAR_6->stats.rx_rssi_percentage[VAR_11] =
     ((VAR_6->stats.rx_rssi_percentage[VAR_11] * (VAR_5 - 1)) +
      (VAR_8->RxMIMOSignalStrength[VAR_11])) / (VAR_5);
   }
   FUNC_0(VAR_0,
     "priv->stats.rx_rssi_percentage[rfPath]  = %d\n",
     VAR_6->stats.rx_rssi_percentage[VAR_11]);
  }
 }



 FUNC_0(VAR_1, "Smooth %s PWDB = %d\n",
   VAR_8->bIsCCK ? "CCK" : "OFDM",
   VAR_8->RxPWDBAll);

 if (VAR_8->bPacketBeacon) {

  if (VAR_21++ >= VAR_2) {
   VAR_21 = VAR_2;
   VAR_22 = VAR_6->stats.Slide_Beacon_pwdb[VAR_20];
   VAR_6->stats.Slide_Beacon_Total -= VAR_22;
  }
  VAR_6->stats.Slide_Beacon_Total += VAR_8->RxPWDBAll;
  VAR_6->stats.Slide_Beacon_pwdb[VAR_20] = VAR_8->RxPWDBAll;
  VAR_20++;
  if (VAR_20 >= VAR_2)
   VAR_20 = 0;
  VAR_8->RxPWDBAll = VAR_6->stats.Slide_Beacon_Total / VAR_21;
  if (VAR_8->RxPWDBAll >= 3)
   VAR_8->RxPWDBAll -= 3;
 }

 FUNC_0(VAR_1, "Smooth %s PWDB = %d\n",
   VAR_8->bIsCCK ? "CCK" : "OFDM",
   VAR_8->RxPWDBAll);


 if (VAR_8->bPacketToSelf ||
     VAR_8->bPacketBeacon ||
     VAR_8->bToSelfBA) {
  if (VAR_6->undecorated_smoothed_pwdb < 0)

   VAR_6->undecorated_smoothed_pwdb =
    VAR_8->RxPWDBAll;
  if (VAR_8->RxPWDBAll > (u32)VAR_6->undecorated_smoothed_pwdb) {
   VAR_6->undecorated_smoothed_pwdb =
    (((VAR_6->undecorated_smoothed_pwdb) * (VAR_5 - 1)) +
     (VAR_8->RxPWDBAll)) / (VAR_5);
   VAR_6->undecorated_smoothed_pwdb = VAR_6->undecorated_smoothed_pwdb + 1;
  } else {
   VAR_6->undecorated_smoothed_pwdb =
    (((VAR_6->undecorated_smoothed_pwdb) * (VAR_5 - 1)) +
     (VAR_8->RxPWDBAll)) / (VAR_5);
  }
 }



 if (VAR_8->SignalQuality) {
  if (VAR_8->bPacketToSelf ||
      VAR_8->bPacketBeacon ||
      VAR_8->bToSelfBA) {
   if (VAR_17++ >= VAR_3) {
    VAR_17 = VAR_3;
    VAR_19 = VAR_6->stats.slide_evm[VAR_16];
    VAR_6->stats.slide_evm_total -= VAR_19;
   }

   VAR_6->stats.slide_evm_total +=
    VAR_8->SignalQuality;

   VAR_6->stats.slide_evm[VAR_16++] =
    VAR_8->SignalQuality;
   if (VAR_16 >= VAR_3)
    VAR_16 = 0;


   VAR_13 = VAR_6->stats.slide_evm_total /
      VAR_17;
   VAR_6->stats.signal_quality = VAR_13;



   VAR_6->stats.last_signal_strength_inpercent = VAR_13;
  }


  if (VAR_8->bPacketToSelf ||
      VAR_8->bPacketBeacon ||
      VAR_8->bToSelfBA) {
   for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
    if (VAR_8->RxMIMOSignalQuality[VAR_12] != -1) {
     if (VAR_6->stats.rx_evm_percentage[VAR_12] == 0)
      VAR_6->stats.rx_evm_percentage[VAR_12] = VAR_8->RxMIMOSignalQuality[VAR_12];
     VAR_6->stats.rx_evm_percentage[VAR_12] =
      ((VAR_6->stats.rx_evm_percentage[VAR_12] * (VAR_5 - 1)) +
       (VAR_8->RxMIMOSignalQuality[VAR_12] * 1)) / (VAR_5);
    }
   }
  }
 }
}
