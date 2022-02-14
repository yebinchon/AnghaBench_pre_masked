
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int stalled; struct xenvif* vif; } ;
struct xenvif {int lock; int dev; int stalled_queues; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct xenvif_queue *VAR_0)
{
 struct xenvif *VAR_1 = VAR_0->vif;

 VAR_0->stalled = 1;


 FUNC_2(&VAR_1->lock);
 if (VAR_1->stalled_queues++ == 0) {
  FUNC_0(VAR_1->dev, "Guest Rx stalled");
  FUNC_1(VAR_1->dev);
 }
 FUNC_3(&VAR_1->lock);
}
