
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {scalar_t__ transid; } ;
struct btrfs_inode {scalar_t__ last_unlink_trans; scalar_t__ logged_trans; int log_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct btrfs_trans_handle *VAR_0,
        struct btrfs_inode *VAR_1, struct btrfs_inode *VAR_2,
        int VAR_3)
{
 FUNC_0(&VAR_2->log_mutex);
 VAR_2->last_unlink_trans = VAR_0->transid;
 FUNC_1(&VAR_2->log_mutex);





 if (VAR_1->logged_trans == VAR_0->transid)
  return;





 if (VAR_2->logged_trans == VAR_0->transid)
  return;
 if (VAR_3)
  goto record;


 return;

record:
 FUNC_0(&VAR_1->log_mutex);
 VAR_1->last_unlink_trans = VAR_0->transid;
 FUNC_1(&VAR_1->log_mutex);
}
