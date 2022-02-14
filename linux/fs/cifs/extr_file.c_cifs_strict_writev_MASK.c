
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {TYPE_2__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_3__ {int Capability; } ;
struct cifs_tcon {TYPE_1__ fsUnixInfo; int ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifsInodeInfo {scalar_t__ oplock; } ;
struct cifsFileInfo {int tlink; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ private_data; } ;


 scalar_t__ FUNC_0 (struct cifsInodeInfo*) ;
 scalar_t__ FUNC_1 (struct cifsInodeInfo*) ;
 struct cifsInodeInfo* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,struct inode*) ;
 scalar_t__ FUNC_6 (struct cifsInodeInfo*) ;
 int FUNC_7 (struct cifsInodeInfo*) ;
 scalar_t__ FUNC_8 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_9 (struct kiocb*,struct iov_iter*) ;
 int FUNC_10 (struct inode*) ;
 struct inode* FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (struct kiocb*,struct iov_iter*) ;
 int FUNC_13 (int ) ;
 struct cifs_tcon* FUNC_14 (int ) ;

ssize_t
FUNC_15(struct kiocb *VAR_3, struct iov_iter *VAR_4)
{
 struct inode *VAR_5 = FUNC_11(VAR_3->ki_filp);
 struct cifsInodeInfo *VAR_6 = FUNC_2(VAR_5);
 struct cifs_sb_info *VAR_7 = FUNC_3(VAR_5->i_sb);
 struct cifsFileInfo *VAR_8 = (struct cifsFileInfo *)
      VAR_3->ki_filp->private_data;
 struct cifs_tcon *VAR_9 = FUNC_14(VAR_8->tlink);
 ssize_t VAR_10;

 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10)
  return VAR_10;

 if (FUNC_1(VAR_6)) {
  if (FUNC_4(VAR_9->ses) &&
  (VAR_1 & FUNC_13(VAR_9->fsUnixInfo.Capability))
    && ((VAR_7->mnt_cifs_flags & VAR_0) == 0)) {
   VAR_10 = FUNC_12(VAR_3, VAR_4);
   goto out;
  }
  VAR_10 = FUNC_9(VAR_3, VAR_4);
  goto out;
 }






 VAR_10 = FUNC_8(VAR_3, VAR_4);
 if (FUNC_0(VAR_6)) {







  FUNC_10(VAR_5);
  FUNC_5(VAR_2, "Set Oplock/Lease to NONE for inode=%p after write\n",
    VAR_5);
  VAR_6->oplock = 0;
 }
out:
 FUNC_7(VAR_6);
 return VAR_10;
}
