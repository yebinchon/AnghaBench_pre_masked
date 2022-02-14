
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_fsnotify_marks; } ;
struct fsnotify_group {int dummy; } ;
typedef int __u32 ;
typedef int __kernel_fsid_t ;


 int VAR_0 ;
 int FUNC_0 (struct fsnotify_group*,int *,int ,int ,unsigned int,int *) ;

__attribute__((used)) static int FUNC_1(struct fsnotify_group *VAR_1,
    struct super_block *VAR_2, __u32 VAR_3,
    unsigned int VAR_4, __kernel_fsid_t *VAR_5)
{
 return FUNC_0(VAR_1, &VAR_2->s_fsnotify_marks,
     VAR_0, VAR_3, VAR_4, VAR_5);
}
