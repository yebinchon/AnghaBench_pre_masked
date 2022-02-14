
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pwrctrl_priv {struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 struct pwrctrl_priv* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 struct pwrctrl_priv* VAR_1 ;
 int FUNC_1 (struct adapter*) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct pwrctrl_priv *VAR_3 =
  FUNC_0(VAR_3, VAR_2, VAR_0);
 struct adapter *VAR_4 = VAR_3->adapter;

 FUNC_1(VAR_4);
}
