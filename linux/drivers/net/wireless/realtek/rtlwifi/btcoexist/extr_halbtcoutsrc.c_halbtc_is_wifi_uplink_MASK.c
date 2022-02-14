
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tx_busy_traffic; } ;
struct rtl_priv {TYPE_1__ link_info; } ;



bool FUNC_0(struct rtl_priv *VAR_0)
{
 struct rtl_priv *VAR_1 = VAR_0;

 if (VAR_1->link_info.tx_busy_traffic)
  return 1;
 else
  return 0;
}
