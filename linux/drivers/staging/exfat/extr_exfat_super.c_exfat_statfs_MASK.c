
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct vol_info_t {scalar_t__ NumClusters; scalar_t__ UsedClusters; scalar_t__ FreeClusters; int ClusterSize; int FatType; } ;
struct super_block {int s_magic; TYPE_1__* s_bdev; } ;
struct TYPE_5__ {void** val; } ;
struct kstatfs {scalar_t__ f_blocks; scalar_t__ f_bfree; scalar_t__ f_bavail; int f_namelen; TYPE_2__ f_fsid; int f_bsize; int f_type; } ;
struct fs_info_t {scalar_t__ used_clusters; scalar_t__ num_clusters; scalar_t__ dev_ejected; int cluster_size; int vol_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_6__ {struct fs_info_t fs_info; } ;
struct TYPE_4__ {int bd_dev; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct super_block*,struct vol_info_t*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_3, struct kstatfs *VAR_4)
{
 struct super_block *VAR_5 = VAR_3->d_sb;
 u64 VAR_6 = FUNC_2(VAR_5->s_bdev->bd_dev);
 struct fs_info_t *VAR_7 = &(FUNC_0(VAR_5)->fs_info);
 struct vol_info_t VAR_8;

 if (VAR_7->used_clusters == VAR_2) {
  if (FUNC_1(VAR_5, &VAR_8) == VAR_1)
   return -VAR_0;

 } else {
  VAR_8.FatType = VAR_7->vol_type;
  VAR_8.ClusterSize = VAR_7->cluster_size;
  VAR_8.NumClusters = VAR_7->num_clusters - 2;
  VAR_8.UsedClusters = VAR_7->used_clusters;
  VAR_8.FreeClusters = VAR_8.NumClusters - VAR_8.UsedClusters;

  if (VAR_7->dev_ejected)
   FUNC_3("[EXFAT] statfs on device that is ejected\n");
 }

 VAR_4->f_type = VAR_5->s_magic;
 VAR_4->f_bsize = VAR_8.ClusterSize;
 VAR_4->f_blocks = VAR_8.NumClusters;
 VAR_4->f_bfree = VAR_8.FreeClusters;
 VAR_4->f_bavail = VAR_8.FreeClusters;
 VAR_4->f_fsid.val[0] = (u32)VAR_6;
 VAR_4->f_fsid.val[1] = (u32)(VAR_6 >> 32);
 VAR_4->f_namelen = 260;

 return 0;
}
