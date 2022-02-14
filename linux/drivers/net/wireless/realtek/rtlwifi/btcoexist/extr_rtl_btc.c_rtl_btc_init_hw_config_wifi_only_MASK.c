
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wifi_only_cfg {int dummy; } ;
struct rtl_priv {int dummy; } ;


 int FUNC_0 (struct wifi_only_cfg*) ;
 struct wifi_only_cfg* FUNC_1 (struct rtl_priv*) ;

void FUNC_2(struct rtl_priv *VAR_0)
{
 struct wifi_only_cfg *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return;

 FUNC_0(VAR_1);
}
