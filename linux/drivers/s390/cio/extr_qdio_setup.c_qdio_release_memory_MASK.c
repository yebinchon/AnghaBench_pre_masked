
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct qaob** aobs; scalar_t__ use_cq; } ;
struct TYPE_3__ {TYPE_2__ out; } ;
struct qdio_q {scalar_t__ slib; TYPE_1__ u; } ;
struct qdio_irq {unsigned long chsc_page; scalar_t__ qdr; struct qdio_q** output_qs; struct qdio_q** input_qs; } ;
struct qaob {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,struct qdio_q*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (struct qaob*) ;

void FUNC_4(struct qdio_irq *VAR_3)
{
 struct qdio_q *VAR_4;
 int VAR_5;





 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = VAR_3->input_qs[VAR_5];
  if (VAR_4) {
   FUNC_0((unsigned long) VAR_4->slib);
   FUNC_1(VAR_2, VAR_4);
  }
 }
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = VAR_3->output_qs[VAR_5];
  if (VAR_4) {
   if (VAR_4->u.out.use_cq) {
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
     struct qaob *VAR_7 = VAR_4->u.out.aobs[VAR_6];
     if (VAR_7) {
      FUNC_3(VAR_7);
      VAR_4->u.out.aobs[VAR_6] = ((void*)0);
     }
    }

    FUNC_2(&VAR_4->u.out);
   }
   FUNC_0((unsigned long) VAR_4->slib);
   FUNC_1(VAR_2, VAR_4);
  }
 }
 FUNC_0((unsigned long) VAR_3->qdr);
 FUNC_0(VAR_3->chsc_page);
 FUNC_0((unsigned long) VAR_3);
}
