
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsnotify_mark {int flags; int lock; int g_list; int connector; scalar_t__ mask; struct fsnotify_group* group; } ;
struct fsnotify_group {int num_marks; int marks_list; int mark_mutex; } ;
typedef int fsnotify_connp_t ;
typedef int __kernel_fsid_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fsnotify_mark*,int *,unsigned int,int,int *) ;
 int FUNC_4 (struct fsnotify_mark*) ;
 int FUNC_5 (struct fsnotify_mark*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct fsnotify_mark *VAR_2,
        fsnotify_connp_t *VAR_3, unsigned int VAR_4,
        int VAR_5, __kernel_fsid_t *VAR_6)
{
 struct fsnotify_group *VAR_7 = VAR_2->group;
 int VAR_8 = 0;

 FUNC_0(!FUNC_9(&VAR_7->mark_mutex));







 FUNC_10(&VAR_2->lock);
 VAR_2->flags |= VAR_0 | VAR_1;

 FUNC_7(&VAR_2->g_list, &VAR_7->marks_list);
 FUNC_2(&VAR_7->num_marks);
 FUNC_4(VAR_2);
 FUNC_11(&VAR_2->lock);

 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8)
  goto err;

 if (VAR_2->mask)
  FUNC_6(VAR_2->connector);

 return VAR_8;
err:
 FUNC_10(&VAR_2->lock);
 VAR_2->flags &= ~(VAR_0 |
    VAR_1);
 FUNC_8(&VAR_2->g_list);
 FUNC_11(&VAR_2->lock);
 FUNC_1(&VAR_7->num_marks);

 FUNC_5(VAR_2);
 return VAR_8;
}
