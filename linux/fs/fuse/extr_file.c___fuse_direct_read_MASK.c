
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_io_priv {TYPE_1__* iocb; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int ki_filp; } ;


 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct fuse_io_priv*,struct iov_iter*,int *,int ) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static ssize_t FUNC_3(struct fuse_io_priv *VAR_0,
      struct iov_iter *VAR_1,
      loff_t *VAR_2)
{
 ssize_t VAR_3;
 struct inode *VAR_4 = FUNC_0(VAR_0->iocb->ki_filp);

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 0);

 FUNC_2(VAR_4);

 return VAR_3;
}
