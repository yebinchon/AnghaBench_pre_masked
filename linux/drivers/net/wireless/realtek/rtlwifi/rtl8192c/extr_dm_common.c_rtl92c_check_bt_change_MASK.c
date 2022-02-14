
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ bt_edca_dl; scalar_t__ bt_edca_ul; int bt_rfreg_origin_1e; scalar_t__ bt_ant_isolation; scalar_t__ bt_cur_state; scalar_t__ bt_coexistence; } ;
struct rtl_priv {TYPE_3__ btcoexist; TYPE_2__* cfg; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* set_rfreg ) (struct ieee80211_hw*,int ,int,int,int ) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,int ,int ) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_4(VAR_2);
 struct rtl_hal *VAR_4 = FUNC_3(FUNC_4(VAR_2));
 u8 VAR_5 = 0;

 if (FUNC_1(VAR_4->version) &&
     VAR_3->btcoexist.bt_coexistence)
  VAR_5 |= FUNC_0(5);
 if (VAR_3->btcoexist.bt_cur_state) {
  if (VAR_3->btcoexist.bt_ant_isolation)
   FUNC_2(VAR_2, VAR_5);
 } else {
  FUNC_5(VAR_3, VAR_0, VAR_5);
  VAR_3->cfg->ops->set_rfreg(VAR_2, VAR_1, 0x1e, 0xf0,
    VAR_3->btcoexist.bt_rfreg_origin_1e);

  VAR_3->btcoexist.bt_edca_ul = 0;
  VAR_3->btcoexist.bt_edca_dl = 0;
 }
}
