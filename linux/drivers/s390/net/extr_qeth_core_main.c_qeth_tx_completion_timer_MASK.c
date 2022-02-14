
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct qeth_qdio_out_q {int napi; } ;


 int FUNC_0 (struct qeth_qdio_out_q*,int ) ;
 int VAR_0 ;
 struct qeth_qdio_out_q* FUNC_1 (int ,struct timer_list*,struct timer_list*) ;
 int FUNC_2 (int *) ;
 struct qeth_qdio_out_q* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct qeth_qdio_out_q *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_2);

 FUNC_2(&VAR_3->napi);
 FUNC_0(VAR_3, VAR_0);
}
