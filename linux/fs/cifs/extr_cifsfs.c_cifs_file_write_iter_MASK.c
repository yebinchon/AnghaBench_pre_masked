
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {TYPE_1__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_mapping; } ;
struct cifsInodeInfo {scalar_t__ oplock; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int f_flags; } ;


 scalar_t__ FUNC_0 (struct cifsInodeInfo*) ;
 scalar_t__ FUNC_1 (struct cifsInodeInfo*) ;
 struct cifsInodeInfo* FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (struct cifsInodeInfo*) ;
 int FUNC_5 (struct cifsInodeInfo*) ;
 scalar_t__ FUNC_6 (struct kiocb*,struct iov_iter*) ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct kiocb*,struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_11(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct inode *VAR_4 = FUNC_8(VAR_2->ki_filp);
 struct cifsInodeInfo *VAR_5 = FUNC_2(VAR_4);
 ssize_t VAR_6;
 int VAR_7;

 if (VAR_2->ki_filp->f_flags & VAR_1) {
  VAR_6 = FUNC_6(VAR_2, VAR_3);
  if (VAR_6 > 0 && FUNC_0(VAR_5)) {
   FUNC_7(VAR_4);
   FUNC_3(VAR_0,
     "Set no oplock for inode=%p after a write operation\n",
     VAR_4);
   VAR_5->oplock = 0;
  }
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_10(VAR_2, VAR_3);

 if (FUNC_1(FUNC_2(VAR_4)))
  goto out;

 VAR_7 = FUNC_9(VAR_4->i_mapping);
 if (VAR_7)
  FUNC_3(VAR_0, "cifs_file_write_iter: %d rc on %p inode\n",
    VAR_7, VAR_4);

out:
 FUNC_5(VAR_5);
 return VAR_6;
}
