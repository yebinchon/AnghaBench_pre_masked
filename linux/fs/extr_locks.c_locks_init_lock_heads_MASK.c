
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_wait; int fl_blocked_member; int fl_blocked_requests; int fl_list; int fl_link; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct file_lock *VAR_0)
{
 FUNC_0(&VAR_0->fl_link);
 FUNC_1(&VAR_0->fl_list);
 FUNC_1(&VAR_0->fl_blocked_requests);
 FUNC_1(&VAR_0->fl_blocked_member);
 FUNC_2(&VAR_0->fl_wait);
}
