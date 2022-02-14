
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_2__ {int cur_ignore_wlan_act; int pre_ignore_wlan_act; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct btc_coexist*,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct btc_coexist *VAR_3,
      bool VAR_4, bool VAR_5)
{
 struct rtl_priv *VAR_6 = VAR_3->adapter;

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "[BTCoex], %s turn Ignore WlanAct %s\n",
   (VAR_4 ? "force to" : ""), (VAR_5 ? "ON" : "OFF"));
 VAR_2->cur_ignore_wlan_act = VAR_5;

 if (!VAR_4) {
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "[BTCoex], bPreIgnoreWlanAct = %d ",
    VAR_2->pre_ignore_wlan_act);
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "bCurIgnoreWlanAct = %d!!\n",
    VAR_2->cur_ignore_wlan_act);

  if (VAR_2->pre_ignore_wlan_act ==
      VAR_2->cur_ignore_wlan_act)
   return;
 }
 FUNC_1(VAR_3, VAR_5);

 VAR_2->pre_ignore_wlan_act = VAR_2->cur_ignore_wlan_act;
}
