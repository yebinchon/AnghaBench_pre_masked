
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct eppoll_entry {int wait; int whead; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct eppoll_entry *VAR_0)
{
 wait_queue_head_t *VAR_1;

 FUNC_0();






 VAR_1 = FUNC_3(&VAR_0->whead);
 if (VAR_1)
  FUNC_2(VAR_1, &VAR_0->wait);
 FUNC_1();
}
