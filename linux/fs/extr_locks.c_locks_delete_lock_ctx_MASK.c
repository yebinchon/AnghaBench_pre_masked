
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct file_lock {int fl_list; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (struct file_lock*) ;
 int FUNC_2 (struct file_lock*) ;

__attribute__((used)) static void
FUNC_3(struct file_lock *VAR_0, struct list_head *VAR_1)
{
 FUNC_2(VAR_0);
 if (VAR_1)
  FUNC_0(&VAR_0->fl_list, VAR_1);
 else
  FUNC_1(VAR_0);
}
