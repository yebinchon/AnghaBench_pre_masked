
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct _adapter {int recvpriv; int stapriv; int xmitpriv; int mlmepriv; int evtpriv; int cmdpriv; struct net_device* pnetdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct _adapter*) ;
 int FUNC_5 (struct _adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct _adapter*) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct _adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->pnetdev;

 FUNC_6(&VAR_0->cmdpriv);
 FUNC_7(&VAR_0->evtpriv);
 FUNC_5(VAR_0);
 FUNC_9(&VAR_0->mlmepriv);
 FUNC_8(VAR_0);
 FUNC_0(&VAR_0->xmitpriv);
 FUNC_2(&VAR_0->stapriv);
 FUNC_1(&VAR_0->recvpriv);
 FUNC_4(VAR_0);
 if (VAR_1)
  FUNC_3(VAR_1);
}
