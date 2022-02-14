
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct super_block {int s_magic; TYPE_1__* s_bdev; } ;
struct TYPE_4__ {void** val; } ;
struct kstatfs {int f_bsize; unsigned int f_bfree; unsigned int f_bavail; int f_files; int f_namelen; TYPE_2__ f_fsid; int f_ffree; int f_blocks; int f_type; } ;
struct hpfs_sb_info {unsigned int sb_n_free; int sb_dirband_size; int sb_fs_size; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_3__ {int bd_dev; } ;


 unsigned int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 struct hpfs_sb_info* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct dentry *VAR_0, struct kstatfs *VAR_1)
{
 struct super_block *VAR_2 = VAR_0->d_sb;
 struct hpfs_sb_info *VAR_3 = FUNC_3(VAR_2);
 u64 VAR_4 = FUNC_5(VAR_2->s_bdev->bd_dev);

 FUNC_2(VAR_2);

 if (VAR_3->sb_n_free == (unsigned)-1)
  VAR_3->sb_n_free = FUNC_0(VAR_2);

 VAR_1->f_type = VAR_2->s_magic;
 VAR_1->f_bsize = 512;
 VAR_1->f_blocks = VAR_3->sb_fs_size;
 VAR_1->f_bfree = VAR_3->sb_n_free;
 VAR_1->f_bavail = VAR_3->sb_n_free;
 VAR_1->f_files = VAR_3->sb_dirband_size / 4;
 VAR_1->f_ffree = FUNC_1(VAR_2);
 VAR_1->f_fsid.val[0] = (u32)VAR_4;
 VAR_1->f_fsid.val[1] = (u32)(VAR_4 >> 32);
 VAR_1->f_namelen = 254;

 FUNC_4(VAR_2);

 return 0;
}
