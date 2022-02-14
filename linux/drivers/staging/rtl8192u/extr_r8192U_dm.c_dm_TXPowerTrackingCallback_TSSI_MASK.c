
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct tx_config_cmd {int cmd_length; scalar_t__ cmd_value; int cmd_op; } ;
struct r8192_priv {int Pwr_Track; int rf_type; scalar_t__ TSSI_13dBm; int rfa_txpowertrackingindex; int rfa_txpowertrackingindex_real; int cck_present_attenuation_difference; int cck_present_attenuation; int rfa_txpowertracking_default; scalar_t__ CurrentChannelBW; int cck_present_attenuation_20Mdefault; int cck_present_attenuation_40Mdefault; int bcck_in_ch14; TYPE_2__* ieee80211; TYPE_3__* txbbgain_table; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int txbbgain_value; } ;
struct TYPE_4__ {int channel; } ;
struct TYPE_5__ {int bdynamic_txpower_enable; TYPE_1__ current_network; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct net_device*,struct tx_config_cmd*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct net_device*,int) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_4 (struct net_device*,int,int*) ;
 int FUNC_5 (struct net_device*,int,scalar_t__*) ;
 int FUNC_6 (struct net_device*,int ,int ,int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_3(VAR_7);
 bool VAR_9 = 0;
 struct tx_config_cmd VAR_10;
 u8 VAR_11;
 int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 u8 VAR_15, VAR_16[5] = {0, 0, 0, 0, 0};
 u32 VAR_17;
 u8 VAR_18;
 u16 VAR_19, VAR_20, VAR_21 = 0;

 bool VAR_22 = 1;
 u32 VAR_23 = 0;

 FUNC_8(VAR_7, 0x1ba, 0);

 VAR_8->ieee80211->bdynamic_txpower_enable = 0;

 VAR_11 = (u8)(VAR_8->Pwr_Track>>24);
 VAR_15 = VAR_8->rf_type;
 VAR_17 = (VAR_15<<8) | VAR_11;

 FUNC_0(VAR_0, "powerlevelOFDM24G = %x\n", VAR_11);

 for (VAR_13 = 0; VAR_13 <= 30; VAR_13++) {
  VAR_10.cmd_op = VAR_4;
  VAR_10.cmd_length = sizeof(VAR_10.cmd_op);
  VAR_10.cmd_value = VAR_17;
  VAR_22 = FUNC_1(VAR_7, &VAR_10, sizeof(struct tx_config_cmd));
  if (VAR_22 == VAR_3)
   FUNC_0(VAR_0, "Set configuration with tx cmd queue fail!\n");
  FUNC_7(1000, 2000);

  for (VAR_12 = 0; VAR_12 <= 30; VAR_12++) {
   FUNC_4(VAR_7, 0x1ba, &VAR_18);

   if (VAR_18 == 0) {
    FUNC_7(1000, 2000);
    continue;
   }
   FUNC_5(VAR_7, 0x13c, &VAR_19);
   if (VAR_19 == 0) {
    FUNC_8(VAR_7, 0x1ba, 0);
    break;
   }

   for (VAR_14 = 0; VAR_14 < 5; VAR_14++) {
    if (VAR_14 != 4)
     FUNC_4(VAR_7, 0x134+VAR_14, &VAR_16[VAR_14]);
    else
     FUNC_4(VAR_7, 0x13e, &VAR_16[VAR_14]);
    FUNC_0(VAR_0, "TSSI_report_value = %d\n", VAR_16[VAR_14]);
   }


   for (VAR_14 = 0; VAR_14 < 5; VAR_14++) {
    if (VAR_16[VAR_14] <= 20) {
     VAR_9 = 1;
     break;
    }
   }
   if (VAR_9) {
    FUNC_8(VAR_7, 0x1ba, 0);
    VAR_9 = 0;
    FUNC_0(VAR_0, "we filtered the data\n");
    for (VAR_14 = 0; VAR_14 < 5; VAR_14++)
     VAR_16[VAR_14] = 0;
    break;
   }

   for (VAR_14 = 0; VAR_14 < 5; VAR_14++)
    VAR_21 += VAR_16[VAR_14];

   VAR_21 = VAR_21*100/5;
   FUNC_0(VAR_0, "Avg_TSSI_Meas_from_driver = %d\n", VAR_21);
   VAR_20 = VAR_8->TSSI_13dBm;
   FUNC_0(VAR_0, "TSSI_13dBm = %d\n", VAR_20);



   if (VAR_21 > VAR_20)
    VAR_23 = VAR_21 - VAR_20;
   else
    VAR_23 = VAR_20 - VAR_21;

   if (VAR_23 <= VAR_1) {
    VAR_8->ieee80211->bdynamic_txpower_enable = 1;
    FUNC_8(VAR_7, 0x1ba, 0);
    FUNC_0(VAR_0, "tx power track is done\n");
    FUNC_0(VAR_0, "priv->rfa_txpowertrackingindex = %d\n", VAR_8->rfa_txpowertrackingindex);
    FUNC_0(VAR_0, "priv->rfa_txpowertrackingindex_real = %d\n", VAR_8->rfa_txpowertrackingindex_real);
    FUNC_0(VAR_0, "priv->cck_present_attenuation_difference = %d\n", VAR_8->cck_present_attenuation_difference);
    FUNC_0(VAR_0, "priv->cck_present_attenuation = %d\n", VAR_8->cck_present_attenuation);
    return;
   }
   if (VAR_21 < VAR_20 - VAR_1) {
    if (VAR_8->rfa_txpowertrackingindex > 0) {
     VAR_8->rfa_txpowertrackingindex--;
     if (VAR_8->rfa_txpowertrackingindex_real > 4) {
      VAR_8->rfa_txpowertrackingindex_real--;
      FUNC_6(VAR_7, VAR_6, VAR_5, VAR_8->txbbgain_table[VAR_8->rfa_txpowertrackingindex_real].txbbgain_value);
     }
    }
   } else {
    if (VAR_8->rfa_txpowertrackingindex < 36) {
     VAR_8->rfa_txpowertrackingindex++;
     VAR_8->rfa_txpowertrackingindex_real++;
     FUNC_6(VAR_7, VAR_6, VAR_5, VAR_8->txbbgain_table[VAR_8->rfa_txpowertrackingindex_real].txbbgain_value);

    }
   }
   VAR_8->cck_present_attenuation_difference
    = VAR_8->rfa_txpowertrackingindex - VAR_8->rfa_txpowertracking_default;

   if (VAR_8->CurrentChannelBW == VAR_2)
    VAR_8->cck_present_attenuation
     = VAR_8->cck_present_attenuation_20Mdefault + VAR_8->cck_present_attenuation_difference;
   else
    VAR_8->cck_present_attenuation
     = VAR_8->cck_present_attenuation_40Mdefault + VAR_8->cck_present_attenuation_difference;

   if (VAR_8->cck_present_attenuation > -1 && VAR_8->cck_present_attenuation < 23) {
    if (VAR_8->ieee80211->current_network.channel == 14 && !VAR_8->bcck_in_ch14) {
     VAR_8->bcck_in_ch14 = 1;
     FUNC_2(VAR_7, VAR_8->bcck_in_ch14);
    } else if (VAR_8->ieee80211->current_network.channel != 14 && VAR_8->bcck_in_ch14) {
     VAR_8->bcck_in_ch14 = 0;
     FUNC_2(VAR_7, VAR_8->bcck_in_ch14);
    } else
     FUNC_2(VAR_7, VAR_8->bcck_in_ch14);
   }
   FUNC_0(VAR_0, "priv->rfa_txpowertrackingindex = %d\n", VAR_8->rfa_txpowertrackingindex);
   FUNC_0(VAR_0, "priv->rfa_txpowertrackingindex_real = %d\n", VAR_8->rfa_txpowertrackingindex_real);
   FUNC_0(VAR_0, "priv->cck_present_attenuation_difference = %d\n", VAR_8->cck_present_attenuation_difference);
   FUNC_0(VAR_0, "priv->cck_present_attenuation = %d\n", VAR_8->cck_present_attenuation);

   if (VAR_8->cck_present_attenuation_difference <= -12 || VAR_8->cck_present_attenuation_difference >= 24) {
    VAR_8->ieee80211->bdynamic_txpower_enable = 1;
    FUNC_8(VAR_7, 0x1ba, 0);
    FUNC_0(VAR_0, "tx power track--->limited\n");
    return;
   }

   FUNC_8(VAR_7, 0x1ba, 0);
   VAR_21 = 0;
   for (VAR_14 = 0; VAR_14 < 5; VAR_14++)
    VAR_16[VAR_14] = 0;
   break;
  }
 }
 VAR_8->ieee80211->bdynamic_txpower_enable = 1;
 FUNC_8(VAR_7, 0x1ba, 0);
}
