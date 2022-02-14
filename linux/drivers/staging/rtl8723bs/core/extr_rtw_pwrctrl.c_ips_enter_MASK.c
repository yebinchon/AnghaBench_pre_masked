
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {int lock; int ips_mode_req; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*) ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct adapter *VAR_0)
{
 struct pwrctrl_priv *VAR_1 = FUNC_1(VAR_0);


 FUNC_2(VAR_0, VAR_1->ips_mode_req);

 FUNC_3(&VAR_1->lock);
 FUNC_0(VAR_0);
 FUNC_4(&VAR_1->lock);
}
