
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_wait {int b_list; int b_status; int b_wait; struct file_lock* b_lock; struct nlm_host* b_host; } ;
struct nlm_host {int dummy; } ;
struct file_lock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nlm_wait* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct nlm_wait *FUNC_5(struct nlm_host *VAR_4, struct file_lock *VAR_5)
{
 struct nlm_wait *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (VAR_6 != ((void*)0)) {
  VAR_6->b_host = VAR_4;
  VAR_6->b_lock = VAR_5;
  FUNC_0(&VAR_6->b_wait);
  VAR_6->b_status = VAR_3;

  FUNC_3(&VAR_2);
  FUNC_2(&VAR_6->b_list, &VAR_1);
  FUNC_4(&VAR_2);
 }
 return VAR_6;
}
