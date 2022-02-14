
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtnet_info {int max_queue_pairs; TYPE_1__* ctrl; TYPE_1__* sq; TYPE_1__* rq; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct virtnet_info *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_queue_pairs; VAR_1++) {
  FUNC_1(&VAR_0->rq[VAR_1].napi);
  FUNC_2(&VAR_0->rq[VAR_1].napi);
  FUNC_2(&VAR_0->sq[VAR_1].napi);
 }




 FUNC_3();

 FUNC_0(VAR_0->rq);
 FUNC_0(VAR_0->sq);
 FUNC_0(VAR_0->ctrl);
}
