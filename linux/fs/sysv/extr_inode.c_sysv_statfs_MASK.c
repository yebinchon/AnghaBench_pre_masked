
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct sysv_sb_info {int s_ninodes; int s_ndatazones; } ;
struct super_block {int s_blocksize; int s_magic; TYPE_1__* s_bdev; } ;
struct TYPE_4__ {void** val; } ;
struct kstatfs {TYPE_2__ f_fsid; int f_namelen; int f_ffree; int f_files; int f_bfree; int f_bavail; int f_blocks; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_3__ {int bd_dev; } ;


 int VAR_0 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_1, struct kstatfs *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->d_sb;
 struct sysv_sb_info *VAR_4 = FUNC_0(VAR_3);
 u64 VAR_5 = FUNC_1(VAR_3->s_bdev->bd_dev);

 VAR_2->f_type = VAR_3->s_magic;
 VAR_2->f_bsize = VAR_3->s_blocksize;
 VAR_2->f_blocks = VAR_4->s_ndatazones;
 VAR_2->f_bavail = VAR_2->f_bfree = FUNC_2(VAR_3);
 VAR_2->f_files = VAR_4->s_ninodes;
 VAR_2->f_ffree = FUNC_3(VAR_3);
 VAR_2->f_namelen = VAR_0;
 VAR_2->f_fsid.val[0] = (u32)VAR_5;
 VAR_2->f_fsid.val[1] = (u32)(VAR_5 >> 32);
 return 0;
}
