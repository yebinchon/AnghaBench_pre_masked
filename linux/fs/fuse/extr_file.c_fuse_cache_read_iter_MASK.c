
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; TYPE_2__* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_conn {scalar_t__ auto_inval_data; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* f_mapping; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (struct inode*,TYPE_2__*) ;
 int FUNC_1 (struct kiocb*,struct iov_iter*) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kiocb *VAR_0, struct iov_iter *VAR_1)
{
 struct inode *VAR_2 = VAR_0->ki_filp->f_mapping->host;
 struct fuse_conn *VAR_3 = FUNC_2(VAR_2);






 if (VAR_3->auto_inval_data ||
     (VAR_0->ki_pos + FUNC_4(VAR_1) > FUNC_3(VAR_2))) {
  int VAR_4;
  VAR_4 = FUNC_0(VAR_2, VAR_0->ki_filp);
  if (VAR_4)
   return VAR_4;
 }

 return FUNC_1(VAR_0, VAR_1);
}
