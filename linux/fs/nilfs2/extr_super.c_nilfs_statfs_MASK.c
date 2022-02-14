
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct the_nilfs {unsigned long long ns_blocks_per_segment; unsigned long long ns_nsegments; unsigned long long ns_first_data_block; unsigned long ns_nrsvsegs; } ;
struct super_block {int s_blocksize; TYPE_1__* s_bdev; } ;
struct nilfs_root {int inodes_count; int ifile; struct the_nilfs* nilfs; } ;
struct TYPE_5__ {void** val; } ;
struct kstatfs {unsigned long long f_blocks; unsigned long f_bfree; unsigned long f_bavail; int f_files; int f_ffree; TYPE_2__ f_fsid; int f_namelen; int f_bsize; int f_type; } ;
struct dentry {struct super_block* d_sb; } ;
typedef unsigned long sector_t ;
struct TYPE_6__ {struct nilfs_root* i_root; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct the_nilfs*,unsigned long*) ;
 int FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (struct super_block*,int ,char*,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dentry *VAR_4, struct kstatfs *VAR_5)
{
 struct super_block *VAR_6 = VAR_4->d_sb;
 struct nilfs_root *VAR_7 = FUNC_0(FUNC_2(VAR_4))->i_root;
 struct the_nilfs *VAR_8 = VAR_7->nilfs;
 u64 VAR_9 = FUNC_3(VAR_6->s_bdev->bd_dev);
 unsigned long long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 sector_t VAR_13;
 u64 VAR_14, VAR_15;
 int VAR_16;







 VAR_10 = VAR_8->ns_blocks_per_segment * VAR_8->ns_nsegments
  - VAR_8->ns_first_data_block;
 VAR_12 = VAR_8->ns_nrsvsegs * VAR_8->ns_blocks_per_segment;







 VAR_11 = 0;

 VAR_16 = FUNC_4(VAR_8, &VAR_13);
 if (FUNC_7(VAR_16))
  return VAR_16;

 VAR_16 = FUNC_5(VAR_7->ifile,
         &VAR_14, &VAR_15);
 if (FUNC_7(VAR_16)) {
  FUNC_6(VAR_6, VAR_1,
     "failed to count free inodes: err=%d", VAR_16);
  if (VAR_16 == -VAR_0) {






   VAR_14 = FUNC_1(&VAR_7->inodes_count);
   VAR_15 = 0;
   VAR_16 = 0;
  } else
   return VAR_16;
 }

 VAR_5->f_type = VAR_3;
 VAR_5->f_bsize = VAR_6->s_blocksize;
 VAR_5->f_blocks = VAR_10 - VAR_11;
 VAR_5->f_bfree = VAR_13;
 VAR_5->f_bavail = (VAR_5->f_bfree >= VAR_12) ?
  (VAR_5->f_bfree - VAR_12) : 0;
 VAR_5->f_files = VAR_14;
 VAR_5->f_ffree = VAR_15;
 VAR_5->f_namelen = VAR_2;
 VAR_5->f_fsid.val[0] = (u32)VAR_9;
 VAR_5->f_fsid.val[1] = (u32)(VAR_9 >> 32);

 return 0;
}
