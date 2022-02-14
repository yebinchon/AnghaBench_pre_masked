
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark {struct fsnotify_group* group; } ;
struct fsnotify_group {int mark_mutex; } ;
typedef int fsnotify_connp_t ;
typedef int __kernel_fsid_t ;


 int FUNC_0 (struct fsnotify_mark*,int *,unsigned int,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct fsnotify_mark *VAR_0, fsnotify_connp_t *VAR_1,
        unsigned int VAR_2, int VAR_3, __kernel_fsid_t *VAR_4)
{
 int VAR_5;
 struct fsnotify_group *VAR_6 = VAR_0->group;

 FUNC_1(&VAR_6->mark_mutex);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_6->mark_mutex);
 return VAR_5;
}
