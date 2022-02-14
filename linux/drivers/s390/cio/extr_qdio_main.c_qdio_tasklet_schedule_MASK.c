
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_q {int tasklet; TYPE_1__* irq_ptr; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct qdio_q *VAR_2)
{
 if (FUNC_0(VAR_2->irq_ptr->state == VAR_1)) {
  FUNC_1(&VAR_2->tasklet);
  return 0;
 }
 return -VAR_0;
}
