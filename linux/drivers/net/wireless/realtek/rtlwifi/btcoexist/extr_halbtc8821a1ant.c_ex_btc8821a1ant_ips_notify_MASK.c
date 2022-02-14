
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;scalar_t__ stop_coex_dm; scalar_t__ manual_control; struct rtl_priv* adapter; } ;
struct TYPE_2__ {int under_ips; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ,int ) ;
 int FUNC_2 (struct btc_coexist*) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*,int,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int ) ;
 int FUNC_6 (struct btc_coexist*) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_8 (struct btc_coexist*,int ,int*) ;

void FUNC_9(struct btc_coexist *VAR_8, u8 VAR_9)
{
 struct rtl_priv *VAR_10 = VAR_8->adapter;
 bool VAR_11 = 0;

 if (VAR_8->manual_control || VAR_8->stop_coex_dm)
  return;
 VAR_8->btc_get(VAR_8, VAR_1, &VAR_11);
 if (VAR_11) {
  FUNC_0(VAR_10, VAR_4, VAR_5,
    "[BTCoex], RunCoexistMechanism(), return for 5G <===\n");
  FUNC_2(VAR_8);
  return;
 }

 if (VAR_2 == VAR_9) {
  FUNC_0(VAR_10, VAR_4, VAR_5,
    "[BTCoex], IPS ENTER notify\n");
  VAR_7->under_ips = 1;
  FUNC_7(VAR_8,
       VAR_0, 0, 1);

  FUNC_5(VAR_8, VAR_6, 0, 0);
  FUNC_1(VAR_8,
        VAR_6, 0);
 } else if (VAR_3 == VAR_9) {
  FUNC_0(VAR_10, VAR_4, VAR_5,
    "[BTCoex], IPS LEAVE notify\n");
  VAR_7->under_ips = 0;

  FUNC_4(VAR_8, 0, 0);
  FUNC_3(VAR_8);
  FUNC_6(VAR_8);
 }
}
