
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwrctrl_priv {int lock; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*) ;
 struct pwrctrl_priv* FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct adapter *VAR_2)
{
 struct pwrctrl_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (!FUNC_3(VAR_2))
  return VAR_1;

 FUNC_4(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_2);
 FUNC_5(&VAR_3->lock);

 if (VAR_1 == VAR_4)
  FUNC_2(VAR_2, VAR_0);

 return VAR_4;
}
