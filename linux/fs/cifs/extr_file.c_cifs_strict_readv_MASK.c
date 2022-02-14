
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kiocb {int ki_pos; TYPE_4__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_6__ {int Capability; } ;
struct cifs_tcon {TYPE_5__* ses; TYPE_1__ fsUnixInfo; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
struct cifsInodeInfo {int lock_sem; } ;
struct cifsFileInfo {int tlink; } ;
typedef int ssize_t ;
struct TYPE_10__ {TYPE_3__* server; } ;
struct TYPE_9__ {scalar_t__ private_data; } ;
struct TYPE_8__ {TYPE_2__* vals; } ;
struct TYPE_7__ {int shared_lock_type; } ;


 int FUNC_0 (struct cifsInodeInfo*) ;
 struct cifsInodeInfo* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct cifsFileInfo*,int ,int ,int ,int ,int *,int ) ;
 int FUNC_5 (struct kiocb*,struct iov_iter*) ;
 int FUNC_6 (int *) ;
 struct inode* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct kiocb*,struct iov_iter*) ;
 int FUNC_9 (struct iov_iter*) ;
 int FUNC_10 (int ) ;
 struct cifs_tcon* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

ssize_t
FUNC_13(struct kiocb *VAR_4, struct iov_iter *VAR_5)
{
 struct inode *VAR_6 = FUNC_7(VAR_4->ki_filp);
 struct cifsInodeInfo *VAR_7 = FUNC_1(VAR_6);
 struct cifs_sb_info *VAR_8 = FUNC_2(VAR_6->i_sb);
 struct cifsFileInfo *VAR_9 = (struct cifsFileInfo *)
      VAR_4->ki_filp->private_data;
 struct cifs_tcon *VAR_10 = FUNC_11(VAR_9->tlink);
 int VAR_11 = -VAR_3;
 if (!FUNC_0(VAR_7))
  return FUNC_5(VAR_4, VAR_5);

 if (FUNC_3(VAR_10->ses) &&
     (VAR_2 & FUNC_10(VAR_10->fsUnixInfo.Capability)) &&
     ((VAR_8->mnt_cifs_flags & VAR_0) == 0))
  return FUNC_8(VAR_4, VAR_5);





 FUNC_6(&VAR_7->lock_sem);
 if (!FUNC_4(VAR_9, VAR_4->ki_pos, FUNC_9(VAR_5),
         VAR_10->ses->server->vals->shared_lock_type,
         0, ((void*)0), VAR_1))
  VAR_11 = FUNC_8(VAR_4, VAR_5);
 FUNC_12(&VAR_7->lock_sem);
 return VAR_11;
}
