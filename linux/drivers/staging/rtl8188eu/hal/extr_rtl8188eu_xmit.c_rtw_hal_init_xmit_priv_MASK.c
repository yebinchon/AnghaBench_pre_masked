
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int xmit_tasklet; } ;
struct adapter {struct xmit_priv xmitpriv; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,void (*) (unsigned long),unsigned long) ;

s32 FUNC_1(struct adapter *VAR_2)
{
 struct xmit_priv *VAR_3 = &VAR_2->xmitpriv;

 FUNC_0(&VAR_3->xmit_tasklet,
       (void(*)(unsigned long))VAR_1,
       (unsigned long)VAR_2);
 return VAR_0;
}
