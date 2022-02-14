
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_dev {int dummy; } ;
struct vhost_net {struct vhost_dev dev; } ;
struct kiocb {struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct file {struct vhost_net* private_data; } ;
typedef int ssize_t ;


 int FUNC_0 (struct vhost_dev*,struct iov_iter*) ;

__attribute__((used)) static ssize_t FUNC_1(struct kiocb *VAR_0,
     struct iov_iter *VAR_1)
{
 struct file *VAR_2 = VAR_0->ki_filp;
 struct vhost_net *VAR_3 = VAR_2->private_data;
 struct vhost_dev *VAR_4 = &VAR_3->dev;

 return FUNC_0(VAR_4, VAR_1);
}
