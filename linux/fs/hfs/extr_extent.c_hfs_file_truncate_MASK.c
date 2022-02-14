
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct page {int dummy; } ;
struct inode {int i_size; struct address_space* i_mapping; int i_ino; struct super_block* i_sb; } ;
struct hfs_find_data {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {int phys_size; void* first_blocks; int flags; int fs_blocks; void* alloc_blocks; int extents_lock; void* cached_blocks; void* cached_start; int cached_extents; int first_extents; } ;
struct TYPE_3__ {int alloc_blksz; int ext_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_2 (struct hfs_find_data*,struct inode*,void*) ;
 int FUNC_3 (struct hfs_find_data*) ;
 int FUNC_4 (int ,char*,int ,long long,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hfs_find_data*) ;
 int FUNC_7 (int ,struct hfs_find_data*) ;
 int FUNC_8 (struct super_block*,int ,void*,void*) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct address_space*,int,int ,int ,struct page**,void**) ;
 int FUNC_14 (int *,struct address_space*,int,int ,int ,struct page*,void*) ;

void FUNC_15(struct inode *VAR_3)
{
 struct super_block *VAR_4 = VAR_3->i_sb;
 struct hfs_find_data VAR_5;
 u16 VAR_6, VAR_7, VAR_8;
 u32 VAR_9;
 int VAR_10;

 FUNC_4(VAR_2, "truncate: %lu, %Lu -> %Lu\n",
  VAR_3->i_ino, (long long)FUNC_0(VAR_3)->phys_size,
  VAR_3->i_size);
 if (VAR_3->i_size > FUNC_0(VAR_3)->phys_size) {
  struct address_space *VAR_11 = VAR_3->i_mapping;
  void *VAR_12;
  struct page *VAR_13;


  VAR_9 = VAR_3->i_size - 1;
  VAR_10 = FUNC_13(((void*)0), VAR_11, VAR_9+1, 0, 0,
         &VAR_13, &VAR_12);
  if (!VAR_10) {
   VAR_10 = FUNC_14(((void*)0), VAR_11, VAR_9+1, 0, 0,
     VAR_13, VAR_12);
  }
  if (VAR_10)
   VAR_3->i_size = FUNC_0(VAR_3)->phys_size;
  return;
 } else if (VAR_3->i_size == FUNC_0(VAR_3)->phys_size)
  return;
 VAR_9 = VAR_3->i_size + FUNC_1(VAR_4)->alloc_blksz - 1;
 VAR_6 = VAR_9 / FUNC_1(VAR_4)->alloc_blksz;
 VAR_7 = FUNC_0(VAR_3)->alloc_blocks;
 if (VAR_6 == VAR_7)
  goto out;

 FUNC_11(&FUNC_0(VAR_3)->extents_lock);
 VAR_10 = FUNC_7(FUNC_1(VAR_4)->ext_tree, &VAR_5);
 if (VAR_10) {
  FUNC_12(&FUNC_0(VAR_3)->extents_lock);

  return;
 }
 while (1) {
  if (VAR_7 == FUNC_0(VAR_3)->first_blocks) {
   FUNC_8(VAR_4, FUNC_0(VAR_3)->first_extents,
      VAR_7, VAR_7 - VAR_6);
   FUNC_5(FUNC_0(VAR_3)->first_extents);
   FUNC_0(VAR_3)->first_blocks = VAR_6;
   break;
  }
  VAR_10 = FUNC_2(&VAR_5, VAR_3, VAR_7);
  if (VAR_10)
   break;
  VAR_8 = FUNC_0(VAR_3)->cached_start;
  FUNC_8(VAR_4, FUNC_0(VAR_3)->cached_extents,
     VAR_7 - VAR_8, VAR_7 - VAR_6);
  FUNC_5(FUNC_0(VAR_3)->cached_extents);
  if (VAR_6 > VAR_8) {
   FUNC_0(VAR_3)->flags |= VAR_0;
   break;
  }
  VAR_7 = VAR_8;
  FUNC_0(VAR_3)->cached_start = FUNC_0(VAR_3)->cached_blocks = 0;
  FUNC_0(VAR_3)->flags &= ~(VAR_0|VAR_1);
  FUNC_3(&VAR_5);
 }
 FUNC_6(&VAR_5);
 FUNC_12(&FUNC_0(VAR_3)->extents_lock);

 FUNC_0(VAR_3)->alloc_blocks = VAR_6;
out:
 FUNC_0(VAR_3)->phys_size = VAR_3->i_size;
 FUNC_0(VAR_3)->fs_blocks = (VAR_3->i_size + VAR_4->s_blocksize - 1) >> VAR_4->s_blocksize_bits;
 FUNC_9(VAR_3, FUNC_0(VAR_3)->fs_blocks << VAR_4->s_blocksize_bits);
 FUNC_10(VAR_3);
}
