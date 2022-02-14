
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*) ;
 TYPE_1__* VAR_4 ;

void FUNC_2(struct btc_coexist *VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = VAR_5->adapter;

 if (VAR_0 == VAR_6) {
  FUNC_0(VAR_7, VAR_2, VAR_3,
    "[BTCoex], IPS ENTER notify\n");
  VAR_4->under_ips = 1;
  FUNC_1(VAR_5);
 } else if (VAR_1 == VAR_6) {
  FUNC_0(VAR_7, VAR_2, VAR_3,
    "[BTCoex], IPS LEAVE notify\n");
  VAR_4->under_ips = 0;
 }
}
