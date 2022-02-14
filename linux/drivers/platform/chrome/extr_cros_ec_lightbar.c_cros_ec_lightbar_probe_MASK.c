
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct cros_ec_platform {int ec_name; } ;
struct TYPE_4__ {int kobj; } ;
struct cros_ec_dev {TYPE_1__ class_dev; int dev; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 struct cros_ec_dev* FUNC_1 (int ) ;
 struct cros_ec_platform* FUNC_2 (int ) ;
 int FUNC_3 (struct cros_ec_dev*,int *,int *) ;
 int FUNC_4 (struct cros_ec_dev*,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct cros_ec_dev *VAR_4 = FUNC_1(VAR_3->dev.parent);
 struct cros_ec_platform *VAR_5 = FUNC_2(VAR_4->dev);
 struct device *VAR_6 = &VAR_3->dev;
 int VAR_7;





 if (FUNC_5(VAR_5->ec_name, VAR_0) != 0)
  return -VAR_1;





 if (!FUNC_3(VAR_4, ((void*)0), ((void*)0)))
  return -VAR_1;


 FUNC_4(VAR_4, 1);

 VAR_7 = FUNC_6(&VAR_4->class_dev.kobj,
     &VAR_2);
 if (VAR_7 < 0)
  FUNC_0(VAR_6, "failed to create %s attributes. err=%d\n",
   VAR_2.name, VAR_7);

 return VAR_7;
}
