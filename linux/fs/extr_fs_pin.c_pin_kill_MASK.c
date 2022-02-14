
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int entry; } ;
typedef TYPE_1__ wait_queue_entry_t ;
struct TYPE_6__ {int lock; } ;
struct fs_pin {int done; TYPE_3__ wait; int (* kill ) (struct fs_pin*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct fs_pin*) ;

void FUNC_11(struct fs_pin *VAR_1)
{
 wait_queue_entry_t VAR_2;

 if (!VAR_1) {
  FUNC_5();
  return;
 }
 FUNC_1(&VAR_2);
 FUNC_8(&VAR_1->wait.lock);
 if (FUNC_2(!VAR_1->done)) {
  VAR_1->done = -1;
  FUNC_9(&VAR_1->wait.lock);
  FUNC_5();
  VAR_1->kill(VAR_1);
  return;
 }
 if (VAR_1->done > 0) {
  FUNC_9(&VAR_1->wait.lock);
  FUNC_5();
  return;
 }
 FUNC_0(&VAR_1->wait, &VAR_2);
 while (1) {
  FUNC_7(VAR_0);
  FUNC_9(&VAR_1->wait.lock);
  FUNC_5();
  FUNC_6();
  FUNC_4();
  if (FUNC_2(FUNC_3(&VAR_2.entry)))
   break;

  FUNC_8(&VAR_1->wait.lock);
  if (VAR_1->done > 0) {
   FUNC_9(&VAR_1->wait.lock);
   break;
  }
 }
 FUNC_5();
}
