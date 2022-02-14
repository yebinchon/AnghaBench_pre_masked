
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {scalar_t__ connect_status; scalar_t__ psstate; int driver_lock; scalar_t__ tx_pending_len; int * currenttxskb; int dev; TYPE_1__* wdev; } ;
struct TYPE_2__ {scalar_t__ iftype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct lbs_private*,int) ;
 int FUNC_3 (struct lbs_private*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct lbs_private *VAR_5,
    bool VAR_6)
{
 unsigned long VAR_7;

 if (VAR_5->connect_status != VAR_0)
  return;





 FUNC_4(1000);

 if (VAR_5->wdev->iftype == VAR_2)
  FUNC_2(VAR_5, VAR_6);


 FUNC_6(VAR_5->dev);
 FUNC_5(VAR_5->dev);


 FUNC_7(&VAR_5->driver_lock, VAR_7);
 FUNC_0(VAR_5->currenttxskb);
 VAR_5->currenttxskb = ((void*)0);
 VAR_5->tx_pending_len = 0;
 FUNC_8(&VAR_5->driver_lock, VAR_7);

 VAR_5->connect_status = VAR_1;

 if (VAR_5->psstate != VAR_4) {

  FUNC_1("disconnected, so exit PS mode\n");
  FUNC_3(VAR_5, VAR_3, 0);
 }
}
