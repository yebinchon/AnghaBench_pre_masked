
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r8192_priv {int bcck_in_ch14; int CurrentChannelBW; int Record_CCK_20Mindex; int CCK_index; int Record_CCK_40Mindex; TYPE_2__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int channel; } ;
struct TYPE_4__ {TYPE_1__ current_network; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->rtllib->current_network.channel == 14 &&
     !VAR_2->bcck_in_ch14)
  VAR_2->bcck_in_ch14 = 1;
 else if (VAR_2->rtllib->current_network.channel != 14 &&
   VAR_2->bcck_in_ch14)
  VAR_2->bcck_in_ch14 = 0;

 switch (VAR_2->CurrentChannelBW) {
 case 129:
  if (VAR_2->Record_CCK_20Mindex == 0)
   VAR_2->Record_CCK_20Mindex = 6;
  VAR_2->CCK_index = VAR_2->Record_CCK_20Mindex;
  FUNC_0(VAR_0,
    "20MHz, _rtl92e_cck_tx_power_track_bw_switch_thermal(),CCK_index = %d\n",
    VAR_2->CCK_index);
 break;

 case 128:
  VAR_2->CCK_index = VAR_2->Record_CCK_40Mindex;
  FUNC_0(VAR_0,
    "40MHz, _rtl92e_cck_tx_power_track_bw_switch_thermal(), CCK_index = %d\n",
    VAR_2->CCK_index);
 break;
 }
 FUNC_1(VAR_1, VAR_2->bcck_in_ch14);
}
