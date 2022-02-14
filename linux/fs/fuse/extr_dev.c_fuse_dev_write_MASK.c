
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int ki_filp; } ;
struct iov_iter {int dummy; } ;
struct fuse_dev {int dummy; } ;
struct fuse_copy_state {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fuse_copy_state*,int ,struct iov_iter*) ;
 int FUNC_1 (struct fuse_dev*,struct fuse_copy_state*,int ) ;
 struct fuse_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kiocb *VAR_2, struct iov_iter *VAR_3)
{
 struct fuse_copy_state VAR_4;
 struct fuse_dev *VAR_5 = FUNC_2(VAR_2->ki_filp);

 if (!VAR_5)
  return -VAR_1;

 if (!FUNC_4(VAR_3))
  return -VAR_0;

 FUNC_0(&VAR_4, 0, VAR_3);

 return FUNC_1(VAR_5, &VAR_4, FUNC_3(VAR_3));
}
