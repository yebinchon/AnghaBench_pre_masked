
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsnotify_mark {int refcnt; } ;
struct inotify_inode_mark {struct fsnotify_mark fsn_mark; } ;
struct idr {int dummy; } ;
struct TYPE_2__ {int idr_lock; struct idr idr; } ;
struct fsnotify_group {TYPE_1__ inotify_data; } ;
typedef int spinlock_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fsnotify_mark*) ;
 struct inotify_inode_mark* FUNC_3 (struct idr*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct inotify_inode_mark *FUNC_5(struct fsnotify_group *VAR_0,
        int VAR_1)
{
 struct idr *VAR_2 = &VAR_0->inotify_data.idr;
 spinlock_t *VAR_3 = &VAR_0->inotify_data.idr_lock;
 struct inotify_inode_mark *VAR_4;

 FUNC_1(VAR_3);

 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4) {
  struct fsnotify_mark *VAR_5 = &VAR_4->fsn_mark;

  FUNC_2(VAR_5);

  FUNC_0(FUNC_4(&VAR_5->refcnt) < 2);
 }

 return VAR_4;
}
