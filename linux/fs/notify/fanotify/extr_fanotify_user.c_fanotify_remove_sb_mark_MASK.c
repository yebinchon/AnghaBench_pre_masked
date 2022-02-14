
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_fsnotify_marks; } ;
struct fsnotify_group {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct fsnotify_group*,int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct fsnotify_group *VAR_0,
          struct super_block *VAR_1, __u32 VAR_2,
          unsigned int VAR_3)
{
 return FUNC_0(VAR_0, &VAR_1->s_fsnotify_marks, VAR_2, VAR_3);
}
