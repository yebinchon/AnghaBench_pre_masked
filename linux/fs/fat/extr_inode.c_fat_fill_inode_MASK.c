
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ isvfat; scalar_t__ sys_immutable; scalar_t__ showexec; int fs_gid; int fs_uid; } ;
struct msdos_sb_info {int cluster_size; TYPE_2__ options; int * dir_ops; } ;
struct msdos_dir_entry {int attr; int adate; int ctime_cs; int cdate; int ctime; int date; int time; int size; scalar_t__ name; } ;
struct inode {int i_generation; int i_size; int i_blocks; int i_mtime; int i_atime; int i_ctime; int i_flags; TYPE_1__* i_mapping; int * i_fop; int * i_op; void* i_mode; int i_gid; int i_uid; int i_sb; } ;
typedef int loff_t ;
struct TYPE_6__ {int mmu_private; void* i_start; void* i_logstart; scalar_t__ i_pos; } ;
struct TYPE_4__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 struct msdos_sb_info* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct inode*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_4 (struct msdos_sb_info*,struct msdos_dir_entry*) ;
 void* FUNC_5 (struct msdos_sb_info*,int,int) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct msdos_sb_info*,int *,int ,int ,int ) ;
 int FUNC_9 (struct inode*,int *,int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct inode*,int ) ;

int FUNC_16(struct inode *VAR_12, struct msdos_dir_entry *VAR_13)
{
 struct msdos_sb_info *VAR_14 = FUNC_2(VAR_12->i_sb);
 int VAR_15;

 FUNC_1(VAR_12)->i_pos = 0;
 VAR_12->i_uid = VAR_14->options.fs_uid;
 VAR_12->i_gid = VAR_14->options.fs_gid;
 FUNC_12(VAR_12);
 VAR_12->i_generation = FUNC_11();

 if ((VAR_13->attr & VAR_0) && !FUNC_0(VAR_13->name)) {
  VAR_12->i_generation &= ~1;
  VAR_12->i_mode = FUNC_5(VAR_14, VAR_13->attr, VAR_6);
  VAR_12->i_op = VAR_14->dir_ops;
  VAR_12->i_fop = &VAR_9;

  FUNC_1(VAR_12)->i_start = FUNC_4(VAR_14, VAR_13);
  FUNC_1(VAR_12)->i_logstart = FUNC_1(VAR_12)->i_start;
  VAR_15 = FUNC_3(VAR_12);
  if (VAR_15 < 0)
   return VAR_15;
  FUNC_1(VAR_12)->mmu_private = VAR_12->i_size;

  FUNC_15(VAR_12, FUNC_7(VAR_12));

  VAR_15 = FUNC_10(VAR_12);
  if (VAR_15 < 0)
   return VAR_15;
 } else {
  VAR_12->i_generation |= 1;
  VAR_12->i_mode = FUNC_5(VAR_14, VAR_13->attr,
   ((VAR_14->options.showexec && !FUNC_13(VAR_13->name + 8))
    ? VAR_5|VAR_7 : VAR_6));
  FUNC_1(VAR_12)->i_start = FUNC_4(VAR_14, VAR_13);

  FUNC_1(VAR_12)->i_logstart = FUNC_1(VAR_12)->i_start;
  VAR_12->i_size = FUNC_14(VAR_13->size);
  VAR_12->i_op = &VAR_10;
  VAR_12->i_fop = &VAR_11;
  VAR_12->i_mapping->a_ops = &VAR_8;
  FUNC_1(VAR_12)->mmu_private = VAR_12->i_size;
 }
 if (VAR_13->attr & VAR_1) {
  if (VAR_14->options.sys_immutable)
   VAR_12->i_flags |= VAR_4;
 }
 FUNC_6(VAR_12, VAR_13->attr);

 VAR_12->i_blocks = ((VAR_12->i_size + (VAR_14->cluster_size - 1))
      & ~((loff_t)VAR_14->cluster_size - 1)) >> 9;

 FUNC_8(VAR_14, &VAR_12->i_mtime, VAR_13->time, VAR_13->date, 0);
 if (VAR_14->options.isvfat) {
  FUNC_8(VAR_14, &VAR_12->i_ctime, VAR_13->ctime,
      VAR_13->cdate, VAR_13->ctime_cs);
  FUNC_8(VAR_14, &VAR_12->i_atime, 0, VAR_13->adate, 0);
 } else
  FUNC_9(VAR_12, &VAR_12->i_mtime, VAR_2|VAR_3);

 return 0;
}
