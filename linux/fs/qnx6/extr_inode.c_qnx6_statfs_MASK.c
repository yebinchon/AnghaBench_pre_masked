
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct super_block {int s_blocksize; int s_magic; TYPE_1__* s_bdev; } ;
struct qnx6_sb_info {TYPE_2__* sb; } ;
struct TYPE_6__ {void** val; } ;
struct kstatfs {TYPE_3__ f_fsid; int f_namelen; void* f_bfree; void* f_bavail; void* f_ffree; void* f_files; void* f_blocks; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_5__ {int sb_free_inodes; int sb_num_inodes; int sb_free_blocks; int sb_num_blocks; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 struct qnx6_sb_info* FUNC_0 (struct super_block*) ;
 void* FUNC_1 (struct qnx6_sb_info*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_1, struct kstatfs *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->d_sb;
 struct qnx6_sb_info *VAR_4 = FUNC_0(VAR_3);
 u64 VAR_5 = FUNC_2(VAR_3->s_bdev->bd_dev);

 VAR_2->f_type = VAR_3->s_magic;
 VAR_2->f_bsize = VAR_3->s_blocksize;
 VAR_2->f_blocks = FUNC_1(VAR_4, VAR_4->sb->sb_num_blocks);
 VAR_2->f_bfree = FUNC_1(VAR_4, VAR_4->sb->sb_free_blocks);
 VAR_2->f_files = FUNC_1(VAR_4, VAR_4->sb->sb_num_inodes);
 VAR_2->f_ffree = FUNC_1(VAR_4, VAR_4->sb->sb_free_inodes);
 VAR_2->f_bavail = VAR_2->f_bfree;
 VAR_2->f_namelen = VAR_0;
 VAR_2->f_fsid.val[0] = (u32)VAR_5;
 VAR_2->f_fsid.val[1] = (u32)(VAR_5 >> 32);

 return 0;
}
