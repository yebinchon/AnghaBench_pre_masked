
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {int lock_nested; scalar_t__ lock_owner; int read_lock_wq; int blocking_readers; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_6 (struct extent_buffer*) ;

void FUNC_7(struct extent_buffer *VAR_1)
{
 FUNC_6(VAR_1);






 if (VAR_1->lock_nested && VAR_0->pid == VAR_1->lock_owner) {
  VAR_1->lock_nested = 0;
  return;
 }
 FUNC_3(VAR_1);
 FUNC_0(FUNC_2(&VAR_1->blocking_readers) == 0);

 if (FUNC_1(&VAR_1->blocking_readers))
  FUNC_5(&VAR_1->read_lock_wq);
 FUNC_4(VAR_1);
}
