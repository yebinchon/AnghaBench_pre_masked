
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_group {int notification_lock; int notification_waitq; } ;
struct file {struct fsnotify_group* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsnotify_group*) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_2, poll_table *VAR_3)
{
 struct fsnotify_group *VAR_4 = VAR_2->private_data;
 __poll_t VAR_5 = 0;

 FUNC_1(VAR_2, &VAR_4->notification_waitq, VAR_3);
 FUNC_2(&VAR_4->notification_lock);
 if (!FUNC_0(VAR_4))
  VAR_5 = VAR_0 | VAR_1;
 FUNC_3(&VAR_4->notification_lock);

 return VAR_5;
}
