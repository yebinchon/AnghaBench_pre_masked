
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct cros_ec_platform {int ec_name; } ;
struct cros_ec_dev {int dev; } ;
struct TYPE_4__ {int parent; int name; int * fops; int minor; } ;
struct chardev_data {TYPE_1__ misc; struct cros_ec_dev* ec_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cros_ec_dev* FUNC_0 (int ) ;
 struct cros_ec_platform* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,struct chardev_data*) ;
 struct chardev_data* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct cros_ec_dev *VAR_5 = FUNC_0(VAR_4->dev.parent);
 struct cros_ec_platform *VAR_6 = FUNC_1(VAR_5->dev);
 struct chardev_data *VAR_7;


 VAR_7 = FUNC_3(&VAR_4->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->ec_dev = VAR_5;
 VAR_7->misc.minor = VAR_2;
 VAR_7->misc.fops = &VAR_3;
 VAR_7->misc.name = VAR_6->ec_name;
 VAR_7->misc.parent = VAR_4->dev.parent;

 FUNC_2(&VAR_4->dev, VAR_7);

 return FUNC_4(&VAR_7->misc);
}
