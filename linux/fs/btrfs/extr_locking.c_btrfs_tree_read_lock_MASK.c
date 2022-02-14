
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct extent_buffer {scalar_t__ blocking_writers; scalar_t__ lock_owner; int lock_nested; int write_lock_wq; int lock; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct extent_buffer*,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int) ;

void FUNC_9(struct extent_buffer *VAR_1)
{
 u64 VAR_2 = 0;

 if (FUNC_7())
  VAR_2 = FUNC_3();
again:
 FUNC_4(&VAR_1->lock);
 FUNC_0(VAR_1->blocking_writers == 0 &&
        VAR_0->pid == VAR_1->lock_owner);
 if (VAR_1->blocking_writers && VAR_0->pid == VAR_1->lock_owner) {






  FUNC_0(VAR_1->lock_nested);
  VAR_1->lock_nested = 1;
  FUNC_5(&VAR_1->lock);
  FUNC_6(VAR_1, VAR_2);
  return;
 }
 if (VAR_1->blocking_writers) {
  FUNC_5(&VAR_1->lock);
  FUNC_8(VAR_1->write_lock_wq,
      VAR_1->blocking_writers == 0);
  goto again;
 }
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_6(VAR_1, VAR_2);
}
