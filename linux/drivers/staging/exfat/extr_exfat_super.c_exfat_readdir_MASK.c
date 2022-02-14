
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {unsigned long i_ino; struct super_block* i_sb; } ;
struct fs_info_t {scalar_t__ vol_type; } ;
struct TYPE_4__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct bd_info_t {int sector_size_bits; } ;
struct exfat_sb_info {struct bd_info_t bd_info; struct fs_info_t fs_info; } ;
struct dir_entry_t {int Attr; int * Name; int ShortName; } ;
struct dir_context {int pos; } ;
typedef int loff_t ;
struct TYPE_5__ {int rwoffset; scalar_t__ start_clu; int size; } ;
struct TYPE_6__ {TYPE_2__ fid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 unsigned long VAR_11 ;
 struct exfat_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_12 ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct dir_context*,int *,int ,unsigned long,int ) ;
 int FUNC_5 (struct file*,struct dir_context*) ;
 struct inode* FUNC_6 (struct super_block*,int) ;
 int FUNC_7 (struct inode*,struct dir_entry_t*) ;
 struct inode* FUNC_8 (struct file*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 unsigned long FUNC_11 (struct super_block*,unsigned long) ;
 int FUNC_12 (int ,int ,int ) ;
 unsigned long FUNC_13 (int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_13, struct dir_context *VAR_14)
{
 struct inode *VAR_15 = FUNC_8(VAR_13);
 struct super_block *VAR_16 = VAR_15->i_sb;
 struct exfat_sb_info *VAR_17 = FUNC_1(VAR_16);
 struct fs_info_t *VAR_18 = &(VAR_17->fs_info);
 struct bd_info_t *VAR_19 = &(FUNC_1(VAR_16)->bd_info);
 struct dir_entry_t VAR_20;
 unsigned long VAR_21;
 loff_t VAR_22;
 int VAR_23 = 0;

 FUNC_2(VAR_16);

 VAR_22 = VAR_14->pos;

 if ((VAR_18->vol_type == VAR_10) || (VAR_15->i_ino == VAR_11)) {
  while (VAR_22 < 2) {
   if (VAR_15->i_ino == VAR_11)
    VAR_21 = VAR_11;
   else if (VAR_22 == 0)
    VAR_21 = VAR_15->i_ino;
   else
    VAR_21 = FUNC_13(VAR_13->f_path.dentry);

   if (!FUNC_5(VAR_13, VAR_14))
    goto out;
   VAR_22++;
   VAR_14->pos++;
  }
  if (VAR_22 == 2)
   VAR_22 = 0;
 }
 if (VAR_22 & (VAR_1 - 1)) {
  VAR_23 = -VAR_9;
  goto out;
 }

get_new:
 FUNC_0(VAR_15)->fid.size = FUNC_9(VAR_15);
 FUNC_0(VAR_15)->fid.rwoffset = VAR_22 >> VAR_2;

 VAR_23 = FUNC_7(VAR_15, &VAR_20);
 if (VAR_23) {



  if (VAR_23 == VAR_12) {
   VAR_22 += 1 << VAR_19->sector_size_bits;
   VAR_22 &= ~((1 << VAR_19->sector_size_bits) - 1);
  }

  VAR_23 = -VAR_8;
  goto end_of_dir;
 }

 VAR_22 = FUNC_0(VAR_15)->fid.rwoffset << VAR_2;

 if (!VAR_20.Name[0])
  goto end_of_dir;

 if (!FUNC_12(VAR_20.ShortName, VAR_3, VAR_4)) {
  VAR_21 = VAR_15->i_ino;
 } else if (!FUNC_12(VAR_20.ShortName, VAR_5, VAR_4)) {
  VAR_21 = FUNC_13(VAR_13->f_path.dentry);
 } else {
  loff_t VAR_24 = ((loff_t)FUNC_0(VAR_15)->fid.start_clu << 32) |
    ((FUNC_0(VAR_15)->fid.rwoffset - 1) & 0xffffffff);
  struct inode *VAR_25 = FUNC_6(VAR_16, VAR_24);

  if (VAR_25) {
   VAR_21 = VAR_25->i_ino;
   FUNC_10(VAR_25);
  } else {
   VAR_21 = FUNC_11(VAR_16, VAR_11);
  }
 }

 if (!FUNC_4(VAR_14, VAR_20.Name, FUNC_14(VAR_20.Name), VAR_21,
        (VAR_20.Attr & VAR_0) ? VAR_6 : VAR_7))
  goto out;

 VAR_14->pos = VAR_22;
 goto get_new;

end_of_dir:
 VAR_14->pos = VAR_22;
out:
 FUNC_3(VAR_16);
 return VAR_23;
}
