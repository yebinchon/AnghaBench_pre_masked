
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct jfs_sb_info {int umask; int gid; int uid; } ;
struct jfs_inode_info {int fileset; int mode2; int next_index; int otime; int acltype; int dev; scalar_t__ xtlid; scalar_t__ atltail; scalar_t__ atlhead; scalar_t__ blid; scalar_t__ bxflag; scalar_t__ btorder; scalar_t__ btindex; scalar_t__ cflag; int i_inline_ea; int i_xtroot; int i_dirtable; int ea; int acl; int ixpxd; int saved_gid; int saved_uid; } ;
struct TYPE_12__ {int tv_sec; int tv_nsec; } ;
struct TYPE_10__ {int tv_sec; int tv_nsec; } ;
struct TYPE_8__ {int tv_sec; int tv_nsec; } ;
struct inode {int i_mode; int i_generation; int i_rdev; int i_sb; int i_blocks; TYPE_5__ i_ctime; TYPE_3__ i_mtime; TYPE_1__ i_atime; int i_size; int i_gid; int i_uid; } ;
struct TYPE_14__ {int tv_sec; } ;
struct TYPE_13__ {int tv_nsec; int tv_sec; } ;
struct TYPE_11__ {int tv_nsec; int tv_sec; } ;
struct TYPE_9__ {int tv_nsec; int tv_sec; } ;
struct dinode {int di_inlineea; int di_xtroot; int di_dirtable; int di_rdev; int di_acltype; TYPE_7__ di_otime; int di_next_index; int di_ea; int di_acl; int di_ixpxd; int di_gen; int di_nblocks; TYPE_6__ di_ctime; TYPE_4__ di_mtime; TYPE_2__ di_atime; int di_size; int di_gid; int di_uid; int di_nlink; int di_mode; int di_fileset; } ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 struct jfs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int *,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct dinode * VAR_1, struct inode *VAR_2)
{
 struct jfs_inode_info *VAR_3 = FUNC_0(VAR_2);
 struct jfs_sb_info *VAR_4 = FUNC_1(VAR_2->i_sb);

 VAR_3->fileset = FUNC_10(VAR_1->di_fileset);
 VAR_3->mode2 = FUNC_10(VAR_1->di_mode);
 FUNC_9(VAR_2);

 VAR_2->i_mode = FUNC_10(VAR_1->di_mode) & 0xffff;
 if (VAR_4->umask != -1) {
  VAR_2->i_mode = (VAR_2->i_mode & ~0777) | (0777 & ~VAR_4->umask);

  if (FUNC_5(VAR_2->i_mode)) {
   if (VAR_2->i_mode & 0400)
    VAR_2->i_mode |= 0100;
   if (VAR_2->i_mode & 0040)
    VAR_2->i_mode |= 0010;
   if (VAR_2->i_mode & 0004)
    VAR_2->i_mode |= 0001;
  }
 }
 FUNC_16(VAR_2, FUNC_10(VAR_1->di_nlink));

 VAR_3->saved_uid = FUNC_13(&VAR_0, FUNC_10(VAR_1->di_uid));
 if (!FUNC_17(VAR_4->uid))
  VAR_2->i_uid = VAR_3->saved_uid;
 else {
  VAR_2->i_uid = VAR_4->uid;
 }

 VAR_3->saved_gid = FUNC_12(&VAR_0, FUNC_10(VAR_1->di_gid));
 if (!FUNC_8(VAR_4->gid))
  VAR_2->i_gid = VAR_3->saved_gid;
 else {
  VAR_2->i_gid = VAR_4->gid;
 }

 VAR_2->i_size = FUNC_11(VAR_1->di_size);
 VAR_2->i_atime.tv_sec = FUNC_10(VAR_1->di_atime.tv_sec);
 VAR_2->i_atime.tv_nsec = FUNC_10(VAR_1->di_atime.tv_nsec);
 VAR_2->i_mtime.tv_sec = FUNC_10(VAR_1->di_mtime.tv_sec);
 VAR_2->i_mtime.tv_nsec = FUNC_10(VAR_1->di_mtime.tv_nsec);
 VAR_2->i_ctime.tv_sec = FUNC_10(VAR_1->di_ctime.tv_sec);
 VAR_2->i_ctime.tv_nsec = FUNC_10(VAR_1->di_ctime.tv_nsec);
 VAR_2->i_blocks = FUNC_2(VAR_2->i_sb, FUNC_11(VAR_1->di_nblocks));
 VAR_2->i_generation = FUNC_10(VAR_1->di_gen);

 VAR_3->ixpxd = VAR_1->di_ixpxd;
 VAR_3->acl = VAR_1->di_acl;
 VAR_3->ea = VAR_1->di_ea;
 VAR_3->next_index = FUNC_10(VAR_1->di_next_index);
 VAR_3->otime = FUNC_10(VAR_1->di_otime.tv_sec);
 VAR_3->acltype = FUNC_10(VAR_1->di_acltype);

 if (FUNC_4(VAR_2->i_mode) || FUNC_3(VAR_2->i_mode)) {
  VAR_3->dev = FUNC_10(VAR_1->di_rdev);
  VAR_2->i_rdev = FUNC_15(VAR_3->dev);
 }

 if (FUNC_5(VAR_2->i_mode)) {
  FUNC_14(&VAR_3->i_dirtable, &VAR_1->di_dirtable, 384);
 } else if (FUNC_7(VAR_2->i_mode) || FUNC_6(VAR_2->i_mode)) {
  FUNC_14(&VAR_3->i_xtroot, &VAR_1->di_xtroot, 288);
 } else
  FUNC_14(&VAR_3->i_inline_ea, &VAR_1->di_inlineea, 128);


 VAR_3->cflag = 0;
 VAR_3->btindex = 0;
 VAR_3->btorder = 0;
 VAR_3->bxflag = 0;
 VAR_3->blid = 0;
 VAR_3->atlhead = 0;
 VAR_3->atltail = 0;
 VAR_3->xtlid = 0;
 return (0);
}
