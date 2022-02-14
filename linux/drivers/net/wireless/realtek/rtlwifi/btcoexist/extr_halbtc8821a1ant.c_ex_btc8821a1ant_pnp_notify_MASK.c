
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int stop_coex_dm; int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int under_ips; int under_lps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*,int,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int ) ;
 int FUNC_7 (struct btc_coexist*) ;
 int FUNC_8 (struct btc_coexist*,int ,int,int) ;
 TYPE_1__* VAR_8 ;
 int FUNC_9 (struct btc_coexist*,int ,int*) ;

void FUNC_10(struct btc_coexist *VAR_9, u8 VAR_10)
{
 struct rtl_priv *VAR_11 = VAR_9->adapter;
 bool VAR_12 = 0;

 VAR_9->btc_get(VAR_9, VAR_1, &VAR_12);
 if (VAR_12) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], RunCoexistMechanism(), return for 5G <===\n");
  FUNC_2(VAR_9);
  return;
 }

 FUNC_0(VAR_11, VAR_5, VAR_6,
   "[BTCoex], Pnp notify\n");

 if (VAR_3 == VAR_10) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], Pnp notify to SLEEP\n");



  VAR_8->under_ips = 0;
  VAR_8->under_lps = 0;
  VAR_9->stop_coex_dm = 1;
  FUNC_5(VAR_9, VAR_2,
           0x0, 0x0);
  FUNC_6(VAR_9, VAR_7, 0, 0);
  FUNC_1(VAR_9, VAR_7, 2);
  FUNC_8(VAR_9, VAR_0, 0,
       1);
 } else if (VAR_4 == VAR_10) {
  FUNC_0(VAR_11, VAR_5, VAR_6,
    "[BTCoex], Pnp notify to WAKE UP\n");
  VAR_9->stop_coex_dm = 0;
  FUNC_4(VAR_9, 0, 0);
  FUNC_3(VAR_9);
  FUNC_7(VAR_9);
 }
}
