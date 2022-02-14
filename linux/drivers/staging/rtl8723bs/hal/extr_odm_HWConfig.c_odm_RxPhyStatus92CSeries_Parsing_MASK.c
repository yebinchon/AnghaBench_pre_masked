
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct odm_phy_info {int* rx_mimo_signal_quality; int rx_pwd_ba11; int bt_rx_rssi_percentage; int signal_quality; int* rx_mimo_signal_strength; int SignalStrength; int signal_strength; void* recv_signal_power; void* rx_power; scalar_t__* rx_snr; void** rx_pwr; } ;
struct odm_packet_info {scalar_t__ data_rate; } ;
typedef void* s8 ;
typedef scalar_t__ s32 ;
struct TYPE_9__ {scalar_t__* RxSNRdB; int NumQryPhyStatusOFDM; int NumQryPhyStatusCCK; } ;
struct TYPE_11__ {int RFPathRxEnable; TYPE_2__ PhyDbgInfo; int bInHctTest; } ;
struct TYPE_10__ {int cck_agc_rpt_ofdm_cfosho_a; int cck_sig_qual_ofdm_pwdb_all; int* path_rxsnr; int path_cfotail; int * stream_rxevm; TYPE_1__* path_agc; } ;
struct TYPE_8__ {int gain; } ;
typedef TYPE_3__* PPHY_STATUS_RPT_8192CD_T ;
typedef TYPE_4__* PDM_ODM_T ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,struct odm_packet_info*,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_6(
 PDM_ODM_T VAR_6,
 struct odm_phy_info *VAR_7,
 u8 *VAR_8,
 struct odm_packet_info *VAR_9
)
{
 u8 VAR_10, VAR_11;
 s8 VAR_12[4], VAR_13 = 0;
 u8 VAR_14, VAR_15 = 0, VAR_16;
 u8 VAR_17, VAR_18 = 0;
 bool VAR_19 = 0;
 u8 VAR_20 = 0;
 u8 VAR_21, VAR_22;
 PPHY_STATUS_RPT_8192CD_T VAR_23 = (PPHY_STATUS_RPT_8192CD_T)VAR_8;

 VAR_19 = VAR_9->data_rate <= VAR_0;
 VAR_7->rx_mimo_signal_quality[VAR_3] = -1;
 VAR_7->rx_mimo_signal_quality[VAR_4] = -1;


 if (VAR_19) {
  u8 VAR_24;

  VAR_6->PhyDbgInfo.NumQryPhyStatusCCK++;





  VAR_24 = VAR_23->cck_agc_rpt_ofdm_cfosho_a ;



  VAR_21 = ((VAR_24 & 0xE0)>>5);
  VAR_22 = (VAR_24 & 0x1F);
  VAR_13 = FUNC_2(VAR_21, VAR_22);
  VAR_15 = FUNC_4(VAR_13);
  if (VAR_15 > 100)
   VAR_15 = 100;

  VAR_7->rx_pwd_ba11 = VAR_15;
  VAR_7->bt_rx_rssi_percentage = VAR_15;
  VAR_7->recv_signal_power = VAR_13;




  {
   u8 VAR_25, VAR_26;

   if (VAR_7->rx_pwd_ba11 > 40 && !VAR_6->bInHctTest)
    VAR_25 = 100;
   else {
    VAR_26 = VAR_23->cck_sig_qual_ofdm_pwdb_all;

    if (VAR_26 > 64)
     VAR_25 = 0;
    else if (VAR_26 < 20)
     VAR_25 = 100;
    else
     VAR_25 = ((64-VAR_26) * 100) / 44;

   }


   VAR_7->signal_quality = VAR_25;
   VAR_7->rx_mimo_signal_quality[VAR_3] = VAR_25;
   VAR_7->rx_mimo_signal_quality[VAR_4] = -1;
  }
 } else {
  VAR_6->PhyDbgInfo.NumQryPhyStatusOFDM++;





  for (VAR_10 = VAR_3; VAR_10 < VAR_5; VAR_10++) {

   if (VAR_6->RFPathRxEnable & FUNC_0(VAR_10))
    VAR_20++;



   VAR_12[VAR_10] = ((VAR_23->path_agc[VAR_10].gain&0x3F)*2) - 110;


   VAR_7->rx_pwr[VAR_10] = VAR_12[VAR_10];


   VAR_17 = FUNC_4(VAR_12[VAR_10]);
   VAR_18 += VAR_17;


   VAR_7->rx_mimo_signal_strength[VAR_10] = (u8) VAR_17;


   VAR_7->rx_snr[VAR_10] = VAR_6->PhyDbgInfo.RxSNRdB[VAR_10] = (s32)(VAR_23->path_rxsnr[VAR_10]/2);
  }





  VAR_13 = (((VAR_23->cck_sig_qual_ofdm_pwdb_all) >> 1)&0x7f)-110;

  VAR_16 = VAR_15 = FUNC_4(VAR_13);


  VAR_7->rx_pwd_ba11 = VAR_15;

  VAR_7->bt_rx_rssi_percentage = VAR_16;
  VAR_7->rx_power = VAR_13;
  VAR_7->recv_signal_power = VAR_13;

  {



   if (VAR_9->data_rate >= VAR_2 && VAR_9->data_rate <= VAR_1)
    VAR_11 = 2;
   else
    VAR_11 = 1;

   for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {



    VAR_14 = FUNC_3((VAR_23->stream_rxevm[VAR_10]));





    {
     if (VAR_10 == VAR_3)
      VAR_7->signal_quality = (u8)(VAR_14 & 0xff);

     VAR_7->rx_mimo_signal_quality[VAR_10] = (u8)(VAR_14 & 0xff);
    }
   }
  }

  FUNC_1(VAR_6, VAR_9, VAR_23->path_cfotail);

 }



 if (VAR_19) {



  VAR_7->signal_strength = (u8)(FUNC_5(VAR_6, VAR_15));

 } else {
  if (VAR_20 != 0) {




   VAR_7->signal_strength = (u8)(FUNC_5(VAR_6, VAR_18 /= VAR_20));

  }
 }



}
