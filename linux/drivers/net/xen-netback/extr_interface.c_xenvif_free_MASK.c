
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int dummy; } ;
struct xenvif {unsigned int num_queues; int dev; struct xenvif_queue* queues; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xenvif_queue*) ;
 int FUNC_4 (struct xenvif_queue*) ;

void FUNC_5(struct xenvif *VAR_1)
{
 struct xenvif_queue *VAR_2 = VAR_1->queues;
 unsigned int VAR_3 = VAR_1->num_queues;
 unsigned int VAR_4;

 FUNC_2(VAR_1->dev);
 FUNC_0(VAR_1->dev);

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  FUNC_4(&VAR_2[VAR_4]);
 FUNC_3(VAR_2);

 FUNC_1(VAR_0);
}
