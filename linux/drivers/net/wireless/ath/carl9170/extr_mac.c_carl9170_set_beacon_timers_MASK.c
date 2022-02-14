
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int beacon_int; int dtim_period; } ;
struct ieee80211_vif {int type; TYPE_1__ bss_conf; scalar_t__ drv_priv; } ;
struct carl9170_vif_info {scalar_t__ enable_beacon; } ;
struct ar9170 {int beacon_enabled; int global_beacon_int; int global_pretbtt; TYPE_3__* hw; } ;
struct TYPE_5__ {int ps_dtim_period; } ;
struct TYPE_6__ {TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int VAR_12 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct ieee80211_vif* FUNC_3 (struct ar9170*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

int FUNC_10(struct ar9170 *VAR_13)
{
 struct ieee80211_vif *VAR_14;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;

 FUNC_8();
 VAR_14 = FUNC_3(VAR_13);

 if (VAR_14) {
  struct carl9170_vif_info *VAR_17;
  VAR_17 = (void *) VAR_14->drv_priv;

  if (VAR_17->enable_beacon && !FUNC_1(!VAR_13->beacon_enabled)) {
   VAR_13->global_beacon_int = VAR_14->bss_conf.beacon_int /
      VAR_13->beacon_enabled;

   FUNC_0(VAR_1, VAR_15,
    VAR_14->bss_conf.dtim_period);

   switch (VAR_14->type) {
   case 128:
   case 130:
    VAR_15 |= VAR_2;
    break;
   case 129:
    VAR_15 |= VAR_0;
    break;
   default:
    FUNC_2(1);
    break;
   }
  } else if (VAR_14->type == VAR_12) {
   VAR_13->global_beacon_int = VAR_14->bss_conf.beacon_int;

   FUNC_0(VAR_1, VAR_15,
    VAR_13->hw->conf.ps_dtim_period);

   VAR_15 |= VAR_5 |
        VAR_4;
  }

  if (VAR_13->global_beacon_int) {
   if (VAR_13->global_beacon_int < 15) {
    FUNC_9();
    return -VAR_11;
   }

   VAR_13->global_pretbtt = VAR_13->global_beacon_int -
     VAR_10;
  } else {
   VAR_13->global_pretbtt = 0;
  }
 } else {
  VAR_13->global_beacon_int = 0;
  VAR_13->global_pretbtt = 0;
 }

 FUNC_9();

 FUNC_0(VAR_3, VAR_15, VAR_13->global_beacon_int);
 FUNC_0(VAR_6, VAR_16, VAR_13->global_pretbtt);
 FUNC_0(VAR_7, VAR_16, VAR_13->global_pretbtt);

 FUNC_5(VAR_13);
 FUNC_4(VAR_9, VAR_16);
 FUNC_4(VAR_8, VAR_15);
 FUNC_6();
 return FUNC_7();
}
