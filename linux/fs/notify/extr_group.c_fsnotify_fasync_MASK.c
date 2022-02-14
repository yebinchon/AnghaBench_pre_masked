
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_group {int fsn_fa; } ;
struct file {struct fsnotify_group* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct file*,int,int *) ;

int FUNC_1(int VAR_1, struct file *VAR_2, int VAR_3)
{
 struct fsnotify_group *VAR_4 = VAR_2->private_data;

 return FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4->fsn_fa) >= 0 ? 0 : -VAR_0;
}
