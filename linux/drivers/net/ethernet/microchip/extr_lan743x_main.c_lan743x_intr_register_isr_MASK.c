
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lan743x_vector {int flags; int vector_index; int int_mask; int * context; int * handler; int irq; struct lan743x_adapter* adapter; } ;
struct TYPE_2__ {struct lan743x_vector* vector_list; } ;
struct lan743x_adapter {TYPE_1__ intr; } ;
typedef int * lan743x_vector_handler ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,struct lan743x_vector*) ;

__attribute__((used)) static int FUNC_1(struct lan743x_adapter *VAR_4,
         int VAR_5, u32 VAR_6,
         u32 VAR_7,
         lan743x_vector_handler VAR_8,
         void *VAR_9)
{
 struct lan743x_vector *VAR_10 = &VAR_4->intr.vector_list
     [VAR_5];
 int VAR_11;

 VAR_10->adapter = VAR_4;
 VAR_10->flags = VAR_6;
 VAR_10->vector_index = VAR_5;
 VAR_10->int_mask = VAR_7;
 VAR_10->handler = VAR_8;
 VAR_10->context = VAR_9;

 VAR_11 = FUNC_0(VAR_10->irq,
     VAR_3,
     (VAR_6 & VAR_2) ?
     VAR_1 : 0, VAR_0, VAR_10);
 if (VAR_11) {
  VAR_10->handler = ((void*)0);
  VAR_10->context = ((void*)0);
  VAR_10->int_mask = 0;
  VAR_10->flags = 0;
 }
 return VAR_11;
}
