
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_mac {int rx_conf; scalar_t__ link_state; scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int* maps; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;int (* set_chk_bssid ) (struct ieee80211_hw*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_mac* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_17,
        unsigned int VAR_18,
        unsigned int *VAR_19, u64 VAR_20)
{
 bool VAR_21 = 0;
 struct rtl_priv *VAR_22 = FUNC_2(VAR_17);
 struct rtl_mac *VAR_23 = FUNC_1(FUNC_2(VAR_17));

 *VAR_19 &= VAR_16;
 if (0 == VAR_18)
  return;


 if (VAR_18 & VAR_2) {
  if (*VAR_19 & VAR_2) {
   VAR_23->rx_conf |= VAR_22->cfg->maps[VAR_13] |
       VAR_22->cfg->maps[VAR_10];
   FUNC_0(VAR_22, VAR_0, VAR_1,
     "Enable receive multicast frame\n");
  } else {
   VAR_23->rx_conf &= ~(VAR_22->cfg->maps[VAR_13] |
       VAR_22->cfg->maps[VAR_10]);
   FUNC_0(VAR_22, VAR_0, VAR_1,
     "Disable receive multicast frame\n");
  }
  VAR_21 = 1;
 }

 if (VAR_18 & VAR_5) {
  if (*VAR_19 & VAR_5) {
   VAR_23->rx_conf |= VAR_22->cfg->maps[VAR_12];
   FUNC_0(VAR_22, VAR_0, VAR_1,
     "Enable receive FCS error frame\n");
  } else {
   VAR_23->rx_conf &= ~VAR_22->cfg->maps[VAR_12];
   FUNC_0(VAR_22, VAR_0, VAR_1,
     "Disable receive FCS error frame\n");
  }
  if (!VAR_21)
   VAR_21 = 1;
 }





 if (VAR_18 & VAR_3 &&
     VAR_23->link_state >= VAR_8) {
  if (VAR_23->opmode != VAR_14 &&
      VAR_23->opmode != VAR_15) {
   if (*VAR_19 & VAR_3)
    VAR_22->cfg->ops->set_chk_bssid(VAR_17, 0);
   else
    VAR_22->cfg->ops->set_chk_bssid(VAR_17, 1);
   if (VAR_21)
    VAR_21 = 0;
  }
 }

 if (VAR_18 & VAR_4) {
  if (*VAR_19 & VAR_4) {
   VAR_23->rx_conf |= VAR_22->cfg->maps[VAR_11];

   FUNC_0(VAR_22, VAR_0, VAR_1,
     "Enable receive control frame.\n");
  } else {
   VAR_23->rx_conf &= ~VAR_22->cfg->maps[VAR_11];
   FUNC_0(VAR_22, VAR_0, VAR_1,
     "Disable receive control frame.\n");
  }
  if (!VAR_21)
   VAR_21 = 1;
 }

 if (VAR_18 & VAR_6) {
  if (*VAR_19 & VAR_6) {
   VAR_23->rx_conf |= VAR_22->cfg->maps[VAR_9];
   FUNC_0(VAR_22, VAR_0, VAR_1,
     "Enable receive other BSS's frame.\n");
  } else {
   VAR_23->rx_conf &= ~VAR_22->cfg->maps[VAR_9];
   FUNC_0(VAR_22, VAR_0, VAR_1,
     "Disable receive other BSS's frame.\n");
  }
  if (!VAR_21)
   VAR_21 = 1;
 }

 if (VAR_21)
  VAR_22->cfg->ops->set_hw_reg(VAR_17, VAR_7,
           (u8 *)(&VAR_23->rx_conf));
}
