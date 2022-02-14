
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
typedef size_t u32 ;
struct TYPE_10__ {int txbytesunicast; int rxbytesunicast; } ;
struct TYPE_9__ {int is_any_nonbepkts; int is_cur_rdlstate; int current_turbo_edca; int disable_framebursting; } ;
struct TYPE_6__ {size_t vendor; } ;
struct rtl_priv {TYPE_5__ stats; TYPE_4__ dm; TYPE_3__* cfg; TYPE_1__ mac80211; } ;
struct rtl_mac {scalar_t__ mode; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t* VAR_7 ;
 size_t* VAR_8 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,size_t) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_2(VAR_9);
 struct rtl_mac *VAR_11 = FUNC_1(FUNC_2(VAR_9));

 static u64 VAR_12;
 static u64 VAR_13;
 u64 VAR_14 = 0;
 u64 VAR_15 = 0;
 u32 VAR_16 = 0x6ea42b;
 u32 VAR_17 = 0x6ea42b;
 u32 VAR_18 = 0x5ea42b;
 u32 VAR_19 = 0;
 bool VAR_20;
 bool VAR_21 = 0;
 bool VAR_22 = 0;

 VAR_14 = VAR_10->stats.txbytesunicast - VAR_12;
 VAR_15 = VAR_10->stats.rxbytesunicast - VAR_13;

 VAR_19 = VAR_10->mac80211.vendor;
 VAR_21 = (VAR_19 == VAR_4 || VAR_19 == VAR_2) ?
         1 : 0;
 VAR_22 = ((!VAR_10->dm.is_any_nonbepkts) &&
      (!VAR_10->dm.disable_framebursting)) ?
      1 : 0;

 if ((VAR_19 == VAR_3) &&
     (VAR_11->mode == VAR_6)) {
  VAR_17 = VAR_7[VAR_19];
  VAR_16 = VAR_8[VAR_19];
 }
 if (FUNC_0(VAR_9))
  goto exit;

 if (VAR_22) {
  if (VAR_21)
   VAR_20 = (VAR_14 > VAR_15 * 4) ?
         0 : 1;
  else
   VAR_20 = (VAR_15 > VAR_14 * 4) ?
         1 : 0;

  VAR_18 = (VAR_20) ? VAR_17 : VAR_16;
  FUNC_3(VAR_10, VAR_5, VAR_18);
  VAR_10->dm.is_cur_rdlstate = VAR_20;
  VAR_10->dm.current_turbo_edca = 1;
 } else {
  if (VAR_10->dm.current_turbo_edca) {
   u8 VAR_23 = VAR_0;
   VAR_10->cfg->ops->set_hw_reg(VAR_9, VAR_1,
            (u8 *)(&VAR_23));
  }
  VAR_10->dm.current_turbo_edca = 0;
 }

exit:
 VAR_10->dm.is_any_nonbepkts = 0;
 VAR_12 = VAR_10->stats.txbytesunicast;
 VAR_13 = VAR_10->stats.rxbytesunicast;
}
