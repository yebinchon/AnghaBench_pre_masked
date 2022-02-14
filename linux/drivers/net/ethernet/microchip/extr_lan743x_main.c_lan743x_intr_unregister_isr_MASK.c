
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lan743x_vector {scalar_t__ flags; scalar_t__ int_mask; int * context; int * handler; int irq; } ;
struct TYPE_2__ {struct lan743x_vector* vector_list; } ;
struct lan743x_adapter {TYPE_1__ intr; } ;


 int FUNC_0 (int ,struct lan743x_vector*) ;

__attribute__((used)) static void FUNC_1(struct lan743x_adapter *VAR_0,
     int VAR_1)
{
 struct lan743x_vector *VAR_2 = &VAR_0->intr.vector_list
     [VAR_1];

 FUNC_0(VAR_2->irq, VAR_2);
 VAR_2->handler = ((void*)0);
 VAR_2->context = ((void*)0);
 VAR_2->int_mask = 0;
 VAR_2->flags = 0;
}
