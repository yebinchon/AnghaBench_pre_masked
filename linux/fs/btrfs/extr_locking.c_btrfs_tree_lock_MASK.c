
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct extent_buffer {scalar_t__ lock_owner; scalar_t__ blocking_writers; int lock; int blocking_readers; int write_lock_wq; int read_lock_wq; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (struct extent_buffer*,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct extent_buffer *VAR_1)
{
 u64 VAR_2 = 0;

 if (FUNC_6())
  VAR_2 = FUNC_4();

 FUNC_0(VAR_1->lock_owner == VAR_0->pid);
again:
 FUNC_7(VAR_1->read_lock_wq, FUNC_1(&VAR_1->blocking_readers) == 0);
 FUNC_7(VAR_1->write_lock_wq, VAR_1->blocking_writers == 0);
 FUNC_8(&VAR_1->lock);
 if (FUNC_1(&VAR_1->blocking_readers) || VAR_1->blocking_writers) {
  FUNC_9(&VAR_1->lock);
  goto again;
 }
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 VAR_1->lock_owner = VAR_0->pid;
 FUNC_5(VAR_1, VAR_2);
}
