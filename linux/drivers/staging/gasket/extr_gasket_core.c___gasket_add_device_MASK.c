
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gasket_internal_desc {int class; struct gasket_driver_desc* driver_desc; } ;
struct gasket_driver_desc {int name; } ;
struct TYPE_2__ {int devt; int device; int name; } ;
struct gasket_dev {TYPE_1__ dev_info; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct gasket_internal_desc*,struct device*,struct gasket_dev**) ;
 int FUNC_5 (struct gasket_dev*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct gasket_dev*) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_2,
          struct gasket_internal_desc *VAR_3,
          struct gasket_dev **VAR_4)
{
 int VAR_5;
 struct gasket_dev *VAR_6;
 const struct gasket_driver_desc *VAR_7 =
     VAR_3->driver_desc;

 VAR_5 = FUNC_4(VAR_3, VAR_2, &VAR_6);
 if (VAR_5)
  return VAR_5;
 if (FUNC_0(VAR_6->dev_info.device)) {
  FUNC_2(VAR_2, "Cannot create %s device %s [ret = %ld]\n",
   VAR_7->name, VAR_6->dev_info.name,
   FUNC_1(VAR_6->dev_info.device));
  VAR_5 = -VAR_0;
  goto free_gasket_dev;
 }

 VAR_5 = FUNC_7(VAR_6->dev_info.device,
       VAR_6);
 if (VAR_5)
  goto remove_device;

 VAR_5 = FUNC_6(VAR_6->dev_info.device,
       VAR_1);
 if (VAR_5)
  goto remove_sysfs_mapping;

 *VAR_4 = VAR_6;
 return 0;

remove_sysfs_mapping:
 FUNC_8(VAR_6->dev_info.device);
remove_device:
 FUNC_3(VAR_3->class, VAR_6->dev_info.devt);
free_gasket_dev:
 FUNC_5(VAR_6);
 return VAR_5;
}
