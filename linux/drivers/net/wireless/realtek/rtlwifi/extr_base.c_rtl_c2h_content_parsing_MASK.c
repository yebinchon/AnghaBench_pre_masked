
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; int data; } ;
struct TYPE_3__ {struct rtl_btc_ops* btc_ops; } ;
struct rtl_priv {TYPE_2__* cfg; TYPE_1__ btcoexist; } ;
struct rtl_hal_ops {int (* get_btc_status ) () ;int (* c2h_ra_report_handler ) (struct ieee80211_hw*,int*,int) ;} ;
struct rtl_btc_ops {int (* btc_btmpinfo_notify ) (struct rtl_priv*,int*,int) ;int (* btc_btinfo_notify ) (struct rtl_priv*,int*,int) ;} ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {struct rtl_hal_ops* ops; } ;




 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int* FUNC_1 (int ) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct rtl_priv*,int*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct rtl_priv*,int*,int) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_4,
        struct sk_buff *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_4);
 struct rtl_hal_ops *VAR_7 = VAR_6->cfg->ops;
 const struct rtl_btc_ops *VAR_8 = VAR_6->btcoexist.btc_ops;
 u8 VAR_9, VAR_10;
 u8 *VAR_11 = ((void*)0);

 VAR_9 = FUNC_0(VAR_5->data);
 VAR_10 = VAR_5->len - VAR_0;
 VAR_11 = FUNC_1(VAR_5->data);

 switch (VAR_9) {
 case 131:
  FUNC_2(VAR_6, VAR_1, VAR_2, "[C2H], C2H_DBG!!\n");
  break;
 case 129:
  FUNC_2(VAR_6, VAR_1, VAR_3,
    "[C2H], C2H_TXBF!!\n");
  break;
 case 128:
  FUNC_4(VAR_4, VAR_11, VAR_10);
  break;
 case 130:
  if (VAR_7->c2h_ra_report_handler)
   VAR_7->c2h_ra_report_handler(VAR_4, VAR_11, VAR_10);
  break;
 case 133:
  FUNC_2(VAR_6, VAR_1, VAR_3,
    "[C2H], C2H_BT_INFO!!\n");
  if (VAR_6->cfg->ops->get_btc_status())
   VAR_8->btc_btinfo_notify(VAR_6, VAR_11, VAR_10);
  break;
 case 132:
  FUNC_2(VAR_6, VAR_1, VAR_3,
    "[C2H], C2H_BT_MP!!\n");
  if (VAR_6->cfg->ops->get_btc_status())
   VAR_8->btc_btmpinfo_notify(VAR_6, VAR_11, VAR_10);
  break;
 default:
  FUNC_2(VAR_6, VAR_1, VAR_3,
    "[C2H], Unknown packet!! cmd_id(%#X)!\n", VAR_9);
  break;
 }
}
