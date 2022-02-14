
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int * pa_tx; int * va_tx; int pa_rx; int va_rx; } ;
struct cfspi {int wq; int wait; int state; TYPE_1__ xfer; int * ndev; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cfspi*) ;
 int FUNC_2 (struct cfspi*,int ,int ) ;
 int FUNC_3 (int *) ;
 struct cfspi* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_2)
{
 struct cfspi *VAR_3 = FUNC_4(VAR_2);


 FUNC_6(&VAR_1);
 FUNC_3(&VAR_3->list);
 FUNC_7(&VAR_1);

 VAR_3->ndev = ((void*)0);

 FUNC_2(VAR_3, VAR_3->xfer.va_rx, VAR_3->xfer.pa_rx);
 FUNC_2(VAR_3, VAR_3->xfer.va_tx[0], VAR_3->xfer.pa_tx[0]);
 FUNC_5(VAR_0, &VAR_3->state);
 FUNC_8(&VAR_3->wait);
 FUNC_0(VAR_3->wq);

 FUNC_1(VAR_3);
 return;
}
