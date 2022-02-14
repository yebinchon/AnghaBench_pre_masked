
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct page {int dummy; } ;
struct inode {int i_size; struct address_space* i_mapping; int i_ino; struct super_block* i_sb; } ;
struct hfsplus_inode_info {int phys_size; void* first_blocks; int extent_state; int fs_blocks; int extents_lock; void* alloc_blocks; void* cached_blocks; void* cached_start; int cached_extents; int first_extents; } ;
struct hfs_find_data {TYPE_1__* tree; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;
struct TYPE_4__ {int alloc_blksz; int alloc_blksz_shift; int ext_tree; } ;
struct TYPE_3__ {int tree_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 int FUNC_2 (struct hfs_find_data*,struct inode*,void*) ;
 int FUNC_3 (struct hfs_find_data*) ;
 int FUNC_4 (int ,char*,int ,long long,int) ;
 int FUNC_5 (struct hfs_find_data*) ;
 int FUNC_6 (int ,struct hfs_find_data*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct super_block*,int ,void*,void*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*,int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,struct address_space*,int,int ,int ,struct page**,void**) ;
 int FUNC_15 (int *,struct address_space*,int,int ,int ,struct page*,void*) ;

void FUNC_16(struct inode *VAR_4)
{
 struct super_block *VAR_5 = VAR_4->i_sb;
 struct hfsplus_inode_info *VAR_6 = FUNC_0(VAR_4);
 struct hfs_find_data VAR_7;
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 FUNC_4(VAR_3, "truncate: %lu, %llu -> %llu\n",
  VAR_4->i_ino, (long long)VAR_6->phys_size, VAR_4->i_size);

 if (VAR_4->i_size > VAR_6->phys_size) {
  struct address_space *VAR_12 = VAR_4->i_mapping;
  struct page *VAR_13;
  void *VAR_14;
  loff_t VAR_15 = VAR_4->i_size;

  VAR_11 = FUNC_14(((void*)0), VAR_12, VAR_15, 0, 0,
         &VAR_13, &VAR_14);
  if (VAR_11)
   return;
  VAR_11 = FUNC_15(((void*)0), VAR_12, VAR_15,
   0, 0, VAR_13, VAR_14);
  if (VAR_11 < 0)
   return;
  FUNC_11(VAR_4);
  return;
 } else if (VAR_4->i_size == VAR_6->phys_size)
  return;

 VAR_9 = (VAR_4->i_size + FUNC_1(VAR_5)->alloc_blksz - 1) >>
   FUNC_1(VAR_5)->alloc_blksz_shift;

 FUNC_12(&VAR_6->extents_lock);

 VAR_8 = VAR_6->alloc_blocks;
 if (VAR_9 == VAR_8)
  goto out_unlock;

 VAR_11 = FUNC_6(FUNC_1(VAR_5)->ext_tree, &VAR_7);
 if (VAR_11) {
  FUNC_13(&VAR_6->extents_lock);

  return;
 }
 while (1) {
  if (VAR_8 == VAR_6->first_blocks) {
   FUNC_13(&VAR_7.tree->tree_lock);
   FUNC_8(VAR_5, VAR_6->first_extents,
          VAR_8, VAR_8 - VAR_9);
   FUNC_7(VAR_6->first_extents);
   VAR_6->first_blocks = VAR_9;
   FUNC_12(&VAR_7.tree->tree_lock);
   break;
  }
  VAR_11 = FUNC_2(&VAR_7, VAR_4, VAR_8);
  if (VAR_11)
   break;
  FUNC_3(&VAR_7);

  FUNC_13(&VAR_7.tree->tree_lock);
  VAR_10 = VAR_6->cached_start;
  FUNC_8(VAR_5, VAR_6->cached_extents,
         VAR_8 - VAR_10, VAR_8 - VAR_9);
  FUNC_7(VAR_6->cached_extents);
  if (VAR_9 > VAR_10) {
   VAR_6->extent_state |= VAR_0;
   break;
  }
  VAR_8 = VAR_10;
  VAR_6->cached_start = VAR_6->cached_blocks = 0;
  VAR_6->extent_state &= ~(VAR_0 | VAR_1);
  FUNC_12(&VAR_7.tree->tree_lock);
 }
 FUNC_5(&VAR_7);

 VAR_6->alloc_blocks = VAR_9;
out_unlock:
 FUNC_13(&VAR_6->extents_lock);
 VAR_6->phys_size = VAR_4->i_size;
 VAR_6->fs_blocks = (VAR_4->i_size + VAR_5->s_blocksize - 1) >>
  VAR_5->s_blocksize_bits;
 FUNC_10(VAR_4, VAR_6->fs_blocks << VAR_5->s_blocksize_bits);
 FUNC_9(VAR_4, VAR_2);
}
