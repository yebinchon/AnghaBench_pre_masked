
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int* rx_rssi_percentage; } ;
struct TYPE_5__ {long undec_sm_pwdb; } ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {TYPE_4__* cfg; TYPE_2__ stats; TYPE_1__ dm; struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ link_state; scalar_t__ mode; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {TYPE_3__* ops; } ;
struct TYPE_7__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;int (* get_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct rtl_hal*) ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_3(VAR_7);
 struct rtl_hal *VAR_9 = FUNC_1(FUNC_3(VAR_7));
 struct rtl_phy *VAR_10 = &(VAR_8->phy);
 struct rtl_mac *VAR_11 = FUNC_2(FUNC_3(VAR_7));
 bool VAR_12;
 bool VAR_13 = 1;
 long VAR_14 = 0;
 u8 VAR_15 = 0;
 u8 VAR_16 = 0;

 if (FUNC_0(VAR_9))
  return;

 if ((VAR_10->rf_type == VAR_4) || (VAR_10->rf_type == VAR_5))
  return;

 VAR_8->cfg->ops->get_hw_reg(VAR_7, VAR_0, (u8 *)(&VAR_12));

 if (VAR_11->link_state >= VAR_1) {
  if (VAR_8->dm.undec_sm_pwdb > VAR_14) {
   VAR_15 = VAR_8->stats.rx_rssi_percentage[VAR_2];
   VAR_16 = VAR_8->stats.rx_rssi_percentage[VAR_3];
  }
 }


 if (VAR_11->mode != VAR_6) {
  if ((VAR_15 == 0) && (VAR_16 == 0)) {
   VAR_13 = 1;
  } else if (VAR_16 > 30) {

   VAR_13 = 1;
  } else if (VAR_16 < 5) {

   VAR_13 = 0;

  } else if (VAR_15 > 15 && (VAR_15 >= VAR_16)) {
   if ((VAR_15 - VAR_16) > 15)

    VAR_13 = 0;
   else if ((VAR_15 - VAR_16) < 10)

    VAR_13 = 1;
   else
    VAR_13 = VAR_12;
  } else {

   VAR_13 = 1;
  }
 }


 if (VAR_13 != VAR_12)
  VAR_8->cfg->ops->set_hw_reg(VAR_7, VAR_0,
           (u8 *)&VAR_13);

}
