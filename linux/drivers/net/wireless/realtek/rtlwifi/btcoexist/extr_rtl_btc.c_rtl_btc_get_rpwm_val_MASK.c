
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct TYPE_2__ {int rpwm_val; } ;
struct btc_coexist {TYPE_1__ bt_info; } ;


 struct btc_coexist* FUNC_0 (struct rtl_priv*) ;

u8 FUNC_1(struct rtl_priv *VAR_0)
{
 struct btc_coexist *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return 0;

 return VAR_1->bt_info.rpwm_val;
}
