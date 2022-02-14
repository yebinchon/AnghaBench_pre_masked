
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_blocks; int i_ctime; int i_atime; int i_mtime; int * i_fop; int * i_op; int i_mode; scalar_t__ i_generation; int i_gid; int i_uid; struct super_block* i_sb; } ;
struct fs_info_t {int cluster_size; scalar_t__ root_dir; } ;
struct TYPE_7__ {int fs_gid; int fs_uid; } ;
struct exfat_sb_info {TYPE_3__ options; struct fs_info_t fs_info; } ;
struct dir_entry_t {scalar_t__ NumSubdirs; int Size; } ;
typedef int loff_t ;
struct TYPE_5__ {int flags; scalar_t__ dir; } ;
struct TYPE_6__ {int entry; int flags; int hint_last_off; scalar_t__ rwoffset; int type; scalar_t__ start_clu; TYPE_1__ dir; } ;
struct TYPE_8__ {int i_pos; int mmu_private; int * target; TYPE_2__ fid; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 struct exfat_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct exfat_sb_info*,int ,int) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*,struct dir_entry_t*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_4)
{
 struct super_block *VAR_5 = VAR_4->i_sb;
 struct exfat_sb_info *VAR_6 = FUNC_1(VAR_5);
 struct fs_info_t *VAR_7 = &(VAR_6->fs_info);
 struct dir_entry_t VAR_8;

 FUNC_0(VAR_4)->fid.dir.dir = VAR_7->root_dir;
 FUNC_0(VAR_4)->fid.dir.flags = 0x01;
 FUNC_0(VAR_4)->fid.entry = -1;
 FUNC_0(VAR_4)->fid.start_clu = VAR_7->root_dir;
 FUNC_0(VAR_4)->fid.flags = 0x01;
 FUNC_0(VAR_4)->fid.type = VAR_1;
 FUNC_0(VAR_4)->fid.rwoffset = 0;
 FUNC_0(VAR_4)->fid.hint_last_off = -1;

 FUNC_0(VAR_4)->target = ((void*)0);

 FUNC_6(VAR_4, &VAR_8);

 VAR_4->i_uid = VAR_6->options.fs_uid;
 VAR_4->i_gid = VAR_6->options.fs_gid;
 FUNC_2(VAR_4);
 VAR_4->i_generation = 0;
 VAR_4->i_mode = FUNC_4(VAR_6, VAR_0, 0777);
 VAR_4->i_op = &VAR_2;
 VAR_4->i_fop = &VAR_3;

 FUNC_8(VAR_4, VAR_8.Size);
 VAR_4->i_blocks = ((FUNC_7(VAR_4) + (VAR_7->cluster_size - 1))
    & ~((loff_t)VAR_7->cluster_size - 1)) >> 9;
 FUNC_0(VAR_4)->i_pos = ((loff_t)VAR_7->root_dir << 32) | 0xffffffff;
 FUNC_0(VAR_4)->mmu_private = FUNC_7(VAR_4);

 FUNC_5(VAR_4, VAR_0);
 VAR_4->i_mtime = VAR_4->i_atime = VAR_4->i_ctime = FUNC_3(VAR_4);
 FUNC_9(VAR_4, VAR_8.NumSubdirs + 2);

 return 0;
}
