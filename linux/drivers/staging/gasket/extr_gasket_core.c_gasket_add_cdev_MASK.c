
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_5__ {struct module* owner; } ;
struct gasket_cdev_info {int cdev_added; TYPE_1__* gasket_dev_ptr; int devt; TYPE_2__ cdev; } ;
struct file_operations {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,struct file_operations const*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct gasket_cdev_info *VAR_0,
      const struct file_operations *VAR_1,
      struct module *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->cdev, VAR_1);
 VAR_0->cdev.owner = VAR_2;
 VAR_3 = FUNC_0(&VAR_0->cdev, VAR_0->devt, 1);
 if (VAR_3) {
  FUNC_2(VAR_0->gasket_dev_ptr->dev,
   "cannot add char device [ret=%d]\n", VAR_3);
  return VAR_3;
 }
 VAR_0->cdev_added = 1;

 return 0;
}
