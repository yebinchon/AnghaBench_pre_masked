
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dvobj_priv {struct adapter* padapters; } ;
struct adapter {scalar_t__ DriverState; int rtw_wdev; struct net_device* pnetdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;

void FUNC_2(struct dvobj_priv *VAR_1)
{
 struct adapter *VAR_2 = ((void*)0);
 struct net_device *VAR_3 = ((void*)0);

 VAR_2 = VAR_1->padapters;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = VAR_2->pnetdev;

 if ((VAR_2->DriverState != VAR_0) && VAR_3)
  FUNC_1(VAR_3);
 FUNC_0(VAR_2->rtw_wdev);
}
