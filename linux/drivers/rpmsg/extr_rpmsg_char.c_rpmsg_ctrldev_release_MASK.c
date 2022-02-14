
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_ctrldev {int dev; } ;
struct inode {int i_cdev; } ;
struct file {int dummy; } ;


 struct rpmsg_ctrldev* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct rpmsg_ctrldev *VAR_2 = FUNC_0(VAR_0->i_cdev);

 FUNC_1(&VAR_2->dev);

 return 0;
}
