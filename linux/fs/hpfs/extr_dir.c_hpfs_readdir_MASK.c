
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {scalar_t__ i_ino; int i_sb; } ;
struct hpfs_inode_info {scalar_t__ i_dno; scalar_t__ i_parent_dir; } ;
struct hpfs_dirent {int namelen; int* name; int fnode; int not_8x3; scalar_t__ last; scalar_t__ first; } ;
struct TYPE_5__ {TYPE_1__* external; } ;
struct fnode {TYPE_2__ u; } ;
struct file {int f_pos; } ;
struct dir_context {int pos; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;
struct TYPE_6__ {int sb_chk; int sb_lowercase; } ;
struct TYPE_4__ {int disk_secno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct dir_context*,...) ;
 int FUNC_2 (struct file*,struct dir_context*) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct fnode*) ;
 int FUNC_5 (struct inode*,int *) ;
 int FUNC_6 (struct quad_buffer_head*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int,char*) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,char*,unsigned long,...) ;
 struct hpfs_inode_info* FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;
 struct fnode* FUNC_12 (int ,scalar_t__,struct buffer_head**) ;
 TYPE_3__* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,int,int*,int*,char*) ;
 unsigned char* FUNC_15 (int ,int*,int,int,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (unsigned char*) ;
 scalar_t__ FUNC_18 (int ) ;
 struct hpfs_dirent* FUNC_19 (struct inode*,int*,struct quad_buffer_head*) ;
 int FUNC_20 (char*,int) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct file *VAR_5, struct dir_context *VAR_6)
{
 struct inode *VAR_7 = FUNC_3(VAR_5);
 struct hpfs_inode_info *VAR_8 = FUNC_10(VAR_7);
 struct quad_buffer_head VAR_9;
 struct hpfs_dirent *VAR_10;
 int VAR_11;
 loff_t VAR_12;
 unsigned char *VAR_13;
 int VAR_14, VAR_15 = 0;
 int VAR_16 = 0;

 FUNC_11(VAR_7->i_sb);

 if (FUNC_13(VAR_7->i_sb)->sb_chk) {
  if (FUNC_7(VAR_7->i_sb, VAR_7->i_ino, 1, "dir_fnode")) {
   VAR_16 = -VAR_2;
   goto out;
  }
  if (FUNC_7(VAR_7->i_sb, VAR_8->i_dno, 4, "dir_dnode")) {
   VAR_16 = -VAR_2;
   goto out;
  }
 }
 if (FUNC_13(VAR_7->i_sb)->sb_chk >= 2) {
  struct buffer_head *VAR_17;
  struct fnode *VAR_18;
  int VAR_19 = 0;
  if (!(VAR_18 = FUNC_12(VAR_7->i_sb, VAR_7->i_ino, &VAR_17))) {
   VAR_16 = -VAR_3;
   goto out;
  }
  if (!FUNC_4(VAR_18)) {
   VAR_19 = 1;
   FUNC_9(VAR_7->i_sb, "not a directory, fnode %08lx",
     (unsigned long)VAR_7->i_ino);
  }
  if (VAR_8->i_dno != FUNC_18(VAR_18->u.external[0].disk_secno)) {
   VAR_19 = 1;
   FUNC_9(VAR_7->i_sb, "corrupted inode: i_dno == %08x, fnode -> dnode == %08x", VAR_8->i_dno, FUNC_18(VAR_18->u.external[0].disk_secno));
  }
  FUNC_0(VAR_17);
  if (VAR_19) {
   VAR_16 = -VAR_2;
   goto out;
  }
 }
 VAR_11 = FUNC_13(VAR_7->i_sb)->sb_lowercase;
 if (VAR_6->pos == 12) {
  VAR_6->pos = 13;
  goto out;
 }
 if (VAR_6->pos == 13) {
  VAR_16 = -VAR_4;
  goto out;
 }

 while (1) {
  again:



  if (FUNC_13(VAR_7->i_sb)->sb_chk)
   if (FUNC_14(VAR_7->i_sb, VAR_6->pos, &VAR_14, &VAR_15, "hpfs_readdir")) {
    VAR_16 = -VAR_2;
    goto out;
   }
  if (VAR_6->pos == 12)
   goto out;
  if (VAR_6->pos == 3 || VAR_6->pos == 4 || VAR_6->pos == 5) {
   FUNC_20("pos==%d\n", (int)VAR_6->pos);
   goto out;
  }
  if (VAR_6->pos == 0) {
   if (!FUNC_2(VAR_5, VAR_6))
    goto out;
   VAR_6->pos = 11;
  }
  if (VAR_6->pos == 11) {
   if (!FUNC_1(VAR_6, "..", 2, VAR_8->i_parent_dir, VAR_0))
    goto out;
   VAR_6->pos = 1;
  }
  if (VAR_6->pos == 1) {
   VAR_16 = FUNC_5(VAR_7, &VAR_5->f_pos);
   if (FUNC_21(VAR_16 < 0))
    goto out;
   VAR_6->pos = ((loff_t) FUNC_8(VAR_7->i_sb, VAR_8->i_dno) << 4) + 1;
  }
  VAR_12 = VAR_6->pos;
  if (!(VAR_10 = FUNC_19(VAR_7, &VAR_12, &VAR_9))) {
   VAR_6->pos = VAR_12;
   VAR_16 = -VAR_3;
   goto out;
  }
  if (VAR_10->first || VAR_10->last) {
   if (FUNC_13(VAR_7->i_sb)->sb_chk) {
    if (VAR_10->first && !VAR_10->last && (VAR_10->namelen != 2
        || VAR_10 ->name[0] != 1 || VAR_10->name[1] != 1))
     FUNC_9(VAR_7->i_sb, "hpfs_readdir: bad ^A^A entry; pos = %08lx", (unsigned long)VAR_6->pos);
    if (VAR_10->last && (VAR_10->namelen != 1 || VAR_10 ->name[0] != 255))
     FUNC_9(VAR_7->i_sb, "hpfs_readdir: bad \\377 entry; pos = %08lx", (unsigned long)VAR_6->pos);
   }
   FUNC_6(&VAR_9);
   VAR_6->pos = VAR_12;
   goto again;
  }
  VAR_13 = FUNC_15(VAR_7->i_sb, VAR_10->name, VAR_10->namelen, VAR_11, VAR_10->not_8x3);
  if (!FUNC_1(VAR_6, VAR_13, VAR_10->namelen, FUNC_18(VAR_10->fnode), VAR_1)) {
   if (VAR_13 != VAR_10->name) FUNC_17(VAR_13);
   FUNC_6(&VAR_9);
   goto out;
  }
  VAR_6->pos = VAR_12;
  if (VAR_13 != VAR_10->name) FUNC_17(VAR_13);
  FUNC_6(&VAR_9);
 }
out:
 FUNC_16(VAR_7->i_sb);
 return VAR_16;
}
