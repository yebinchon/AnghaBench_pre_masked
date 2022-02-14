
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workspace_manager {int free_ws; int idle_ws; int total_ws; struct btrfs_compress_op const* ops; int ws_wait; int ws_lock; } ;
struct list_head {int dummy; } ;
struct btrfs_compress_op {struct list_head* (* alloc_workspace ) (int ) ;} ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct list_head*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 struct list_head* FUNC_7 (int ) ;

void FUNC_8(struct workspace_manager *VAR_0,
      const struct btrfs_compress_op *VAR_1)
{
 struct list_head *VAR_2;

 VAR_0->ops = VAR_1;

 FUNC_0(&VAR_0->idle_ws);
 FUNC_6(&VAR_0->ws_lock);
 FUNC_2(&VAR_0->total_ws, 0);
 FUNC_3(&VAR_0->ws_wait);





 VAR_2 = VAR_0->ops->alloc_workspace(0);
 if (FUNC_1(VAR_2)) {
  FUNC_5(
 "BTRFS: cannot preallocate compression workspace, will try later\n");
 } else {
  FUNC_2(&VAR_0->total_ws, 1);
  VAR_0->free_ws = 1;
  FUNC_4(VAR_2, &VAR_0->idle_ws);
 }
}
