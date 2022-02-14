
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int transid; } ;
struct btrfs_inode {int log_mutex; int last_unlink_trans; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct btrfs_trans_handle *VAR_0,
       struct btrfs_inode *VAR_1)
{
 FUNC_0(&VAR_1->log_mutex);
 VAR_1->last_unlink_trans = VAR_0->transid;
 FUNC_1(&VAR_1->log_mutex);
}
