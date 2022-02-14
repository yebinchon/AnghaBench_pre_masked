
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_6__ {int cs_nifree; } ;
struct ufs_sb_private_info {scalar_t__ s_root_blocks; int s_ncg; int s_ipg; TYPE_2__ cs_total; int s_dsize; } ;
struct super_block {int s_blocksize; TYPE_1__* s_bdev; } ;
struct TYPE_7__ {void** val; } ;
struct kstatfs {scalar_t__ f_bfree; scalar_t__ f_bavail; int f_files; TYPE_3__ f_fsid; int f_namelen; int f_bsize; int f_ffree; int f_blocks; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_8__ {unsigned int s_flags; int s_lock; struct ufs_sb_private_info* s_uspi; } ;
struct TYPE_5__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct super_block*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ufs_sb_private_info*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_5, struct kstatfs *VAR_6)
{
 struct super_block *VAR_7 = VAR_5->d_sb;
 struct ufs_sb_private_info *VAR_8= FUNC_0(VAR_7)->s_uspi;
 unsigned VAR_9 = FUNC_0(VAR_7)->s_flags;
 u64 VAR_10 = FUNC_1(VAR_7->s_bdev->bd_dev);

 FUNC_2(&FUNC_0(VAR_7)->s_lock);

 if ((VAR_9 & VAR_3) == VAR_4)
  VAR_6->f_type = VAR_0;
 else
  VAR_6->f_type = VAR_1;

 VAR_6->f_blocks = VAR_8->s_dsize;
 VAR_6->f_bfree = FUNC_4(VAR_8);
 VAR_6->f_ffree = VAR_8->cs_total.cs_nifree;
 VAR_6->f_bsize = VAR_7->s_blocksize;
 VAR_6->f_bavail = (VAR_6->f_bfree > VAR_8->s_root_blocks)
  ? (VAR_6->f_bfree - VAR_8->s_root_blocks) : 0;
 VAR_6->f_files = VAR_8->s_ncg * VAR_8->s_ipg;
 VAR_6->f_namelen = VAR_2;
 VAR_6->f_fsid.val[0] = (u32)VAR_10;
 VAR_6->f_fsid.val[1] = (u32)(VAR_10 >> 32);

 FUNC_3(&FUNC_0(VAR_7)->s_lock);

 return 0;
}
