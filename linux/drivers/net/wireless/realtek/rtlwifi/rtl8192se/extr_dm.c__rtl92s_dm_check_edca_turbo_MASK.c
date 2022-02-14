
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_10__ {int txbytesunicast; int rxbytesunicast; } ;
struct TYPE_9__ {int current_turbo_edca; int is_any_nonbepkts; int is_cur_rdlstate; int disable_framebursting; } ;
struct TYPE_6__ {scalar_t__ rf_type; } ;
struct rtl_priv {TYPE_5__ stats; TYPE_4__ dm; TYPE_3__* cfg; TYPE_1__ phy; } ;
struct rtl_mac {size_t vendor; scalar_t__ link_state; scalar_t__ mode; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ,int ) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_1(VAR_10);
 struct rtl_mac *VAR_12 = FUNC_0(FUNC_1(VAR_10));

 static u64 VAR_13;
 static u64 VAR_14;
 u64 VAR_15 = 0;
 u64 VAR_16 = 0;

 u32 VAR_17 = VAR_9[VAR_12->vendor];
 u32 VAR_18 = VAR_7[VAR_12->vendor];
 u32 VAR_19 = VAR_8[VAR_12->vendor];

 if (VAR_12->link_state != VAR_3) {
  VAR_11->dm.current_turbo_edca = 0;
  goto dm_checkedcaturbo_exit;
 }

 if ((!VAR_11->dm.is_any_nonbepkts) &&
     (!VAR_11->dm.disable_framebursting)) {
  VAR_15 = VAR_11->stats.txbytesunicast - VAR_13;
  VAR_16 = VAR_11->stats.rxbytesunicast - VAR_14;

  if (VAR_11->phy.rf_type == VAR_4) {
   if (VAR_15 > 4 * VAR_16) {

    if (VAR_11->dm.is_cur_rdlstate ||
     !VAR_11->dm.current_turbo_edca) {
     FUNC_2(VAR_11, VAR_1,
       VAR_17);
     VAR_11->dm.is_cur_rdlstate = 0;
    }
   } else {
    if (!VAR_11->dm.is_cur_rdlstate ||
     !VAR_11->dm.current_turbo_edca) {
     if (VAR_12->mode == VAR_6 ||
         VAR_12->mode == VAR_5)
      FUNC_2(VAR_11,
        VAR_1,
        VAR_19);
     else
      FUNC_2(VAR_11,
        VAR_1,
        VAR_18);
     VAR_11->dm.is_cur_rdlstate = 1;
    }
   }
   VAR_11->dm.current_turbo_edca = 1;
  } else {
   if (VAR_16 > 4 * VAR_15) {
    if (!VAR_11->dm.is_cur_rdlstate ||
     !VAR_11->dm.current_turbo_edca) {
     if (VAR_12->mode == VAR_6 ||
         VAR_12->mode == VAR_5)
      FUNC_2(VAR_11,
        VAR_1,
        VAR_19);
     else
      FUNC_2(VAR_11,
        VAR_1,
        VAR_18);
     VAR_11->dm.is_cur_rdlstate = 1;
    }
   } else {
    if (VAR_11->dm.is_cur_rdlstate ||
     !VAR_11->dm.current_turbo_edca) {
     FUNC_2(VAR_11, VAR_1,
       VAR_17);
     VAR_11->dm.is_cur_rdlstate = 0;
    }
   }
   VAR_11->dm.current_turbo_edca = 1;
  }
 } else {
  if (VAR_11->dm.current_turbo_edca) {
   u8 VAR_20 = VAR_0;
   VAR_11->cfg->ops->set_hw_reg(VAR_10, VAR_2,
            &VAR_20);
   VAR_11->dm.current_turbo_edca = 0;
  }
 }

dm_checkedcaturbo_exit:
 VAR_11->dm.is_any_nonbepkts = 0;
 VAR_13 = VAR_11->stats.txbytesunicast;
 VAR_14 = VAR_11->stats.rxbytesunicast;
}
