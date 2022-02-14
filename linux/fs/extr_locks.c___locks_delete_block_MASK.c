
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int * fl_blocker; int fl_blocked_member; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct file_lock*) ;

__attribute__((used)) static void FUNC_2(struct file_lock *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->fl_blocked_member);
 VAR_0->fl_blocker = ((void*)0);
}
