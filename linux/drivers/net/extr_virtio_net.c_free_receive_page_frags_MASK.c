
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtnet_info {int max_queue_pairs; TYPE_2__* rq; } ;
struct TYPE_3__ {scalar_t__ page; } ;
struct TYPE_4__ {TYPE_1__ alloc_frag; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct virtnet_info *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->max_queue_pairs; VAR_1++)
  if (VAR_0->rq[VAR_1].alloc_frag.page)
   FUNC_0(VAR_0->rq[VAR_1].alloc_frag.page);
}
