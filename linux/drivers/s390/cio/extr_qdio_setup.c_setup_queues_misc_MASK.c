
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slib {int mask; int nr; int entry; int * handler; struct qdio_irq* irq_ptr; struct slib* slib; } ;
struct qdio_q {int mask; int nr; int entry; int * handler; struct qdio_irq* irq_ptr; struct qdio_q* slib; } ;
struct qdio_irq {int dummy; } ;
typedef int qdio_handler_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct slib*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct qdio_q *VAR_1, struct qdio_irq *VAR_2,
         qdio_handler_t *VAR_3, int VAR_4)
{
 struct slib *VAR_5 = VAR_1->slib;


 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_1(VAR_5, 0, VAR_0);
 VAR_1->slib = VAR_5;
 VAR_1->irq_ptr = VAR_2;
 VAR_1->mask = 1 << (31 - VAR_4);
 VAR_1->nr = VAR_4;
 VAR_1->handler = VAR_3;
 FUNC_0(&VAR_1->entry);
}
