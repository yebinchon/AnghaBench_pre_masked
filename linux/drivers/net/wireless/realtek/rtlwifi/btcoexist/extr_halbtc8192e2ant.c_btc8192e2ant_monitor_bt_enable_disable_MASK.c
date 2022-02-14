
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int high_priority_tx; int high_priority_rx; int low_priority_tx; int low_priority_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct btc_coexist*,int ,int*) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct btc_coexist
         *VAR_4)
{
 struct rtl_priv *VAR_5 = VAR_4->adapter;
 static bool VAR_6;
 static u32 VAR_7;
 bool VAR_8 = 1, VAR_9 = 0;



 if (VAR_3->high_priority_tx == 0 &&
     VAR_3->high_priority_rx == 0 &&
     VAR_3->low_priority_tx == 0 &&
     VAR_3->low_priority_rx == 0)
  VAR_8 = 0;

 if (VAR_3->high_priority_tx == 0xffff &&
     VAR_3->high_priority_rx == 0xffff &&
     VAR_3->low_priority_tx == 0xffff &&
     VAR_3->low_priority_rx == 0xffff)
  VAR_8 = 0;

 if (VAR_8) {
  VAR_7 = 0;
  VAR_9 = 0;
  VAR_4->btc_set(VAR_4, VAR_0,
       &VAR_9);
  FUNC_0(VAR_5, VAR_1, VAR_2,
    "[BTCoex], BT is enabled !!\n");
 } else {
  VAR_7++;
  FUNC_0(VAR_5, VAR_1, VAR_2,
    "[BTCoex], bt all counters = 0, %d times!!\n",
    VAR_7);
  if (VAR_7 >= 2) {
   VAR_9 = 1;
   VAR_4->btc_set(VAR_4, VAR_0,
        &VAR_9);
   FUNC_0(VAR_5, VAR_1, VAR_2,
     "[BTCoex], BT is disabled !!\n");
  }
 }
 if (VAR_6 != VAR_9) {
  FUNC_0(VAR_5, VAR_1, VAR_2,
    "[BTCoex], BT is from %s to %s!!\n",
    (VAR_6 ? "disabled" : "enabled"),
    (VAR_9 ? "disabled" : "enabled"));
  VAR_6 = VAR_9;
 }
}
