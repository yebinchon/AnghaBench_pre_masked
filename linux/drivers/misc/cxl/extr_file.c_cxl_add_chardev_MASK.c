
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_operations {int dummy; } ;
struct device {int dummy; } ;
struct cxl_afu {int dev; int slice; TYPE_1__* adapter; } ;
struct cdev {int dummy; } ;
typedef int dev_t ;
struct TYPE_2__ {int adapter_num; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct cdev*,int ,int) ;
 int FUNC_3 (struct cdev*) ;
 int FUNC_4 (struct cdev*,struct file_operations const*) ;
 int VAR_0 ;
 int FUNC_5 (int *,char*,char*,int) ;
 struct device* FUNC_6 (int ,int *,int ,struct cxl_afu*,char*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_7(struct cxl_afu *VAR_1, dev_t VAR_2, struct cdev *VAR_3,
      struct device **VAR_4, char *VAR_5, char *VAR_6,
      const struct file_operations *VAR_7)
{
 struct device *VAR_8;
 int VAR_9;

 FUNC_4(VAR_3, VAR_7);
 if ((VAR_9 = FUNC_2(VAR_3, VAR_2, 1))) {
  FUNC_5(&VAR_1->dev, "Unable to add %s chardev: %i\n", VAR_6, VAR_9);
  return VAR_9;
 }

 VAR_8 = FUNC_6(VAR_0, &VAR_1->dev, VAR_2, VAR_1,
   "afu%i.%i%s", VAR_1->adapter->adapter_num, VAR_1->slice, VAR_5);
 if (FUNC_0(VAR_8)) {
  FUNC_5(&VAR_1->dev, "Unable to create %s chardev in sysfs: %i\n", VAR_6, VAR_9);
  VAR_9 = FUNC_1(VAR_8);
  goto err;
 }

 *VAR_4 = VAR_8;

 return 0;
err:
 FUNC_3(VAR_3);
 return VAR_9;
}
