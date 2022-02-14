
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;

void FUNC_1(struct btc_coexist *VAR_3,
        u8 VAR_4)
{
 struct rtl_priv *VAR_5 = VAR_3->adapter;

 if (VAR_4 == VAR_0)
  FUNC_0(VAR_5, VAR_1, VAR_2,
    "[BTCoex], DHCP Packet notify\n");
}
