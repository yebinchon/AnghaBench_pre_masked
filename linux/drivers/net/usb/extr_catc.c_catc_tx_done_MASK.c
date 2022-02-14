
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct urb {int status; int actual_length; TYPE_2__* dev; struct catc* context; } ;
struct catc {int tx_lock; TYPE_3__* netdev; int flags; scalar_t__ tx_ptr; } ;
struct TYPE_5__ {int tx_errors; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct catc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_2)
{
 struct catc *VAR_3 = VAR_2->context;
 unsigned long VAR_4;
 int VAR_5, VAR_6 = VAR_2->status;

 if (VAR_6 == -VAR_0) {
  FUNC_2(&VAR_2->dev->dev, "Tx Reset.\n");
  VAR_2->status = 0;
  FUNC_3(VAR_3->netdev);
  VAR_3->netdev->stats.tx_errors++;
  FUNC_1(VAR_1, &VAR_3->flags);
  FUNC_4(VAR_3->netdev);
  return;
 }

 if (VAR_6) {
  FUNC_2(&VAR_2->dev->dev, "tx_done, status %d, length %d\n",
   VAR_6, VAR_2->actual_length);
  return;
 }

 FUNC_5(&VAR_3->tx_lock, VAR_4);

 if (VAR_3->tx_ptr) {
  VAR_5 = FUNC_0(VAR_3);
  if (FUNC_7(VAR_5 < 0))
   FUNC_1(VAR_1, &VAR_3->flags);
 } else {
  FUNC_1(VAR_1, &VAR_3->flags);
 }

 FUNC_4(VAR_3->netdev);

 FUNC_6(&VAR_3->tx_lock, VAR_4);
}
