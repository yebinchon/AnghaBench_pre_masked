
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int i_size; TYPE_1__* i_mapping; int * i_op; int i_mode; int * i_fop; int i_ctime; int i_atime; int i_mtime; scalar_t__ i_ino; } ;
struct hfsplus_sb_info {int data_clump_blocks; int file_count; int folder_count; int next_cnid; } ;
struct hfsplus_inode_info {int clump_blocks; int * rsrc_inode; scalar_t__ fs_blocks; scalar_t__ phys_size; scalar_t__ cached_blocks; scalar_t__ cached_start; scalar_t__ first_blocks; scalar_t__ alloc_blocks; int cached_extents; int first_extents; scalar_t__ subfolders; scalar_t__ userflags; scalar_t__ flags; scalar_t__ extent_state; int opencnt; int extents_lock; int open_dir_lock; int open_dir_list; } ;
typedef int hfsplus_extent_rec ;
struct TYPE_2__ {int * a_ops; } ;


 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 struct hfsplus_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct inode*,struct inode*,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int *) ;
 struct inode* FUNC_15 (struct super_block*) ;
 int VAR_5 ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (int *) ;

struct inode *FUNC_18(struct super_block *VAR_6, struct inode *VAR_7,
    umode_t VAR_8)
{
 struct hfsplus_sb_info *VAR_9 = FUNC_1(VAR_6);
 struct inode *VAR_10 = FUNC_15(VAR_6);
 struct hfsplus_inode_info *VAR_11;

 if (!VAR_10)
  return ((void*)0);

 VAR_10->i_ino = VAR_9->next_cnid++;
 FUNC_9(VAR_10, VAR_7, VAR_8);
 FUNC_16(VAR_10, 1);
 VAR_10->i_mtime = VAR_10->i_atime = VAR_10->i_ctime = FUNC_7(VAR_10);

 VAR_11 = FUNC_0(VAR_10);
 FUNC_2(&VAR_11->open_dir_list);
 FUNC_17(&VAR_11->open_dir_lock);
 FUNC_14(&VAR_11->extents_lock);
 FUNC_6(&VAR_11->opencnt, 0);
 VAR_11->extent_state = 0;
 VAR_11->flags = 0;
 VAR_11->userflags = 0;
 VAR_11->subfolders = 0;
 FUNC_13(VAR_11->first_extents, 0, sizeof(hfsplus_extent_rec));
 FUNC_13(VAR_11->cached_extents, 0, sizeof(hfsplus_extent_rec));
 VAR_11->alloc_blocks = 0;
 VAR_11->first_blocks = 0;
 VAR_11->cached_start = 0;
 VAR_11->cached_blocks = 0;
 VAR_11->phys_size = 0;
 VAR_11->fs_blocks = 0;
 VAR_11->rsrc_inode = ((void*)0);
 if (FUNC_3(VAR_10->i_mode)) {
  VAR_10->i_size = 2;
  VAR_9->folder_count++;
  VAR_10->i_op = &VAR_1;
  VAR_10->i_fop = &VAR_2;
 } else if (FUNC_5(VAR_10->i_mode)) {
  VAR_9->file_count++;
  VAR_10->i_op = &VAR_3;
  VAR_10->i_fop = &VAR_4;
  VAR_10->i_mapping->a_ops = &VAR_0;
  VAR_11->clump_blocks = VAR_9->data_clump_blocks;
 } else if (FUNC_4(VAR_10->i_mode)) {
  VAR_9->file_count++;
  VAR_10->i_op = &VAR_5;
  FUNC_10(VAR_10);
  VAR_10->i_mapping->a_ops = &VAR_0;
  VAR_11->clump_blocks = 1;
 } else
  VAR_9->file_count++;
 FUNC_11(VAR_10);
 FUNC_12(VAR_10);
 FUNC_8(VAR_6);

 return VAR_10;
}
