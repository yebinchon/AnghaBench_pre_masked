
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_test {int dev; } ;
struct inode {int dummy; } ;
struct file {struct vhost_test* private_data; } ;


 int FUNC_0 (struct vhost_test*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vhost_test*) ;
 int FUNC_4 (struct vhost_test*,void**) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct vhost_test *VAR_2 = VAR_1->private_data;
 void *VAR_3;

 FUNC_4(VAR_2, &VAR_3);
 FUNC_3(VAR_2);
 FUNC_2(&VAR_2->dev);
 FUNC_1(&VAR_2->dev);


 FUNC_3(VAR_2);
 FUNC_0(VAR_2);
 return 0;
}
