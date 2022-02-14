
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {scalar_t__ lock_owner; scalar_t__ blocking_writers; int lock; scalar_t__ lock_nested; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct extent_buffer *VAR_1)
{
 FUNC_2(VAR_1);





 if (VAR_1->lock_nested && VAR_0->pid == VAR_1->lock_owner)
  return;
 if (VAR_1->blocking_writers == 0) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
  VAR_1->blocking_writers++;
  FUNC_3(&VAR_1->lock);
 }
}
