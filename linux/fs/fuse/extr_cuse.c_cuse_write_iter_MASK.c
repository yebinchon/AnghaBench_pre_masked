
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int dummy; } ;
struct iov_iter {int dummy; } ;
struct fuse_io_priv {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fuse_io_priv FUNC_0 (struct kiocb*) ;
 int FUNC_1 (struct fuse_io_priv*,struct iov_iter*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct fuse_io_priv VAR_4 = FUNC_0(VAR_2);
 loff_t VAR_5 = 0;




 return FUNC_1(&VAR_4, VAR_3, &VAR_5,
         VAR_1 | VAR_0);
}
