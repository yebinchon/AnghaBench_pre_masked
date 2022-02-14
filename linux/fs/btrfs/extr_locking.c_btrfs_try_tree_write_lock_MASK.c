
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {int lock_owner; int lock; int blocking_readers; scalar_t__ blocking_writers; } ;
struct TYPE_2__ {int pid; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct extent_buffer *VAR_1)
{
 if (VAR_1->blocking_writers || FUNC_0(&VAR_1->blocking_readers))
  return 0;

 FUNC_4(&VAR_1->lock);
 if (VAR_1->blocking_writers || FUNC_0(&VAR_1->blocking_readers)) {
  FUNC_5(&VAR_1->lock);
  return 0;
 }
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 VAR_1->lock_owner = VAR_0->pid;
 FUNC_3(VAR_1);
 return 1;
}
