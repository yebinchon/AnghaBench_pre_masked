
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_out_queues; scalar_t__* out_qs; } ;
struct qeth_card {TYPE_1__ qdio; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (scalar_t__,int) ;

void FUNC_2(struct qeth_card *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0, 2, "clearqdbf");

 for (VAR_1 = 0; VAR_1 < VAR_0->qdio.no_out_queues; ++VAR_1) {
  if (VAR_0->qdio.out_qs[VAR_1])
   FUNC_1(VAR_0->qdio.out_qs[VAR_1], 0);
 }
}
