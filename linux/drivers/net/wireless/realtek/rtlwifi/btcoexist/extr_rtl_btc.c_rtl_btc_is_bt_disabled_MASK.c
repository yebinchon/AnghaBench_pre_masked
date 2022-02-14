
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct TYPE_2__ {scalar_t__ bt_disabled; } ;
struct btc_coexist {TYPE_1__ bt_info; } ;


 struct btc_coexist* FUNC_0 (struct rtl_priv*) ;

bool FUNC_1(struct rtl_priv *VAR_0)
{
 struct btc_coexist *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return 1;


 if (VAR_1->bt_info.bt_disabled)
  return 1;
 else
  return 0;
}
