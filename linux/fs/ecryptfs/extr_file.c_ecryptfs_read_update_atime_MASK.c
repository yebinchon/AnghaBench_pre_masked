
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int dummy; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
typedef scalar_t__ ssize_t ;


 struct path* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kiocb*,struct iov_iter*) ;
 int FUNC_2 (struct path*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kiocb *VAR_0,
    struct iov_iter *VAR_1)
{
 ssize_t VAR_2;
 struct path *VAR_3;
 struct file *VAR_4 = VAR_0->ki_filp;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 >= 0) {
  VAR_3 = FUNC_0(VAR_4->f_path.dentry);
  FUNC_2(VAR_3);
 }
 return VAR_2;
}
