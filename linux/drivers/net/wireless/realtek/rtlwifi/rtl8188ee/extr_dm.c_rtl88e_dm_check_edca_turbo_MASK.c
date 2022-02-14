
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
typedef scalar_t__ u32 ;
struct TYPE_10__ {int txbytesunicast; int rxbytesunicast; } ;
struct TYPE_9__ {int current_turbo_edca; int is_any_nonbepkts; int is_cur_rdlstate; int disable_framebursting; } ;
struct TYPE_6__ {scalar_t__ bt_edca_ul; scalar_t__ bt_edca_dl; } ;
struct rtl_priv {TYPE_5__ stats; TYPE_4__ dm; TYPE_3__* cfg; TYPE_1__ btcoexist; } ;
struct rtl_mac {scalar_t__ link_state; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ,scalar_t__) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_4);
 struct rtl_mac *VAR_6 = FUNC_0(FUNC_1(VAR_4));
 static u64 VAR_7;
 static u64 VAR_8;
 static u32 VAR_9;
 static u32 VAR_10;
 u64 VAR_11 = 0;
 u64 VAR_12 = 0;
 u32 VAR_13 = 0x5ea42b;
 u32 VAR_14 = 0x5ea42b;
 bool VAR_15 = 0;

 if ((VAR_9 != VAR_5->btcoexist.bt_edca_ul) ||
     (VAR_10 != VAR_5->btcoexist.bt_edca_dl)) {
  VAR_5->dm.current_turbo_edca = 0;
  VAR_9 = VAR_5->btcoexist.bt_edca_ul;
  VAR_10 = VAR_5->btcoexist.bt_edca_dl;
 }

 if (VAR_5->btcoexist.bt_edca_ul != 0) {
  VAR_13 = VAR_5->btcoexist.bt_edca_ul;
  VAR_15 = 1;
 }

 if (VAR_5->btcoexist.bt_edca_dl != 0) {
  VAR_13 = VAR_5->btcoexist.bt_edca_dl;
  VAR_15 = 1;
 }

 if (VAR_6->link_state != VAR_2) {
  VAR_5->dm.current_turbo_edca = 0;
  return;
 }
 if ((VAR_15) ||
     ((!VAR_5->dm.is_any_nonbepkts) &&
      (!VAR_5->dm.disable_framebursting))) {

  VAR_11 = VAR_5->stats.txbytesunicast - VAR_7;
  VAR_12 = VAR_5->stats.rxbytesunicast - VAR_8;

  if (VAR_12 > 4 * VAR_11) {
   if (!VAR_5->dm.is_cur_rdlstate ||
       !VAR_5->dm.current_turbo_edca) {
    FUNC_2(VAR_5,
      VAR_3,
      VAR_14);
    VAR_5->dm.is_cur_rdlstate = 1;
   }
  } else {
   if (VAR_5->dm.is_cur_rdlstate ||
       !VAR_5->dm.current_turbo_edca) {
    FUNC_2(VAR_5,
      VAR_3,
      VAR_13);
    VAR_5->dm.is_cur_rdlstate = 0;
   }
  }
  VAR_5->dm.current_turbo_edca = 1;
 } else {
  if (VAR_5->dm.current_turbo_edca) {
   u8 VAR_16 = VAR_0;

   VAR_5->cfg->ops->set_hw_reg(VAR_4,
            VAR_1,
            &VAR_16);
   VAR_5->dm.current_turbo_edca = 0;
  }
 }

 VAR_5->dm.is_any_nonbepkts = 0;
 VAR_7 = VAR_5->stats.txbytesunicast;
 VAR_8 = VAR_5->stats.rxbytesunicast;
}
