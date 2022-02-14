
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sl {TYPE_3__* element; } ;
struct TYPE_5__ {int * val; } ;
struct qdio_q {scalar_t__* sbal; struct sl* sl; TYPE_2__ slsb; TYPE_1__* slib; scalar_t__ is_input_q; } ;
struct qdio_irq {struct qdio_q** output_qs; struct qdio_q** input_qs; } ;
struct qdio_buffer {int dummy; } ;
struct TYPE_6__ {unsigned long sbal; } ;
struct TYPE_4__ {unsigned long nsliba; unsigned long sla; unsigned long slsba; } ;


 int FUNC_0 (struct qdio_q**,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct qdio_q *VAR_2, struct qdio_irq *VAR_3,
    struct qdio_buffer **VAR_4, int VAR_5)
{
 struct qdio_q *VAR_6;
 int VAR_7;

 FUNC_0(&VAR_2, sizeof(void *));
 VAR_2->sl = (struct sl *)((char *)VAR_2->slib + VAR_0 / 2);


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_2->sbal[VAR_7] = *VAR_4++;


 if (VAR_5 > 0) {
  VAR_6 = (VAR_2->is_input_q) ? VAR_3->input_qs[VAR_5 - 1]
   : VAR_3->output_qs[VAR_5 - 1];
  VAR_6->slib->nsliba = (unsigned long)VAR_2->slib;
 }

 VAR_2->slib->sla = (unsigned long)VAR_2->sl;
 VAR_2->slib->slsba = (unsigned long)&VAR_2->slsb.val[0];


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_2->sl->element[VAR_7].sbal = (unsigned long)VAR_2->sbal[VAR_7];
}
