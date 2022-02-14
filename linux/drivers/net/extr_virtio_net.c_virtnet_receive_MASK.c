
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct virtnet_rq_stats {int packets; } ;
struct virtnet_info {int refill; scalar_t__ mergeable_rx_bufs; int big_packets; } ;
struct TYPE_8__ {int syncp; } ;
struct receive_queue {TYPE_2__ stats; TYPE_3__* vq; } ;
struct TYPE_10__ {size_t offset; } ;
struct TYPE_9__ {int num_free; TYPE_1__* vdev; } ;
struct TYPE_7__ {struct virtnet_info* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct virtnet_info*,struct receive_queue*,void*,unsigned int,void*,unsigned int*,struct virtnet_rq_stats*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct virtnet_info*,struct receive_queue*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_6__* VAR_2 ;
 void* FUNC_6 (TYPE_3__*,unsigned int*) ;
 void* FUNC_7 (TYPE_3__*,unsigned int*,void**) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(struct receive_queue *VAR_3, int VAR_4,
      unsigned int *VAR_5)
{
 struct virtnet_info *VAR_6 = VAR_3->vq->vdev->priv;
 struct virtnet_rq_stats VAR_7 = {};
 unsigned int VAR_8;
 void *VAR_9;
 int VAR_10;

 if (!VAR_6->big_packets || VAR_6->mergeable_rx_bufs) {
  void *VAR_11;

  while (VAR_7.packets < VAR_4 &&
         (VAR_9 = FUNC_7(VAR_3->vq, &VAR_8, &VAR_11))) {
   FUNC_1(VAR_6, VAR_3, VAR_9, VAR_8, VAR_11, VAR_5, &VAR_7);
   VAR_7.packets++;
  }
 } else {
  while (VAR_7.packets < VAR_4 &&
         (VAR_9 = FUNC_6(VAR_3->vq, &VAR_8)) != ((void*)0)) {
   FUNC_1(VAR_6, VAR_3, VAR_9, VAR_8, ((void*)0), VAR_5, &VAR_7);
   VAR_7.packets++;
  }
 }

 if (VAR_3->vq->num_free > FUNC_0((unsigned int)VAR_4, FUNC_8(VAR_3->vq)) / 2) {
  if (!FUNC_3(VAR_6, VAR_3, VAR_0))
   FUNC_2(&VAR_6->refill, 0);
 }

 FUNC_4(&VAR_3->stats.syncp);
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  size_t VAR_12 = VAR_2[VAR_10].offset;
  u64 *VAR_13;

  VAR_13 = (u64 *)((u8 *)&VAR_3->stats + VAR_12);
  *VAR_13 += *(u64 *)((u8 *)&VAR_7 + VAR_12);
 }
 FUNC_5(&VAR_3->stats.syncp);

 return VAR_7.packets;
}
