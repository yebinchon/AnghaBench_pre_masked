
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_dev {int dummy; } ;
struct vhost_net {struct vhost_dev dev; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {int f_flags; struct vhost_net* private_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct vhost_dev*,struct iov_iter*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct kiocb *VAR_1, struct iov_iter *VAR_2)
{
 struct file *VAR_3 = VAR_1->ki_filp;
 struct vhost_net *VAR_4 = VAR_3->private_data;
 struct vhost_dev *VAR_5 = &VAR_4->dev;
 int VAR_6 = VAR_3->f_flags & VAR_0;

 return FUNC_0(VAR_5, VAR_2, VAR_6);
}
