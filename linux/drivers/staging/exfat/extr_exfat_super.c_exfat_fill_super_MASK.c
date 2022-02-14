
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_maxbytes; struct exfat_sb_info* s_fs_info; int s_root; int * s_export_op; int * s_op; int s_magic; int s_flags; } ;
struct inode {int i_ino; } ;
struct TYPE_5__ {int codepage; char* iocharset; } ;
struct TYPE_4__ {scalar_t__ vol_type; } ;
struct exfat_sb_info {TYPE_2__ options; void* nls_io; void* nls_disk; TYPE_1__ fs_info; int s_lock; } ;
struct TYPE_6__ {int i_pos; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int VAR_8 ;
 int FUNC_4 (struct exfat_sb_info*) ;
 int FUNC_5 (struct super_block*) ;
 long FUNC_6 (struct inode*) ;
 int VAR_9 ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 struct exfat_sb_info* FUNC_11 (int,int ) ;
 void* FUNC_12 (char*) ;
 int FUNC_13 (int *) ;
 struct inode* FUNC_14 (struct super_block*) ;
 long FUNC_15 (void*,int,int*,TYPE_2__*) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (struct super_block*,int) ;
 int FUNC_18 (struct super_block*) ;
 int FUNC_19 (char*,char*,int) ;

__attribute__((used)) static int FUNC_20(struct super_block *VAR_10, void *VAR_11, int VAR_12)
{
 struct inode *VAR_13 = ((void*)0);
 struct exfat_sb_info *VAR_14;
 int VAR_15, VAR_16;
 long VAR_17;
 char VAR_18[50];







 VAR_14 = FUNC_11(sizeof(*VAR_14), VAR_6);
 if (!VAR_14)
  return -VAR_2;
 FUNC_13(&VAR_14->s_lock);
 VAR_10->s_fs_info = VAR_14;
 VAR_10->s_flags |= VAR_7;
 VAR_10->s_magic = VAR_5;
 VAR_10->s_op = &VAR_9;
 VAR_10->s_export_op = &VAR_8;

 VAR_17 = FUNC_15(VAR_11, VAR_12, &VAR_15, &VAR_14->options);
 if (VAR_17)
  goto out_fail;

 FUNC_18(VAR_10);

 VAR_17 = -VAR_1;
 FUNC_17(VAR_10, 512);
 VAR_10->s_maxbytes = 0x7fffffffffffffffLL;

 VAR_16 = FUNC_7(VAR_10);
 if (VAR_16) {
  if (!VAR_12)
   FUNC_16("[EXFAT] ffsMountVol failed\n");

  goto out_fail;
 }


 FUNC_5(VAR_10);
 if (VAR_14->fs_info.vol_type != VAR_3) {
  VAR_17 = -VAR_0;
  FUNC_19(VAR_18, "cp%d", VAR_14->options.codepage);
  VAR_14->nls_disk = FUNC_12(VAR_18);
  if (!VAR_14->nls_disk) {
   FUNC_16("[EXFAT] Codepage %s not found\n", VAR_18);
   goto out_fail2;
  }
 }

 VAR_14->nls_io = FUNC_12(VAR_14->options.iocharset);

 VAR_17 = -VAR_2;
 VAR_13 = FUNC_14(VAR_10);
 if (!VAR_13)
  goto out_fail2;
 VAR_13->i_ino = VAR_4;
 FUNC_1(VAR_13, 1);

 VAR_17 = FUNC_6(VAR_13);
 if (VAR_17 < 0)
  goto out_fail2;
 VAR_17 = -VAR_2;
 FUNC_3(VAR_13, FUNC_0(VAR_13)->i_pos);
 FUNC_9(VAR_13);
 VAR_10->s_root = FUNC_2(VAR_13);
 if (!VAR_10->s_root) {
  FUNC_16("[EXFAT] Getting the root inode failed\n");
  goto out_fail2;
 }

 return 0;

out_fail2:
 FUNC_8(VAR_10);
out_fail:
 if (VAR_13)
  FUNC_10(VAR_13);
 VAR_10->s_fs_info = ((void*)0);
 FUNC_4(VAR_14);
 return VAR_17;
}
