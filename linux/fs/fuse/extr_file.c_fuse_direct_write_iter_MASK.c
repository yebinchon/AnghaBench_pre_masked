
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_flags; int ki_pos; int ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_io_priv {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 struct fuse_io_priv FUNC_0 (struct kiocb*) ;
 int VAR_1 ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_3 (struct fuse_io_priv*,struct iov_iter*,int *,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 scalar_t__ FUNC_6 (struct kiocb*,struct iov_iter*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct kiocb*) ;

__attribute__((used)) static ssize_t FUNC_10(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2->ki_filp);
 struct fuse_io_priv VAR_5 = FUNC_0(VAR_2);
 ssize_t VAR_6;


 FUNC_7(VAR_4);
 VAR_6 = FUNC_6(VAR_2, VAR_3);
 if (VAR_6 > 0) {
  if (!FUNC_9(VAR_2) && VAR_2->ki_flags & VAR_1) {
   VAR_6 = FUNC_2(VAR_2, VAR_3);
  } else {
   VAR_6 = FUNC_3(&VAR_5, VAR_3, &VAR_2->ki_pos,
          VAR_0);
  }
 }
 FUNC_4(VAR_4);
 if (VAR_6 > 0)
  FUNC_5(VAR_4, VAR_2->ki_pos);
 FUNC_8(VAR_4);

 return VAR_6;
}
