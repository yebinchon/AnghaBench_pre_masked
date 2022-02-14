
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ext4_inode_info {struct inode vfs_inode; int i_rsv_conversion_work; int i_unwritten; scalar_t__ i_datasync_tid; scalar_t__ i_sync_tid; int i_completed_io_lock; int i_rsv_conversion_list; int * jinode; int i_dquot; scalar_t__ i_reserved_quota; int i_pending_tree; int i_block_reservation_lock; scalar_t__ i_da_metadata_calc_last_lblock; scalar_t__ i_da_metadata_calc_len; scalar_t__ i_reserved_data_blocks; scalar_t__ i_es_shrink_lblk; scalar_t__ i_es_shk_nr; scalar_t__ i_es_all_nr; int i_es_list; int i_es_lock; int i_es_tree; int i_prealloc_lock; int i_prealloc_list; int i_raw_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct inode*,int) ;
 struct ext4_inode_info* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct inode *FUNC_10(struct super_block *VAR_3)
{
 struct ext4_inode_info *VAR_4;

 VAR_4 = FUNC_6(VAR_2, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_5(&VAR_4->vfs_inode, 1);
 FUNC_9(&VAR_4->i_raw_lock);
 FUNC_0(&VAR_4->i_prealloc_list);
 FUNC_9(&VAR_4->i_prealloc_lock);
 FUNC_3(&VAR_4->i_es_tree);
 FUNC_8(&VAR_4->i_es_lock);
 FUNC_0(&VAR_4->i_es_list);
 VAR_4->i_es_all_nr = 0;
 VAR_4->i_es_shk_nr = 0;
 VAR_4->i_es_shrink_lblk = 0;
 VAR_4->i_reserved_data_blocks = 0;
 VAR_4->i_da_metadata_calc_len = 0;
 VAR_4->i_da_metadata_calc_last_lblock = 0;
 FUNC_9(&(VAR_4->i_block_reservation_lock));
 FUNC_4(&VAR_4->i_pending_tree);




 VAR_4->jinode = ((void*)0);
 FUNC_0(&VAR_4->i_rsv_conversion_list);
 FUNC_9(&VAR_4->i_completed_io_lock);
 VAR_4->i_sync_tid = 0;
 VAR_4->i_datasync_tid = 0;
 FUNC_2(&VAR_4->i_unwritten, 0);
 FUNC_1(&VAR_4->i_rsv_conversion_work, VAR_1);
 return &VAR_4->vfs_inode;
}
