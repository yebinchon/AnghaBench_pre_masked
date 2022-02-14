
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_blocked_requests; } ;


 int FUNC_0 (struct file_lock*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct file_lock *VAR_1)
{







 if (FUNC_1(&VAR_1->fl_blocked_requests))
  return;

 FUNC_2(&VAR_0);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_0);
}
