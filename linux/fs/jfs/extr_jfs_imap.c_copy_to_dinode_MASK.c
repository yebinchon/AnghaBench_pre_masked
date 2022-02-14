
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


struct jfs_sb_info {int inostamp; int umask; int gid; int uid; } ;
struct jfs_inode_info {int fileset; int mode2; int next_index; int otime; int acltype; int dev; int ea; int acl; int ixpxd; int saved_gid; int saved_uid; } ;
struct TYPE_13__ {int tv_sec; int tv_nsec; } ;
struct TYPE_11__ {int tv_sec; int tv_nsec; } ;
struct TYPE_9__ {int tv_sec; int tv_nsec; } ;
struct inode {int i_ino; int i_generation; int i_nlink; int i_mode; TYPE_6__ i_mtime; TYPE_4__ i_ctime; TYPE_2__ i_atime; int i_blocks; int i_sb; int i_size; } ;
struct TYPE_14__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_12__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_10__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_8__ {void* tv_nsec; void* tv_sec; } ;
struct dinode {void* di_rdev; void* di_acltype; TYPE_7__ di_otime; void* di_next_index; int di_ea; int di_acl; int di_ixpxd; TYPE_5__ di_mtime; TYPE_3__ di_ctime; TYPE_1__ di_atime; void* di_mode; void* di_gid; void* di_uid; void* di_nlink; void* di_nblocks; void* di_size; void* di_gen; void* di_number; void* di_inostamp; void* di_fileset; } ;


 struct jfs_inode_info* FUNC_0 (struct inode*) ;
 struct jfs_sb_info* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int VAR_0 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct dinode * VAR_1, struct inode *VAR_2)
{
 struct jfs_inode_info *VAR_3 = FUNC_0(VAR_2);
 struct jfs_sb_info *VAR_4 = FUNC_1(VAR_2->i_sb);

 VAR_1->di_fileset = FUNC_5(VAR_3->fileset);
 VAR_1->di_inostamp = FUNC_5(VAR_4->inostamp);
 VAR_1->di_number = FUNC_5(VAR_2->i_ino);
 VAR_1->di_gen = FUNC_5(VAR_2->i_generation);
 VAR_1->di_size = FUNC_6(VAR_2->i_size);
 VAR_1->di_nblocks = FUNC_6(FUNC_2(VAR_2->i_sb, VAR_2->i_blocks));
 VAR_1->di_nlink = FUNC_5(VAR_2->i_nlink);
 if (!FUNC_12(VAR_4->uid))
  VAR_1->di_uid = FUNC_5(FUNC_11(VAR_2));
 else
  VAR_1->di_uid =FUNC_5(FUNC_8(&VAR_0,
         VAR_3->saved_uid));
 if (!FUNC_9(VAR_4->gid))
  VAR_1->di_gid = FUNC_5(FUNC_10(VAR_2));
 else
  VAR_1->di_gid = FUNC_5(FUNC_7(&VAR_0,
          VAR_3->saved_gid));




 if (VAR_4->umask == -1)
  VAR_1->di_mode = FUNC_5((VAR_3->mode2 & 0xffff0000) |
        VAR_2->i_mode);
 else
  VAR_1->di_mode = FUNC_5(VAR_3->mode2);

 VAR_1->di_atime.tv_sec = FUNC_5(VAR_2->i_atime.tv_sec);
 VAR_1->di_atime.tv_nsec = FUNC_5(VAR_2->i_atime.tv_nsec);
 VAR_1->di_ctime.tv_sec = FUNC_5(VAR_2->i_ctime.tv_sec);
 VAR_1->di_ctime.tv_nsec = FUNC_5(VAR_2->i_ctime.tv_nsec);
 VAR_1->di_mtime.tv_sec = FUNC_5(VAR_2->i_mtime.tv_sec);
 VAR_1->di_mtime.tv_nsec = FUNC_5(VAR_2->i_mtime.tv_nsec);
 VAR_1->di_ixpxd = VAR_3->ixpxd;
 VAR_1->di_acl = VAR_3->acl;
 VAR_1->di_ea = VAR_3->ea;
 VAR_1->di_next_index = FUNC_5(VAR_3->next_index);
 VAR_1->di_otime.tv_sec = FUNC_5(VAR_3->otime);
 VAR_1->di_otime.tv_nsec = 0;
 VAR_1->di_acltype = FUNC_5(VAR_3->acltype);
 if (FUNC_4(VAR_2->i_mode) || FUNC_3(VAR_2->i_mode))
  VAR_1->di_rdev = FUNC_5(VAR_3->dev);
}
