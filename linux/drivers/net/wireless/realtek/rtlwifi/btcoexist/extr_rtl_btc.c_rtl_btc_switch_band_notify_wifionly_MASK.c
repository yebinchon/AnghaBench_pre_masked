
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wifi_only_cfg {int dummy; } ;
struct rtl_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wifi_only_cfg*,scalar_t__) ;
 struct wifi_only_cfg* FUNC_1 (struct rtl_priv*) ;

void FUNC_2(struct rtl_priv *VAR_1, u8 VAR_2,
      bool VAR_3)
{
 struct wifi_only_cfg *VAR_4 = FUNC_1(VAR_1);
 u8 VAR_5 = (VAR_2 == VAR_0);

 if (!VAR_4)
  return;

 FUNC_0(VAR_4, VAR_5);
}
