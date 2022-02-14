
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_flags; int ki_pos; } ;
struct iov_iter {int dummy; } ;
struct fuse_io_priv {int dummy; } ;
typedef int ssize_t ;


 struct fuse_io_priv FUNC_0 (struct kiocb*) ;
 int VAR_0 ;
 int FUNC_1 (struct fuse_io_priv*,struct iov_iter*,int *) ;
 int FUNC_2 (struct kiocb*,struct iov_iter*) ;
 int FUNC_3 (struct kiocb*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 ssize_t VAR_3;

 if (!FUNC_3(VAR_1) && VAR_1->ki_flags & VAR_0) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 } else {
  struct fuse_io_priv VAR_4 = FUNC_0(VAR_1);

  VAR_3 = FUNC_1(&VAR_4, VAR_2, &VAR_1->ki_pos);
 }

 return VAR_3;
}
