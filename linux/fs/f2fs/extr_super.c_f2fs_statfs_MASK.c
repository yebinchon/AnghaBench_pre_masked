
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef void* u32 ;
struct super_block {TYPE_1__* s_bdev; } ;
struct TYPE_8__ {void** val; } ;
struct kstatfs {scalar_t__ f_bfree; scalar_t__ f_bavail; scalar_t__ f_ffree; TYPE_3__ f_fsid; int f_namelen; scalar_t__ f_files; scalar_t__ f_blocks; int f_bsize; int f_type; } ;
struct f2fs_sb_info {scalar_t__ user_block_count; scalar_t__ current_reserved_blocks; scalar_t__ unusable_block_count; scalar_t__ total_node_count; int stat_lock; int blocksize; TYPE_2__* raw_super; } ;
struct dentry {int d_inode; struct super_block* d_sb; } ;
typedef scalar_t__ block_t ;
struct TYPE_10__ {int i_projid; } ;
struct TYPE_9__ {scalar_t__ root_reserved_blocks; } ;
struct TYPE_7__ {int segment0_blkaddr; int block_count; } ;
struct TYPE_6__ {int bd_dev; } ;


 TYPE_5__* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_4__ FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_1 ;
 struct f2fs_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct super_block*,int ,struct kstatfs*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct super_block*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_14 (struct f2fs_sb_info*) ;

__attribute__((used)) static int FUNC_15(struct dentry *VAR_5, struct kstatfs *VAR_6)
{
 struct super_block *VAR_7 = VAR_5->d_sb;
 struct f2fs_sb_info *VAR_8 = FUNC_2(VAR_7);
 u64 VAR_9 = FUNC_4(VAR_7->s_bdev->bd_dev);
 block_t VAR_10, VAR_11, VAR_12;
 u64 VAR_13;

 VAR_10 = FUNC_7(VAR_8->raw_super->block_count);
 VAR_11 = VAR_8->user_block_count;
 VAR_12 = FUNC_6(VAR_8->raw_super->segment0_blkaddr);
 VAR_6->f_type = VAR_2;
 VAR_6->f_bsize = VAR_8->blocksize;

 VAR_6->f_blocks = VAR_10 - VAR_12;
 VAR_6->f_bfree = VAR_11 - FUNC_14(VAR_8) -
      VAR_8->current_reserved_blocks;

 FUNC_10(&VAR_8->stat_lock);
 if (FUNC_12(VAR_6->f_bfree <= VAR_8->unusable_block_count))
  VAR_6->f_bfree = 0;
 else
  VAR_6->f_bfree -= VAR_8->unusable_block_count;
 FUNC_11(&VAR_8->stat_lock);

 if (VAR_6->f_bfree > FUNC_1(VAR_8).root_reserved_blocks)
  VAR_6->f_bavail = VAR_6->f_bfree -
    FUNC_1(VAR_8).root_reserved_blocks;
 else
  VAR_6->f_bavail = 0;

 VAR_13 = VAR_8->total_node_count - VAR_1;

 if (VAR_13 > VAR_11) {
  VAR_6->f_files = VAR_11;
  VAR_6->f_ffree = VAR_6->f_bavail;
 } else {
  VAR_6->f_files = VAR_13;
  VAR_6->f_ffree = FUNC_8(VAR_13 - FUNC_13(VAR_8),
     VAR_6->f_bavail);
 }

 VAR_6->f_namelen = VAR_0;
 VAR_6->f_fsid.val[0] = (u32)VAR_9;
 VAR_6->f_fsid.val[1] = (u32)(VAR_9 >> 32);







 return 0;
}
