
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_2__ {int under_ips; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_6 (struct btc_coexist*) ;

void FUNC_7(struct btc_coexist *VAR_6, u8 VAR_7)
{
 struct rtl_priv *VAR_8 = VAR_6->adapter;

 if (VAR_0 == VAR_7) {
  FUNC_0(VAR_8, VAR_2, VAR_3,
    "[BTCoex], IPS ENTER notify\n");
  VAR_5->under_ips = 1;
  FUNC_5(VAR_6);
  FUNC_2(VAR_6, VAR_4, 1);
  FUNC_1(VAR_6);
 } else if (VAR_1 == VAR_7) {
  FUNC_0(VAR_8, VAR_2, VAR_3,
    "[BTCoex], IPS LEAVE notify\n");
  VAR_5->under_ips = 0;
  FUNC_6(VAR_6);
  FUNC_3(VAR_6);
  FUNC_4(VAR_6);
 }
}
