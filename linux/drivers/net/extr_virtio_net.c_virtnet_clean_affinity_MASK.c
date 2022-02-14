
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {int affinity_hint_set; int max_queue_pairs; TYPE_2__* sq; TYPE_1__* rq; } ;
struct TYPE_4__ {int vq; } ;
struct TYPE_3__ {int vq; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct virtnet_info *VAR_0)
{
 int VAR_1;

 if (VAR_0->affinity_hint_set) {
  for (VAR_1 = 0; VAR_1 < VAR_0->max_queue_pairs; VAR_1++) {
   FUNC_0(VAR_0->rq[VAR_1].vq, ((void*)0));
   FUNC_0(VAR_0->sq[VAR_1].vq, ((void*)0));
  }

  VAR_0->affinity_hint_set = 0;
 }
}
