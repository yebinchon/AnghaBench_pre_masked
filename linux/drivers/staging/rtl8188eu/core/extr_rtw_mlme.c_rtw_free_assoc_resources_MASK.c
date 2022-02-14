
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct mlme_priv {TYPE_1__ scanned_queue; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct adapter *VAR_0)
{
 struct mlme_priv *VAR_1 = &VAR_0->mlmepriv;

 FUNC_1(&VAR_1->scanned_queue.lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->scanned_queue.lock);
}
