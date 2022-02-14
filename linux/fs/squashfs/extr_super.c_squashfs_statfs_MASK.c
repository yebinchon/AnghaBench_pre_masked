
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct squashfs_sb_info {int bytes_used; int block_log; int inodes; int block_size; } ;
struct TYPE_6__ {void** val; } ;
struct kstatfs {int f_blocks; TYPE_3__ f_fsid; int f_namelen; scalar_t__ f_ffree; int f_files; scalar_t__ f_bavail; scalar_t__ f_bfree; int f_bsize; int f_type; } ;
struct dentry {TYPE_2__* d_sb; } ;
struct TYPE_5__ {TYPE_1__* s_bdev; struct squashfs_sb_info* s_fs_info; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct squashfs_sb_info *VAR_4 = VAR_2->d_sb->s_fs_info;
 u64 VAR_5 = FUNC_1(VAR_2->d_sb->s_bdev->bd_dev);

 FUNC_0("Entered squashfs_statfs\n");

 VAR_3->f_type = VAR_0;
 VAR_3->f_bsize = VAR_4->block_size;
 VAR_3->f_blocks = ((VAR_4->bytes_used - 1) >> VAR_4->block_log) + 1;
 VAR_3->f_bfree = VAR_3->f_bavail = 0;
 VAR_3->f_files = VAR_4->inodes;
 VAR_3->f_ffree = 0;
 VAR_3->f_namelen = VAR_1;
 VAR_3->f_fsid.val[0] = (u32)VAR_5;
 VAR_3->f_fsid.val[1] = (u32)(VAR_5 >> 32);

 return 0;
}
