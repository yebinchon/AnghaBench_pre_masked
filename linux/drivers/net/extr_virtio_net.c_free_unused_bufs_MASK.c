
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {int dummy; } ;
struct virtnet_info {int max_queue_pairs; TYPE_2__* rq; scalar_t__ big_packets; scalar_t__ mergeable_rx_bufs; TYPE_1__* sq; } ;
struct TYPE_4__ {struct virtqueue* vq; } ;
struct TYPE_3__ {struct virtqueue* vq; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_2__*,void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (struct virtqueue*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct virtnet_info *VAR_0)
{
 void *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->max_queue_pairs; VAR_2++) {
  struct virtqueue *VAR_3 = VAR_0->sq[VAR_2].vq;
  while ((VAR_1 = FUNC_6(VAR_3)) != ((void*)0)) {
   if (!FUNC_2(VAR_1))
    FUNC_0(VAR_1);
   else
    FUNC_7(FUNC_3(VAR_1));
  }
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->max_queue_pairs; VAR_2++) {
  struct virtqueue *VAR_4 = VAR_0->rq[VAR_2].vq;

  while ((VAR_1 = FUNC_6(VAR_4)) != ((void*)0)) {
   if (VAR_0->mergeable_rx_bufs) {
    FUNC_4(FUNC_5(VAR_1));
   } else if (VAR_0->big_packets) {
    FUNC_1(&VAR_0->rq[VAR_2], VAR_1);
   } else {
    FUNC_4(FUNC_5(VAR_1));
   }
  }
 }
}
