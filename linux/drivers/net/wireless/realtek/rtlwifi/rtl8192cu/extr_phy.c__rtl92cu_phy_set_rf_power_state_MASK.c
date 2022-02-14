
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct rtl_ps_ctl {int rfpwr_state; void* last_sleep_jiffies; void* last_awake_jiffies; int reg_rfps_level; int rfoff_reason; } ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct TYPE_6__ {struct rtl8192_tx_ring* tx_ring; } ;
struct rtl_pci_priv {TYPE_3__ dev; } ;
struct rtl_mac {int link_state; } ;
struct rtl8192_tx_ring {int queue; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rf_pwrstate { ____Placeholder_rf_pwrstate } rf_pwrstate ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* led_control ) (struct ieee80211_hw*,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct rtl_ps_ctl*,int) ;
 int FUNC_1 (struct rtl_ps_ctl*,int) ;
 int VAR_12 ;
 int FUNC_2 (struct rtl_ps_ctl*,int) ;
 int FUNC_3 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 void* VAR_13 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_8 (struct rtl_priv*) ;
 struct rtl_pci_priv* FUNC_9 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_13 (struct rtl_priv*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ieee80211_hw*,int ) ;
 int FUNC_16 (struct ieee80211_hw*,int ) ;
 int FUNC_17 (struct ieee80211_hw*,int ) ;
 int FUNC_18 (struct ieee80211_hw*,int ) ;
 int FUNC_19 (int) ;

__attribute__((used)) static bool FUNC_20(struct ieee80211_hw *VAR_14,
         enum rf_pwrstate VAR_15)
{
 struct rtl_priv *VAR_16 = FUNC_10(VAR_14);
 struct rtl_pci_priv *VAR_17 = FUNC_9(VAR_14);
 struct rtl_mac *VAR_18 = FUNC_8(FUNC_10(VAR_14));
 struct rtl_ps_ctl *VAR_19 = FUNC_13(FUNC_10(VAR_14));
 bool VAR_20 = 1;
 u8 VAR_21, VAR_22;
 struct rtl8192_tx_ring *VAR_23 = ((void*)0);

 switch (VAR_15) {
 case 129:
  if ((VAR_19->rfpwr_state == 130) &&
      FUNC_1(VAR_19, VAR_12)) {
   bool VAR_24;
   u32 VAR_25 = 0;

   do {
    VAR_25++;
    FUNC_3(VAR_16, VAR_2, VAR_3,
      "IPS Set eRf nic enable\n");
    VAR_24 = FUNC_12(VAR_14);
   } while (!VAR_24 && (VAR_25 < 10));
   FUNC_0(VAR_19,
       VAR_12);
  } else {
   FUNC_3(VAR_16, VAR_2, VAR_3,
     "Set ERFON sleeped:%d ms\n",
     FUNC_5(VAR_13 -
        VAR_19->last_sleep_jiffies));
   VAR_19->last_awake_jiffies = VAR_13;
   FUNC_7(VAR_14);
  }
  if (VAR_18->link_state == VAR_8) {
   VAR_16->cfg->ops->led_control(VAR_14,
             VAR_5);
  } else {
   VAR_16->cfg->ops->led_control(VAR_14,
             VAR_6);
  }
  break;
 case 130:
  for (VAR_22 = 0, VAR_21 = 0;
       VAR_22 < VAR_11;) {
   VAR_23 = &VAR_17->dev.tx_ring[VAR_22];
   if (FUNC_14(&VAR_23->queue) == 0 ||
    VAR_22 == VAR_0) {
    VAR_22++;
    continue;
   } else {
    FUNC_3(VAR_16, VAR_1, VAR_4,
      "eRf Off/Sleep: %d times TcbBusyQueue[%d] =%d before doze!\n",
      VAR_21 + 1,
      VAR_22,
      FUNC_14(&VAR_23->queue));
    FUNC_19(10);
    VAR_21++;
   }
   if (VAR_21 >= VAR_9) {
    FUNC_3(VAR_16, VAR_1, VAR_4,
      "ERFOFF: %d times TcbBusyQueue[%d] = %d !\n",
      VAR_9,
      VAR_22,
      FUNC_14(&VAR_23->queue));
    break;
   }
  }
  if (VAR_19->reg_rfps_level & VAR_12) {
   FUNC_3(VAR_16, VAR_2, VAR_3,
     "IPS Set eRf nic disable\n");
   FUNC_11(VAR_14);
   FUNC_2(VAR_19, VAR_12);
  } else {
   if (VAR_19->rfoff_reason == VAR_10) {
    VAR_16->cfg->ops->led_control(VAR_14,
        VAR_6);
   } else {
    VAR_16->cfg->ops->led_control(VAR_14,
        VAR_7);
   }
  }
  break;
 case 128:
  if (VAR_19->rfpwr_state == 130)
   return 0;
  for (VAR_22 = 0, VAR_21 = 0;
       VAR_22 < VAR_11;) {
   VAR_23 = &VAR_17->dev.tx_ring[VAR_22];
   if (FUNC_14(&VAR_23->queue) == 0) {
    VAR_22++;
    continue;
   } else {
    FUNC_3(VAR_16, VAR_1, VAR_4,
      "eRf Off/Sleep: %d times TcbBusyQueue[%d] =%d before doze!\n",
      VAR_21 + 1, VAR_22,
      FUNC_14(&VAR_23->queue));
    FUNC_19(10);
    VAR_21++;
   }
   if (VAR_21 >= VAR_9) {
    FUNC_3(VAR_16, VAR_1, VAR_4,
      "ERFSLEEP: %d times TcbBusyQueue[%d] = %d !\n",
      VAR_9,
      VAR_22,
      FUNC_14(&VAR_23->queue));
    break;
   }
  }
  FUNC_3(VAR_16, VAR_2, VAR_3,
    "Set ERFSLEEP awaked:%d ms\n",
    FUNC_5(VAR_13 - VAR_19->last_awake_jiffies));
  VAR_19->last_sleep_jiffies = VAR_13;
  FUNC_4(VAR_14);
  break;
 default:
  FUNC_6("switch case %#x not processed\n",
         VAR_15);
  VAR_20 = 0;
  break;
 }
 if (VAR_20)
  VAR_19->rfpwr_state = VAR_15;
 return VAR_20;
}
