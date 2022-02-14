
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int * fl_blocker; int fl_blocked_requests; } ;


 int VAR_0 ;
 int FUNC_0 (struct file_lock*) ;
 int FUNC_1 (struct file_lock*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct file_lock *VAR_2)
{
 int VAR_3 = -VAR_0;
 if (VAR_2->fl_blocker == ((void*)0) &&
     FUNC_2(&VAR_2->fl_blocked_requests))
  return VAR_3;
 FUNC_3(&VAR_1);
 if (VAR_2->fl_blocker)
  VAR_3 = 0;
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 FUNC_4(&VAR_1);
 return VAR_3;
}
