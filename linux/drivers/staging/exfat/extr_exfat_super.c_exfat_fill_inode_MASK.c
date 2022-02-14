
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_generation; int i_blocks; int i_atime; int i_ctime; int i_mtime; TYPE_2__* i_mapping; int * i_fop; int * i_op; void* i_mode; int i_gid; int i_uid; int i_sb; } ;
struct fs_info_t {int cluster_size; } ;
struct file_id_t {int dummy; } ;
struct TYPE_4__ {int fs_gid; int fs_uid; } ;
struct exfat_sb_info {TYPE_1__ options; struct fs_info_t fs_info; } ;
struct dir_entry_t {int Attr; int AccessTimestamp; int CreateTimestamp; int ModifyTimestamp; int Size; int NumSubdirs; } ;
typedef int loff_t ;
struct TYPE_6__ {int mmu_private; int * target; scalar_t__ i_pos; int fid; } ;
struct TYPE_5__ {scalar_t__ nrpages; int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 struct exfat_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (struct exfat_sb_info*,int,int) ;
 int FUNC_4 (struct inode*,int) ;
 int VAR_7 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct inode*,struct dir_entry_t*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (int *,struct file_id_t*,int) ;
 int FUNC_11 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_8, struct file_id_t *VAR_9)
{
 struct exfat_sb_info *VAR_10 = FUNC_1(VAR_8->i_sb);
 struct fs_info_t *VAR_11 = &(VAR_10->fs_info);
 struct dir_entry_t VAR_12;

 FUNC_10(&(FUNC_0(VAR_8)->fid), VAR_9, sizeof(struct file_id_t));

 FUNC_6(VAR_8, &VAR_12);

 FUNC_0(VAR_8)->i_pos = 0;
 FUNC_0(VAR_8)->target = ((void*)0);
 VAR_8->i_uid = VAR_10->options.fs_uid;
 VAR_8->i_gid = VAR_10->options.fs_gid;
 FUNC_2(VAR_8);
 VAR_8->i_generation = FUNC_7();

 if (VAR_12.Attr & VAR_0) {
  VAR_8->i_generation &= ~1;
  VAR_8->i_mode = FUNC_3(VAR_10, VAR_12.Attr, 0777);
  VAR_8->i_op = &VAR_3;
  VAR_8->i_fop = &VAR_4;

  FUNC_9(VAR_8, VAR_12.Size);
  FUNC_0(VAR_8)->mmu_private = FUNC_8(VAR_8);
  FUNC_11(VAR_8, VAR_12.NumSubdirs);
 } else if (VAR_12.Attr & VAR_1) {
  VAR_8->i_generation |= 1;
  VAR_8->i_mode = FUNC_3(VAR_10, VAR_12.Attr, 0777);
  VAR_8->i_op = &VAR_7;

  FUNC_9(VAR_8, VAR_12.Size);
  FUNC_0(VAR_8)->mmu_private = FUNC_8(VAR_8);
 } else {
  VAR_8->i_generation |= 1;
  VAR_8->i_mode = FUNC_3(VAR_10, VAR_12.Attr, 0777);
  VAR_8->i_op = &VAR_5;
  VAR_8->i_fop = &VAR_6;
  VAR_8->i_mapping->a_ops = &VAR_2;
  VAR_8->i_mapping->nrpages = 0;

  FUNC_9(VAR_8, VAR_12.Size);
  FUNC_0(VAR_8)->mmu_private = FUNC_8(VAR_8);
 }
 FUNC_4(VAR_8, VAR_12.Attr);

 VAR_8->i_blocks = ((FUNC_8(VAR_8) + (VAR_11->cluster_size - 1))
    & ~((loff_t)VAR_11->cluster_size - 1)) >> 9;

 FUNC_5(&VAR_8->i_mtime, &VAR_12.ModifyTimestamp);
 FUNC_5(&VAR_8->i_ctime, &VAR_12.CreateTimestamp);
 FUNC_5(&VAR_8->i_atime, &VAR_12.AccessTimestamp);

 return 0;
}
