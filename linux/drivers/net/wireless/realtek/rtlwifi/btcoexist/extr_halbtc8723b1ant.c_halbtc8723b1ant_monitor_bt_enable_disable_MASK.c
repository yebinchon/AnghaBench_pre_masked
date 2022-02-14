
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int high_priority_tx; int high_priority_rx; int low_priority_tx; int low_priority_rx; int bt_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char*,char*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct btc_coexist
            *VAR_6)
{
 struct rtl_priv *VAR_7 = VAR_6->adapter;
 static u32 VAR_8;
 bool VAR_9 = 1, VAR_10 = 0;

 if (VAR_5->high_priority_tx == 0 &&
     VAR_5->high_priority_rx == 0 && VAR_5->low_priority_tx == 0 &&
     VAR_5->low_priority_rx == 0)
  VAR_9 = 0;
 if (VAR_5->high_priority_tx == 0xffff &&
     VAR_5->high_priority_rx == 0xffff &&
     VAR_5->low_priority_tx == 0xffff &&
     VAR_5->low_priority_rx == 0xffff)
  VAR_9 = 0;
 if (VAR_9) {
  VAR_8 = 0;
  VAR_10 = 0;
 } else {
  VAR_8++;
  if (VAR_8 >= 2)
   VAR_10 = 1;
 }
 if (VAR_5->bt_disabled != VAR_10) {
  FUNC_0(VAR_7, VAR_3, VAR_4,
    "[BTCoex], BT is from %s to %s!!\n",
    (VAR_5->bt_disabled ? "disabled" : "enabled"),
    (VAR_10 ? "disabled" : "enabled"));

  VAR_5->bt_disabled = VAR_10;
  VAR_6->btc_set(VAR_6, VAR_2,
       &VAR_10);
  if (VAR_10) {
   FUNC_1(VAR_6);
   VAR_6->btc_set(VAR_6, VAR_0,
        ((void*)0));
   VAR_6->btc_set(VAR_6, VAR_1,
        ((void*)0));
  }
 }
}
