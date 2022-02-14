
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int consume_size; int produce_size; } ;
struct qp_guest_endpoint {int resource; TYPE_1__ qp; int consume_q; int produce_q; int ppn_set; } ;


 int FUNC_0 (struct qp_guest_endpoint*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct qp_guest_endpoint *VAR_0)
{
 FUNC_2(&VAR_0->ppn_set);
 FUNC_1(VAR_0->produce_q, VAR_0->consume_q);
 FUNC_3(VAR_0->produce_q, VAR_0->qp.produce_size);
 FUNC_3(VAR_0->consume_q, VAR_0->qp.consume_size);

 FUNC_4(&VAR_0->resource);

 FUNC_0(VAR_0);
}
