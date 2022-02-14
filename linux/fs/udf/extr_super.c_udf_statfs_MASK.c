
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct udf_sb_info {size_t s_partition; TYPE_2__* s_partmaps; } ;
struct super_block {int s_blocksize; TYPE_1__* s_bdev; } ;
struct logicalVolIntegrityDescImpUse {int numDirs; int numFiles; } ;
struct TYPE_6__ {void** val; } ;
struct kstatfs {TYPE_3__ f_fsid; int f_namelen; scalar_t__ f_bfree; scalar_t__ f_ffree; scalar_t__ f_files; scalar_t__ f_bavail; int f_blocks; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_5__ {int s_partition_len; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 struct logicalVolIntegrityDescImpUse* FUNC_4 (struct super_block*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct super_block *VAR_4 = VAR_2->d_sb;
 struct udf_sb_info *VAR_5 = FUNC_0(VAR_4);
 struct logicalVolIntegrityDescImpUse *VAR_6;
 u64 VAR_7 = FUNC_1(VAR_4->s_bdev->bd_dev);

 VAR_6 = FUNC_4(VAR_4);
 VAR_3->f_type = VAR_1;
 VAR_3->f_bsize = VAR_4->s_blocksize;
 VAR_3->f_blocks = VAR_5->s_partmaps[VAR_5->s_partition].s_partition_len;
 VAR_3->f_bfree = FUNC_3(VAR_4);
 VAR_3->f_bavail = VAR_3->f_bfree;
 VAR_3->f_files = (VAR_6 != ((void*)0) ? (FUNC_2(VAR_6->numFiles) +
       FUNC_2(VAR_6->numDirs)) : 0)
   + VAR_3->f_bfree;
 VAR_3->f_ffree = VAR_3->f_bfree;
 VAR_3->f_namelen = VAR_0;
 VAR_3->f_fsid.val[0] = (u32)VAR_7;
 VAR_3->f_fsid.val[1] = (u32)(VAR_7 >> 32);

 return 0;
}
