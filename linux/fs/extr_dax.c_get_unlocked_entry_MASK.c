
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct xa_state {int dummy; } ;
struct TYPE_4__ {int func; } ;
struct wait_exceptional_entry_queue {TYPE_1__ wait; int key; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 void* VAR_1 ;
 unsigned int FUNC_1 (void*) ;
 int * FUNC_2 (struct xa_state*,void*,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*,int ) ;
 int FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (struct xa_state*) ;
 int FUNC_10 (struct xa_state*) ;
 int FUNC_11 (struct xa_state*) ;
 int FUNC_12 (struct xa_state*) ;

__attribute__((used)) static void *FUNC_13(struct xa_state *VAR_3, unsigned int VAR_4)
{
 void *VAR_5;
 struct wait_exceptional_entry_queue VAR_6;
 wait_queue_head_t *VAR_7;

 FUNC_5(&VAR_6.wait);
 VAR_6.wait.func = VAR_2;

 for (;;) {
  VAR_5 = FUNC_9(VAR_3);
  if (!VAR_5 || FUNC_0(!FUNC_8(VAR_5)))
   return VAR_5;
  if (FUNC_1(VAR_5) < VAR_4)
   return VAR_1;
  if (!FUNC_3(VAR_5))
   return VAR_5;

  VAR_7 = FUNC_2(VAR_3, VAR_5, &VAR_6.key);
  FUNC_6(VAR_7, &VAR_6.wait,
       VAR_0);
  FUNC_12(VAR_3);
  FUNC_11(VAR_3);
  FUNC_7();
  FUNC_4(VAR_7, &VAR_6.wait);
  FUNC_10(VAR_3);
 }
}
