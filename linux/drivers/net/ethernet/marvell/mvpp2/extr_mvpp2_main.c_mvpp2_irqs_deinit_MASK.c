
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_queue_vector {int irq; int * mask; } ;
struct mvpp2_port {int nqvecs; struct mvpp2_queue_vector* qvecs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mvpp2_queue_vector*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mvpp2_port *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->nqvecs; VAR_2++) {
  struct mvpp2_queue_vector *VAR_3 = VAR_1->qvecs + VAR_2;

  FUNC_2(VAR_3->irq, ((void*)0));
  FUNC_3(VAR_3->mask);
  VAR_3->mask = ((void*)0);
  FUNC_1(VAR_3->irq, VAR_0);
  FUNC_0(VAR_3->irq, VAR_3);
 }
}
