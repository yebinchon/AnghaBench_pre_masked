
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_priv {struct _adapter* papdater; } ;
struct _adapter {struct mp_priv mppriv; } ;


 int FUNC_0 (struct mp_priv*) ;

void FUNC_1(struct _adapter *VAR_0)
{
 struct mp_priv *VAR_1 = &VAR_0->mppriv;

 VAR_1->papdater = VAR_0;
 FUNC_0(VAR_1);
}
