
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct super_block {int s_blocksize; int s_magic; TYPE_1__* s_bdev; } ;
struct minix_sb_info {int s_nzones; int s_firstdatazone; int s_log_zone_size; int s_namelen; int s_ninodes; } ;
struct TYPE_4__ {void** val; } ;
struct kstatfs {int f_blocks; TYPE_2__ f_fsid; int f_namelen; int f_ffree; int f_files; int f_bfree; int f_bavail; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_3__ {int bd_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 struct minix_sb_info* FUNC_3 (struct super_block*) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_0, struct kstatfs *VAR_1)
{
 struct super_block *VAR_2 = VAR_0->d_sb;
 struct minix_sb_info *VAR_3 = FUNC_3(VAR_2);
 u64 VAR_4 = FUNC_0(VAR_2->s_bdev->bd_dev);
 VAR_1->f_type = VAR_2->s_magic;
 VAR_1->f_bsize = VAR_2->s_blocksize;
 VAR_1->f_blocks = (VAR_3->s_nzones - VAR_3->s_firstdatazone) << VAR_3->s_log_zone_size;
 VAR_1->f_bfree = FUNC_1(VAR_2);
 VAR_1->f_bavail = VAR_1->f_bfree;
 VAR_1->f_files = VAR_3->s_ninodes;
 VAR_1->f_ffree = FUNC_2(VAR_2);
 VAR_1->f_namelen = VAR_3->s_namelen;
 VAR_1->f_fsid.val[0] = (u32)VAR_4;
 VAR_1->f_fsid.val[1] = (u32)(VAR_4 >> 32);

 return 0;
}
