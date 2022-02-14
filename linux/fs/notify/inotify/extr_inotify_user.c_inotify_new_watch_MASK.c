
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int mask; } ;
struct inotify_inode_mark {int wd; TYPE_2__ fsn_mark; } ;
struct inode {int dummy; } ;
struct idr {int dummy; } ;
struct TYPE_5__ {int ucounts; int idr_lock; struct idr idr; } ;
struct fsnotify_group {TYPE_1__ inotify_data; } ;
typedef int spinlock_t ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,struct inode*,int ) ;
 int FUNC_1 (TYPE_2__*,struct fsnotify_group*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct idr*,int *,struct inotify_inode_mark*) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (struct fsnotify_group*,struct inotify_inode_mark*) ;
 struct inotify_inode_mark* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct fsnotify_group *VAR_4,
        struct inode *VAR_5,
        u32 VAR_6)
{
 struct inotify_inode_mark *VAR_7;
 __u32 VAR_8;
 int VAR_9;
 struct idr *VAR_10 = &VAR_4->inotify_data.idr;
 spinlock_t *VAR_11 = &VAR_4->inotify_data.idr_lock;

 VAR_8 = FUNC_5(VAR_6);

 VAR_7 = FUNC_7(VAR_3, VAR_2);
 if (FUNC_8(!VAR_7))
  return -VAR_0;

 FUNC_1(&VAR_7->fsn_mark, VAR_4);
 VAR_7->fsn_mark.mask = VAR_8;
 VAR_7->wd = -1;

 VAR_9 = FUNC_4(VAR_10, VAR_11, VAR_7);
 if (VAR_9)
  goto out_err;


 if (!FUNC_3(VAR_4->inotify_data.ucounts)) {
  FUNC_6(VAR_4, VAR_7);
  VAR_9 = -VAR_1;
  goto out_err;
 }


 VAR_9 = FUNC_0(&VAR_7->fsn_mark, VAR_5, 0);
 if (VAR_9) {

  FUNC_6(VAR_4, VAR_7);
  goto out_err;
 }



 VAR_9 = VAR_7->wd;

out_err:

 FUNC_2(&VAR_7->fsn_mark);

 return VAR_9;
}
