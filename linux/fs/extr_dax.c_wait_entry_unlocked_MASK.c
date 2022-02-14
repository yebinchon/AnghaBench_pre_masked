
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
 int * FUNC_0 (struct xa_state*,void*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (struct xa_state*) ;

__attribute__((used)) static void FUNC_6(struct xa_state *VAR_2, void *VAR_3)
{
 struct wait_exceptional_entry_queue VAR_4;
 wait_queue_head_t *VAR_5;

 FUNC_2(&VAR_4.wait);
 VAR_4.wait.func = VAR_1;

 VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_4.key);






 FUNC_3(VAR_5, &VAR_4.wait, VAR_0);
 FUNC_5(VAR_2);
 FUNC_4();
 FUNC_1(VAR_5, &VAR_4.wait);
}
