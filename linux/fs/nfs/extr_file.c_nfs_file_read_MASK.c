
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {int ki_flags; TYPE_1__* ki_filp; scalar_t__ ki_pos; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {int f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,int ,unsigned long) ;
 struct inode* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct kiocb*,struct iov_iter*) ;
 int FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (struct inode*,int ,scalar_t__) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*) ;

ssize_t
FUNC_9(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2->ki_filp);
 ssize_t VAR_5;

 if (VAR_2->ki_flags & VAR_0)
  return FUNC_6(VAR_2, VAR_3);

 FUNC_0("NFS: read(%pD2, %zu@%lu)\n",
  VAR_2->ki_filp,
  FUNC_3(VAR_3), (unsigned long) VAR_2->ki_pos);

 FUNC_8(VAR_4);
 VAR_5 = FUNC_7(VAR_4, VAR_2->ki_filp->f_mapping);
 if (!VAR_5) {
  VAR_5 = FUNC_2(VAR_2, VAR_3);
  if (VAR_5 > 0)
   FUNC_4(VAR_4, VAR_1, VAR_5);
 }
 FUNC_5(VAR_4);
 return VAR_5;
}
