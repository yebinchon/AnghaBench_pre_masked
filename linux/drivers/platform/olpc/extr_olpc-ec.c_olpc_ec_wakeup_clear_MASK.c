
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct olpc_ec_priv {int ec_wakeup_mask; } ;


 scalar_t__ FUNC_0 (int) ;
 struct olpc_ec_priv* VAR_0 ;

void FUNC_1(u16 VAR_1)
{
 struct olpc_ec_priv *VAR_2 = VAR_0;

 if (FUNC_0(!VAR_2))
  return;

 VAR_2->ec_wakeup_mask &= ~VAR_1;
}
