
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct odm_phy_info {scalar_t__* rx_mimo_signal_strength; int rx_pwd_ba11; } ;
struct odm_packet_info {int station_id; scalar_t__ data_rate; scalar_t__ is_beacon; scalar_t__ to_self; int bssid_match; } ;
typedef int s32 ;
struct TYPE_7__ {int NumQryBeaconPkt; } ;
struct TYPE_10__ {scalar_t__ RxRate; int SupportAbility; int RSSI_A; int RSSI_B; TYPE_1__ PhyDbgInfo; TYPE_3__** pODM_StaInfo; } ;
struct TYPE_8__ {int UndecoratedSmoothedCCK; int UndecoratedSmoothedOFDM; int UndecoratedSmoothedPWDB; int PacketMap; int ValidBit; } ;
struct TYPE_9__ {TYPE_2__ rssi_stat; } ;
typedef TYPE_3__* PSTA_INFO_T ;
typedef TYPE_4__* PDM_ODM_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(
 PDM_ODM_T VAR_6, struct odm_phy_info *VAR_7, struct odm_packet_info *VAR_8
)
{

 s32 VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13 = 0;
 u8 VAR_14, VAR_15, VAR_16;
 u32 VAR_17 = 0;
 u32 VAR_18 = 0;
 PSTA_INFO_T VAR_19;


 if (VAR_8->station_id == 0xFF)
  return;

 VAR_19 = VAR_6->pODM_StaInfo[VAR_8->station_id];

 if (!FUNC_0(VAR_19))
  return;

 if ((!VAR_8->bssid_match))
  return;

 if (VAR_8->is_beacon)
  VAR_6->PhyDbgInfo.NumQryBeaconPkt++;

 VAR_13 = ((VAR_8->data_rate <= VAR_1)) ? 1 : 0;
 VAR_6->RxRate = VAR_8->data_rate;


 if (VAR_6->SupportAbility & VAR_2) {

 }



 VAR_10 = VAR_19->rssi_stat.UndecoratedSmoothedCCK;
 VAR_11 = VAR_19->rssi_stat.UndecoratedSmoothedOFDM;
 VAR_9 = VAR_19->rssi_stat.UndecoratedSmoothedPWDB;

 if (VAR_8->to_self || VAR_8->is_beacon) {

  if (!VAR_13) {
   if (VAR_7->rx_mimo_signal_strength[VAR_4] == 0) {
    VAR_12 = VAR_7->rx_mimo_signal_strength[VAR_3];
    VAR_6->RSSI_A = VAR_7->rx_mimo_signal_strength[VAR_3];
    VAR_6->RSSI_B = 0;
   } else {


    VAR_6->RSSI_A = VAR_7->rx_mimo_signal_strength[VAR_3];
    VAR_6->RSSI_B = VAR_7->rx_mimo_signal_strength[VAR_4];

    if (
     VAR_7->rx_mimo_signal_strength[VAR_3] >
     VAR_7->rx_mimo_signal_strength[VAR_4]
    ) {
     VAR_14 = VAR_7->rx_mimo_signal_strength[VAR_3];
     VAR_15 = VAR_7->rx_mimo_signal_strength[VAR_4];
    } else {
     VAR_14 = VAR_7->rx_mimo_signal_strength[VAR_4];
     VAR_15 = VAR_7->rx_mimo_signal_strength[VAR_3];
    }

    if ((VAR_14-VAR_15) < 3)
     VAR_12 = VAR_14;
    else if ((VAR_14-VAR_15) < 6)
     VAR_12 = VAR_14 - 1;
    else if ((VAR_14-VAR_15) < 10)
     VAR_12 = VAR_14 - 2;
    else
     VAR_12 = VAR_14 - 3;
   }


   if (VAR_11 <= 0)
    VAR_11 = VAR_7->rx_pwd_ba11;
   else {
    if (VAR_7->rx_pwd_ba11 > (u32)VAR_11) {
     VAR_11 =
       ((VAR_11*(VAR_5-1)) +
       VAR_12)/VAR_5;
     VAR_11 = VAR_11 + 1;
    } else {
     VAR_11 =
       ((VAR_11*(VAR_5-1)) +
       VAR_12)/VAR_5;
    }
   }

   VAR_19->rssi_stat.PacketMap = (VAR_19->rssi_stat.PacketMap<<1) | VAR_0;

  } else {
   VAR_12 = VAR_7->rx_pwd_ba11;
   VAR_6->RSSI_A = (u8) VAR_7->rx_pwd_ba11;
   VAR_6->RSSI_B = 0;


   if (VAR_10 <= 0)
    VAR_10 = VAR_7->rx_pwd_ba11;
   else {
    if (VAR_7->rx_pwd_ba11 > (u32)VAR_10) {
     VAR_10 =
       ((VAR_10*(VAR_5-1)) +
       VAR_7->rx_pwd_ba11)/VAR_5;
     VAR_10 = VAR_10 + 1;
    } else {
     VAR_10 =
       ((VAR_10*(VAR_5-1)) +
       VAR_7->rx_pwd_ba11)/VAR_5;
    }
   }
   VAR_19->rssi_stat.PacketMap = VAR_19->rssi_stat.PacketMap<<1;
  }


  {

   if (VAR_19->rssi_stat.ValidBit >= 64)
    VAR_19->rssi_stat.ValidBit = 64;
   else
    VAR_19->rssi_stat.ValidBit++;

   for (VAR_16 = 0; VAR_16 < VAR_19->rssi_stat.ValidBit; VAR_16++)
    VAR_17 += (u8)(VAR_19->rssi_stat.PacketMap>>VAR_16)&VAR_0;

   if (VAR_19->rssi_stat.ValidBit == 64) {
    VAR_18 = ((VAR_17<<4) > 64)?64:(VAR_17<<4);
    VAR_9 = (VAR_18*VAR_11+(64-VAR_18)*VAR_10)>>6;
   } else {
    if (VAR_19->rssi_stat.ValidBit != 0)
     VAR_9 = (VAR_17*VAR_11+(VAR_19->rssi_stat.ValidBit-VAR_17)*VAR_10)/VAR_19->rssi_stat.ValidBit;
    else
     VAR_9 = 0;
   }

   VAR_19->rssi_stat.UndecoratedSmoothedCCK = VAR_10;
   VAR_19->rssi_stat.UndecoratedSmoothedOFDM = VAR_11;
   VAR_19->rssi_stat.UndecoratedSmoothedPWDB = VAR_9;





  }

 }
}
