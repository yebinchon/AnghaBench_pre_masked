
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_dev {int fc; } ;
struct file {struct fuse_dev* private_data; } ;
struct cuse_conn {int fc; TYPE_1__* cdev; scalar_t__ dev; int list; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct cuse_conn* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1, struct file *VAR_2)
{
 struct fuse_dev *VAR_3 = VAR_2->private_data;
 struct cuse_conn *VAR_4 = FUNC_2(VAR_3->fc);
 int VAR_5;


 FUNC_6(&VAR_0);
 FUNC_5(&VAR_4->list);
 FUNC_7(&VAR_0);


 if (VAR_4->dev)
  FUNC_1(VAR_4->dev);
 if (VAR_4->cdev) {
  FUNC_8(VAR_4->cdev->dev, 1);
  FUNC_0(VAR_4->cdev);
 }

 FUNC_3(&VAR_4->fc);

 VAR_5 = FUNC_4(VAR_1, VAR_2);

 return VAR_5;
}
