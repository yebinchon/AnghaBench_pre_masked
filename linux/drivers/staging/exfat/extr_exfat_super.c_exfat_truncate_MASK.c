
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_blocks; int i_mtime; int i_ctime; struct super_block* i_sb; } ;
struct fs_info_t {int cluster_size; } ;
struct exfat_sb_info {struct fs_info_t fs_info; } ;
typedef int loff_t ;
struct TYPE_3__ {scalar_t__ start_clu; } ;
struct TYPE_4__ {int mmu_private; TYPE_1__ fid; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 struct exfat_sb_info* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;

__attribute__((used)) static void FUNC_10(struct inode *VAR_0, loff_t VAR_1)
{
 struct super_block *VAR_2 = VAR_0->i_sb;
 struct exfat_sb_info *VAR_3 = FUNC_1(VAR_2);
 struct fs_info_t *VAR_4 = &(VAR_3->fs_info);
 int VAR_5;

 FUNC_3(VAR_2);





 if (FUNC_0(VAR_0)->mmu_private > FUNC_8(VAR_0))
  FUNC_0(VAR_0)->mmu_private = FUNC_8(VAR_0);

 if (FUNC_0(VAR_0)->fid.start_clu == 0)
  goto out;

 VAR_5 = FUNC_7(VAR_0, VAR_1, FUNC_8(VAR_0));
 if (VAR_5)
  goto out;

 VAR_0->i_ctime = VAR_0->i_mtime = FUNC_5(VAR_0);
 if (FUNC_2(VAR_0))
  (void)FUNC_6(VAR_0);
 else
  FUNC_9(VAR_0);

 VAR_0->i_blocks = ((FUNC_8(VAR_0) + (VAR_4->cluster_size - 1)) &
      ~((loff_t)VAR_4->cluster_size - 1)) >> 9;
out:
 FUNC_4(VAR_2);
}
