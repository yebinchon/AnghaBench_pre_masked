
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inotify_inode_mark {int dummy; } ;
struct TYPE_2__ {int idr_lock; } ;
struct fsnotify_group {TYPE_1__ inotify_data; } ;
typedef int spinlock_t ;


 struct inotify_inode_mark* FUNC_0 (struct fsnotify_group*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct inotify_inode_mark *FUNC_3(struct fsnotify_group *VAR_0,
        int VAR_1)
{
 struct inotify_inode_mark *VAR_2;
 spinlock_t *VAR_3 = &VAR_0->inotify_data.idr_lock;

 FUNC_1(VAR_3);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_3);

 return VAR_2;
}
