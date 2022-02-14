
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fs_gid; int fs_uid; } ;
struct msdos_sb_info {int dir_entries; int cluster_size; scalar_t__ root_cluster; int dir_ops; TYPE_1__ options; } ;
struct msdos_dir_entry {int dummy; } ;
struct TYPE_9__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct inode {int i_size; int i_blocks; TYPE_4__ i_ctime; TYPE_3__ i_atime; TYPE_2__ i_mtime; int * i_fop; int i_op; int i_mode; scalar_t__ i_generation; int i_gid; int i_uid; int i_sb; } ;
typedef int loff_t ;
struct TYPE_10__ {int mmu_private; scalar_t__ i_logstart; scalar_t__ i_start; int i_pos; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct msdos_sb_info* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int FUNC_3 (struct msdos_sb_info*,int ,int ) ;
 int FUNC_4 (struct inode*,int ) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct msdos_sb_info*) ;
 int FUNC_8 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_4)
{
 struct msdos_sb_info *VAR_5 = FUNC_1(VAR_4->i_sb);
 int VAR_6;

 FUNC_0(VAR_4)->i_pos = VAR_1;
 VAR_4->i_uid = VAR_5->options.fs_uid;
 VAR_4->i_gid = VAR_5->options.fs_gid;
 FUNC_6(VAR_4);
 VAR_4->i_generation = 0;
 VAR_4->i_mode = FUNC_3(VAR_5, VAR_0, VAR_2);
 VAR_4->i_op = VAR_5->dir_ops;
 VAR_4->i_fop = &VAR_3;
 if (FUNC_7(VAR_5)) {
  FUNC_0(VAR_4)->i_start = VAR_5->root_cluster;
  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
 } else {
  FUNC_0(VAR_4)->i_start = 0;
  VAR_4->i_size = VAR_5->dir_entries * sizeof(struct msdos_dir_entry);
 }
 VAR_4->i_blocks = ((VAR_4->i_size + (VAR_5->cluster_size - 1))
      & ~((loff_t)VAR_5->cluster_size - 1)) >> 9;
 FUNC_0(VAR_4)->i_logstart = 0;
 FUNC_0(VAR_4)->mmu_private = VAR_4->i_size;

 FUNC_4(VAR_4, VAR_0);
 VAR_4->i_mtime.tv_sec = VAR_4->i_atime.tv_sec = VAR_4->i_ctime.tv_sec = 0;
 VAR_4->i_mtime.tv_nsec = VAR_4->i_atime.tv_nsec = VAR_4->i_ctime.tv_nsec = 0;
 FUNC_8(VAR_4, FUNC_5(VAR_4)+2);

 return 0;
}
