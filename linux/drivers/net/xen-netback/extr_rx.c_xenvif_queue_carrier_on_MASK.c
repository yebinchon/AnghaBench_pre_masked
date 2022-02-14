
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int stalled; int last_rx_time; struct xenvif* vif; } ;
struct xenvif {scalar_t__ stalled_queues; int lock; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct xenvif_queue *VAR_1)
{
 struct xenvif *VAR_2 = VAR_1->vif;

 VAR_1->last_rx_time = VAR_0;
 VAR_1->stalled = 0;


 FUNC_2(&VAR_2->lock);
 if (--VAR_2->stalled_queues == 0) {
  FUNC_0(VAR_2->dev, "Guest Rx ready");
  FUNC_1(VAR_2->dev);
 }
 FUNC_3(&VAR_2->lock);
}
