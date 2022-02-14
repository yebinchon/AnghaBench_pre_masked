
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_16__ {int cfo_threshold; scalar_t__ crystal_cap; } ;
struct TYPE_15__ {scalar_t__ rf_type; } ;
struct TYPE_14__ {int crystalcap; } ;
struct TYPE_13__ {TYPE_4__* btc_ops; } ;
struct TYPE_9__ {scalar_t__ link_state; } ;
struct rtl_priv {TYPE_8__ dm; TYPE_7__ phy; TYPE_6__ efuse; TYPE_5__ btcoexist; TYPE_3__* cfg; TYPE_1__ mac80211; } ;
struct rtl_dm {int atc_status; int crystal_cap; int* cfo_tail; scalar_t__ packet_count; scalar_t__ packet_count_pre; int cfo_ave_pre; int large_cfo_hit; int cfo_threshold; int is_freeze; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_12__ {int (* btc_is_bt_disabled ) (struct rtl_priv*) ;} ;
struct TYPE_11__ {TYPE_2__* ops; } ;
struct TYPE_10__ {scalar_t__ (* get_btc_status ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_dm* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct rtl_priv*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_3(VAR_10);
 struct rtl_dm *VAR_12 = FUNC_2(FUNC_3(VAR_10));
 u8 VAR_13;
 u32 VAR_14;
 int VAR_15 , VAR_16 , VAR_17 = 0, VAR_18 = 0;
 int VAR_19;

 if (VAR_11->mac80211.link_state < VAR_6) {
  if (VAR_12->atc_status == VAR_0) {
   FUNC_4(VAR_10, VAR_9, FUNC_0(11),
          VAR_1);
   VAR_12->atc_status = VAR_1;
  }

  if (VAR_11->cfg->ops->get_btc_status()) {
   if (!VAR_11->btcoexist.btc_ops->
       btc_is_bt_disabled(VAR_11)) {
    FUNC_1(VAR_11, VAR_4, VAR_5,
      "odm_DynamicATCSwitch(): Disable CFO tracking for BT!!\n");
    return;
   }
  }

  if (VAR_12->crystal_cap != VAR_11->efuse.crystalcap) {
   VAR_12->crystal_cap = VAR_11->efuse.crystalcap;
   VAR_13 = VAR_12->crystal_cap & 0x3f;
   FUNC_4(VAR_10, VAR_7, 0xFFF000,
          (VAR_13 | (VAR_13 << 6)));
  }
 } else {
  VAR_15 = (int)(VAR_12->cfo_tail[0] * 3125) / 1280;
  VAR_16 = (int)(VAR_12->cfo_tail[1] * 3125) / 1280;
  VAR_14 = VAR_12->packet_count;

  if (VAR_14 == VAR_12->packet_count_pre)
   return;

  VAR_12->packet_count_pre = VAR_14;

  if (VAR_11->phy.rf_type == VAR_8)
   VAR_17 = VAR_15;
  else
   VAR_17 = (int)(VAR_15 + VAR_16) >> 1;

  VAR_19 = (VAR_12->cfo_ave_pre >= VAR_17) ?
          (VAR_12->cfo_ave_pre - VAR_17) :
          (VAR_17 - VAR_12->cfo_ave_pre);

  if (VAR_19 > 20 && VAR_12->large_cfo_hit == 0) {
   VAR_12->large_cfo_hit = 1;
   return;
  }
  VAR_12->large_cfo_hit = 0;

  VAR_12->cfo_ave_pre = VAR_17;

  if (VAR_17 >= -VAR_12->cfo_threshold &&
      VAR_17 <= VAR_12->cfo_threshold && VAR_12->is_freeze == 0) {
   if (VAR_12->cfo_threshold == VAR_3) {
    VAR_12->cfo_threshold = VAR_3 + 10;
    VAR_12->is_freeze = 1;
   } else {
    VAR_12->cfo_threshold = VAR_3;
   }
  }

  if (VAR_17 > VAR_12->cfo_threshold && VAR_12->crystal_cap < 0x3f)
   VAR_18 = ((VAR_17 - VAR_3) >> 2) + 1;
  else if ((VAR_17 < -VAR_11->dm.cfo_threshold) &&
    VAR_11->dm.crystal_cap > 0)
   VAR_18 = ((VAR_17 + VAR_3) >> 2) - 1;

  if (VAR_18 != 0) {
   VAR_12->is_freeze = 0;
   VAR_12->crystal_cap += VAR_18;

   if (VAR_12->crystal_cap > 0x3f)
    VAR_12->crystal_cap = 0x3f;
   else if (VAR_12->crystal_cap < 0)
    VAR_12->crystal_cap = 0;

   VAR_13 = VAR_12->crystal_cap & 0x3f;
   FUNC_4(VAR_10, VAR_7, 0xFFF000,
          (VAR_13 | (VAR_13 << 6)));
  }

  if (VAR_17 < VAR_2 &&
      VAR_17 > -VAR_2) {
   if (VAR_12->atc_status == VAR_1) {
    FUNC_4(VAR_10, VAR_9, FUNC_0(11),
           VAR_0);
    VAR_12->atc_status = VAR_0;
   }
  } else {
   if (VAR_12->atc_status == VAR_0) {
    FUNC_4(VAR_10, VAR_9, FUNC_0(11),
           VAR_1);
    VAR_12->atc_status = VAR_1;
   }
  }
 }
}
