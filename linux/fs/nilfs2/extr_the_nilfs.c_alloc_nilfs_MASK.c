
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sb_update_freq; int ns_segctor_sem; int ns_cptree_lock; int ns_cptree; int ns_last_segment_lock; int ns_next_gen_lock; int ns_inode_lock; int ns_gc_inodes; int ns_dirty_files; int ns_snapshot_mount_mutex; int ns_sem; int ns_ndirtyblks; int ns_bdev; struct super_block* ns_sb; } ;
struct super_block {int s_bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct the_nilfs* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct the_nilfs *FUNC_6(struct super_block *VAR_3)
{
 struct the_nilfs *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->ns_sb = VAR_3;
 VAR_4->ns_bdev = VAR_3->s_bdev;
 FUNC_1(&VAR_4->ns_ndirtyblks, 0);
 FUNC_2(&VAR_4->ns_sem);
 FUNC_4(&VAR_4->ns_snapshot_mount_mutex);
 FUNC_0(&VAR_4->ns_dirty_files);
 FUNC_0(&VAR_4->ns_gc_inodes);
 FUNC_5(&VAR_4->ns_inode_lock);
 FUNC_5(&VAR_4->ns_next_gen_lock);
 FUNC_5(&VAR_4->ns_last_segment_lock);
 VAR_4->ns_cptree = VAR_2;
 FUNC_5(&VAR_4->ns_cptree_lock);
 FUNC_2(&VAR_4->ns_segctor_sem);
 VAR_4->ns_sb_update_freq = VAR_1;

 return VAR_4;
}
