
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {scalar_t__ lock_owner; int lock; int blocking_readers; scalar_t__ lock_nested; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct extent_buffer*) ;

void FUNC_5(struct extent_buffer *VAR_1)
{
 FUNC_4(VAR_1);





 if (VAR_1->lock_nested && VAR_0->pid == VAR_1->lock_owner)
  return;
 FUNC_2(VAR_1);
 FUNC_0(&VAR_1->blocking_readers);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->lock);
}
