
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_host {int dummy; } ;
struct file_lock {int * fl_ops; int * fl_owner; } ;
typedef int pid_t ;


 int * FUNC_0 (struct nlm_host*,int ) ;
 int VAR_0 ;

void FUNC_1(struct file_lock *VAR_1, struct nlm_host *VAR_2,
      pid_t VAR_3)
{
 VAR_1->fl_owner = FUNC_0(VAR_2, VAR_3);
 if (VAR_1->fl_owner != ((void*)0))
  VAR_1->fl_ops = &VAR_0;
}
