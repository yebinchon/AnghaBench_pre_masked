
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sw_ant_switch {int antsel; } ;
struct phy_status_rpt {int cck_agc_rpt_ofdm_cfosho_a; int cck_sig_qual_ofdm_pwdb_all; int* path_rxsnr; int antsel_rx_keep_2; int ant_sel_b; int ant_sel; int * stream_rxevm; TYPE_1__* path_agc; } ;
struct odm_phy_status_info {int* RxMIMOSignalQuality; int RxPWDBAll; int BTRxRSSIPercentage; int RecvSignalPower; int SignalQuality; int* RxPwr; int* RxMIMOSignalStrength; int RxPower; int SignalStrength; void** RxSNR; } ;
struct odm_per_pkt_info {scalar_t__ Rate; scalar_t__ bPacketMatchBSSID; } ;
struct TYPE_5__ {int antsel_rx_keep_2; int antsel_rx_keep_1; int antsel_rx_keep_0; } ;
struct TYPE_6__ {void** RxSNRdB; int NumQryPhyStatusOFDM; int NumQryPhyStatusCCK; } ;
struct odm_dm_struct {int bCckHighPower; int RFPathRxEnable; scalar_t__ BoardType; TYPE_2__ DM_FatTable; TYPE_3__ PhyDbgInfo; int bInHctTest; struct sw_ant_switch DM_SWAT_Table; } ;
typedef int s8 ;
typedef void* s32 ;
struct TYPE_4__ {int gain; int trsw; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct odm_dm_struct*,int) ;

__attribute__((used)) static void FUNC_4(struct odm_dm_struct *VAR_8,
   struct odm_phy_status_info *VAR_9,
   u8 *VAR_10,
   struct odm_per_pkt_info *VAR_11)
{
 struct sw_ant_switch *VAR_12 = &VAR_8->DM_SWAT_Table;
 u8 VAR_13, VAR_14;
 s8 VAR_15[4], VAR_16 = 0;
 u8 VAR_17, VAR_18 = 0, VAR_19;
 u8 VAR_20, VAR_21 = 0;
 bool VAR_22;
 u8 VAR_23 = 0;
 u8 VAR_24 = 0;
 u8 VAR_25, VAR_26;

 struct phy_status_rpt *VAR_27 = (struct phy_status_rpt *)VAR_10;

 VAR_22 = VAR_11->Rate >= VAR_1 &&
        VAR_11->Rate <= VAR_0;

 VAR_9->RxMIMOSignalQuality[VAR_5] = -1;
 VAR_9->RxMIMOSignalQuality[VAR_6] = -1;

 if (VAR_22) {
  u8 VAR_28;

  VAR_8->PhyDbgInfo.NumQryPhyStatusCCK++;



  VAR_24 = VAR_8->bCckHighPower;

  VAR_28 = VAR_27->cck_agc_rpt_ofdm_cfosho_a;




  VAR_25 = (VAR_28 & 0xE0) >> 5;
  VAR_26 = VAR_28 & 0x1F;
  switch (VAR_25) {
  case 7:
   if (VAR_26 <= 27)
    VAR_16 = -100 + 2 * (27-VAR_26);
   else
    VAR_16 = -100;
   break;
  case 6:
   VAR_16 = -48 + 2 * (2-VAR_26);
   break;
  case 5:
   VAR_16 = -42 + 2 * (7-VAR_26);
   break;
  case 4:
   VAR_16 = -36 + 2 * (7-VAR_26);
   break;
  case 3:
   VAR_16 = -24 + 2 * (7-VAR_26);
   break;
  case 2:
   if (VAR_24)
    VAR_16 = -12 + 2 * (5-VAR_26);
   else
    VAR_16 = -6 + 2 * (5-VAR_26);
   break;
  case 1:
   VAR_16 = 8-2 * VAR_26;
   break;
  case 0:
   VAR_16 = 14-2 * VAR_26;
   break;
  default:
   break;
  }
  VAR_16 += 6;
  VAR_18 = FUNC_2(VAR_16);
  if (!VAR_24) {
   if (VAR_18 >= 80)
    VAR_18 = ((VAR_18-80)<<1) + ((VAR_18-80)>>1) + 80;
   else if ((VAR_18 <= 78) && (VAR_18 >= 20))
    VAR_18 += 3;
   if (VAR_18 > 100)
    VAR_18 = 100;
  }

  VAR_9->RxPWDBAll = VAR_18;
  VAR_9->BTRxRSSIPercentage = VAR_18;
  VAR_9->RecvSignalPower = VAR_16;

  if (VAR_11->bPacketMatchBSSID) {
   u8 VAR_29, VAR_30;

   if (VAR_9->RxPWDBAll > 40 && !VAR_8->bInHctTest) {
    VAR_29 = 100;
   } else {
    VAR_30 = VAR_27->cck_sig_qual_ofdm_pwdb_all;

    if (VAR_30 > 64)
     VAR_29 = 0;
    else if (VAR_30 < 20)
     VAR_29 = 100;
    else
     VAR_29 = ((64-VAR_30) * 100) / 44;
   }
   VAR_9->SignalQuality = VAR_29;
   VAR_9->RxMIMOSignalQuality[VAR_5] = VAR_29;
   VAR_9->RxMIMOSignalQuality[VAR_6] = -1;
  }
 } else {
  VAR_8->PhyDbgInfo.NumQryPhyStatusOFDM++;



  for (VAR_13 = VAR_5; VAR_13 < VAR_7; VAR_13++) {

   if (VAR_8->RFPathRxEnable & FUNC_0(VAR_13))
    VAR_23++;

   VAR_15[VAR_13] = ((VAR_27->path_agc[VAR_13].gain & 0x3F) * 2) - 110;

   VAR_9->RxPwr[VAR_13] = VAR_15[VAR_13];


   VAR_20 = FUNC_2(VAR_15[VAR_13]);
   VAR_21 += VAR_20;


   if (VAR_8->BoardType == VAR_4) {
    if ((VAR_27->path_agc[VAR_13].trsw) == 1)
     VAR_20 = (VAR_20 > 94) ? 100 : (VAR_20 + 6);
    else
     VAR_20 = (VAR_20 <= 16) ? (VAR_20 >> 3) : (VAR_20 - 16);

    if ((VAR_20 <= 34) && (VAR_20 >= 4))
     VAR_20 -= 4;
   }

   VAR_9->RxMIMOSignalStrength[VAR_13] = (u8)VAR_20;


   VAR_9->RxSNR[VAR_13] = (s32)(VAR_27->path_rxsnr[VAR_13]/2);
   VAR_8->PhyDbgInfo.RxSNRdB[VAR_13] = (s32)(VAR_27->path_rxsnr[VAR_13]/2);
  }

  VAR_16 = (((VAR_27->cck_sig_qual_ofdm_pwdb_all) >> 1) & 0x7f) - 110;

  VAR_18 = FUNC_2(VAR_16);
  VAR_19 = VAR_18;

  VAR_9->RxPWDBAll = VAR_18;
  VAR_9->BTRxRSSIPercentage = VAR_19;
  VAR_9->RxPower = VAR_16;
  VAR_9->RecvSignalPower = VAR_16;


  if (VAR_11->Rate >= VAR_3 && VAR_11->Rate <= VAR_2)
   VAR_14 = 2;
  else
   VAR_14 = 1;

  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {



   VAR_17 = FUNC_1((VAR_27->stream_rxevm[VAR_13]));

   if (VAR_11->bPacketMatchBSSID) {
    if (VAR_13 == VAR_5)
     VAR_9->SignalQuality = (u8)(VAR_17 & 0xff);
    VAR_9->RxMIMOSignalQuality[VAR_13] = (u8)(VAR_17 & 0xff);
   }
  }
 }


 if (VAR_22) {
  VAR_9->SignalStrength = (u8)(FUNC_3(VAR_8, VAR_18));
 } else {
  if (VAR_23 != 0)
   VAR_9->SignalStrength = (u8)(FUNC_3(VAR_8, VAR_21 /= VAR_23));
 }


 VAR_12->antsel = VAR_27->ant_sel;

 VAR_8->DM_FatTable.antsel_rx_keep_0 = VAR_27->ant_sel;
 VAR_8->DM_FatTable.antsel_rx_keep_1 = VAR_27->ant_sel_b;
 VAR_8->DM_FatTable.antsel_rx_keep_2 = VAR_27->antsel_rx_keep_2;
}
