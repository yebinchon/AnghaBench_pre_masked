
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_dev {int dummy; } ;
struct vhost_net {struct vhost_dev dev; } ;
struct file {struct vhost_net* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int FUNC_0 (struct file*,struct vhost_dev*,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_0, poll_table *VAR_1)
{
 struct vhost_net *VAR_2 = VAR_0->private_data;
 struct vhost_dev *VAR_3 = &VAR_2->dev;

 return FUNC_0(VAR_0, VAR_3, VAR_1);
}
