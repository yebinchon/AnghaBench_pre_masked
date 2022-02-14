
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct super_block {scalar_t__ s_dev; TYPE_1__* s_bdev; } ;
struct TYPE_4__ {void** val; } ;
struct kstatfs {int f_bsize; int f_blocks; TYPE_2__ f_fsid; int f_ffree; int f_bavail; int f_bfree; int f_namelen; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_3__ {scalar_t__ bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct super_block*) ;

__attribute__((used)) static int FUNC_2(struct dentry *VAR_4, struct kstatfs *VAR_5)
{
 struct super_block *VAR_6 = VAR_4->d_sb;
 u64 VAR_7 = 0;
 if (VAR_6->s_bdev)
  VAR_7 = FUNC_0(VAR_6->s_bdev->bd_dev);
 else if (VAR_6->s_dev)
  VAR_7 = FUNC_0(VAR_6->s_dev);

 VAR_5->f_type = VAR_2;
 VAR_5->f_namelen = VAR_3;
 VAR_5->f_bsize = VAR_1;
 VAR_5->f_bfree = VAR_5->f_bavail = VAR_5->f_ffree;
 VAR_5->f_blocks =
  (FUNC_1(VAR_4->d_sb) + VAR_1 - 1) >> VAR_0;
 VAR_5->f_fsid.val[0] = (u32)VAR_7;
 VAR_5->f_fsid.val[1] = (u32)(VAR_7 >> 32);
 return 0;
}
