
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * out_bufstates; int * c_q; int no_in_queues; } ;
struct qeth_card {TYPE_1__ qdio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct qeth_card *VAR_0)
{
 if (VAR_0->qdio.c_q) {
  --VAR_0->qdio.no_in_queues;
  FUNC_1(VAR_0->qdio.c_q);
  VAR_0->qdio.c_q = ((void*)0);
 }
 FUNC_0(VAR_0->qdio.out_bufstates);
 VAR_0->qdio.out_bufstates = ((void*)0);
}
