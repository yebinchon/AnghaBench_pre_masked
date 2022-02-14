
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwrctrl_priv {scalar_t__ ips_deny_time; } ;
struct adapter {int dummy; } ;


 struct pwrctrl_priv* FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

inline void FUNC_2(struct adapter *VAR_1, u32 VAR_2)
{
 struct pwrctrl_priv *VAR_3 = FUNC_0(VAR_1);
 VAR_3->ips_deny_time = VAR_0 + FUNC_1(VAR_2);
}
