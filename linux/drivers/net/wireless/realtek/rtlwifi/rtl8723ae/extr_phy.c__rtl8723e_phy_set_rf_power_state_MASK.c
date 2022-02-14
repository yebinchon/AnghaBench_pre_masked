
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
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (struct rtl_ps_ctl*,int) ;
 int FUNC_1 (struct rtl_ps_ctl*,int) ;
 int VAR_13 ;
 int FUNC_2 (struct rtl_ps_ctl*,int) ;
 int FUNC_3 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 void* VAR_14 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_7 (struct rtl_priv*) ;
 struct rtl_pci_priv* FUNC_8 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_12 (struct rtl_priv*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ieee80211_hw*,int ) ;
 int FUNC_15 (struct ieee80211_hw*,int ) ;
 int FUNC_16 (struct ieee80211_hw*,int ) ;
 int FUNC_17 (struct ieee80211_hw*,int ) ;
 int FUNC_18 (int) ;

__attribute__((used)) static bool FUNC_19(struct ieee80211_hw *VAR_15,
          enum rf_pwrstate VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_9(VAR_15);
 struct rtl_pci_priv *VAR_18 = FUNC_8(VAR_15);
 struct rtl_mac *VAR_19 = FUNC_7(FUNC_9(VAR_15));
 struct rtl_ps_ctl *VAR_20 = FUNC_12(FUNC_9(VAR_15));
 bool VAR_21 = 1;
 u8 VAR_22, VAR_23;
 struct rtl8192_tx_ring *VAR_24 = ((void*)0);

 switch (VAR_16) {
 case 129:
  if ((VAR_20->rfpwr_state == 130) &&
      FUNC_1(VAR_20, VAR_13)) {
   bool VAR_25;
   u32 VAR_26 = 0;

   do {
    VAR_26++;
    FUNC_3(VAR_17, VAR_2, VAR_3,
      "IPS Set eRf nic enable\n");
    VAR_25 = FUNC_11(VAR_15);
   } while (!VAR_25 && (VAR_26 < 10));
   FUNC_0(VAR_20,
       VAR_13);
  } else {
   FUNC_3(VAR_17, VAR_2, VAR_3,
     "Set ERFON sleeped:%d ms\n",
      FUNC_5(VAR_14 -
         VAR_20->
         last_sleep_jiffies));
   VAR_20->last_awake_jiffies = VAR_14;
   FUNC_6(VAR_15);
  }
  if (VAR_19->link_state == VAR_9) {
   VAR_17->cfg->ops->led_control(VAR_15,
             VAR_6);
  } else {
   VAR_17->cfg->ops->led_control(VAR_15,
             VAR_7);
  }
  break;
 case 130:
  if (VAR_20->reg_rfps_level & VAR_13) {
   FUNC_3(VAR_17, VAR_2, VAR_3,
     "IPS Set eRf nic disable\n");
   FUNC_10(VAR_15);
   FUNC_2(VAR_20, VAR_13);
  } else {
   if (VAR_20->rfoff_reason == VAR_11) {
    VAR_17->cfg->ops->led_control(VAR_15,
      VAR_7);
   } else {
    VAR_17->cfg->ops->led_control(VAR_15,
      VAR_8);
   }
  }
  break;
 case 128:
  if (VAR_20->rfpwr_state == 130)
   break;
  for (VAR_23 = 0, VAR_22 = 0;
       VAR_23 < VAR_12;) {
   VAR_24 = &VAR_18->dev.tx_ring[VAR_23];
   if (VAR_23 == VAR_0 ||
       FUNC_13(&VAR_24->queue) == 0) {
    VAR_23++;
    continue;
   } else {
    FUNC_3(VAR_17, VAR_1, VAR_5,
      "eRf Off/Sleep: %d times TcbBusyQueue[%d] =%d before doze!\n",
      (VAR_22 + 1), VAR_23,
      FUNC_13(&VAR_24->queue));

    FUNC_18(10);
    VAR_22++;
   }
   if (VAR_22 >= VAR_10) {
    FUNC_3(VAR_17, VAR_1, VAR_5,
      "ERFSLEEP: %d times TcbBusyQueue[%d] = %d !\n",
       VAR_10,
       VAR_23,
       FUNC_13(&VAR_24->queue));
    break;
   }
  }
  FUNC_3(VAR_17, VAR_2, VAR_3,
    "Set ERFSLEEP awaked:%d ms\n",
     FUNC_5(VAR_14 -
        VAR_20->last_awake_jiffies));
  VAR_20->last_sleep_jiffies = VAR_14;
  FUNC_4(VAR_15);
  break;
 default:
  FUNC_3(VAR_17, VAR_1, VAR_4,
    "switch case %#x not processed\n", VAR_16);
  VAR_21 = 0;
  break;
 }
 if (VAR_21)
  VAR_20->rfpwr_state = VAR_16;
 return VAR_21;
}
