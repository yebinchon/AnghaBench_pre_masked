
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {int kobj; } ;
struct cros_ec_dev {TYPE_1__ class_dev; } ;
struct TYPE_5__ {int name; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 struct cros_ec_dev* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct cros_ec_dev *VAR_2 = FUNC_1(VAR_1->dev.parent);
 struct device *VAR_3 = &VAR_1->dev;
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_2->class_dev.kobj,
     &VAR_0);
 if (VAR_4 < 0)
  FUNC_0(VAR_3, "failed to create %s attributes. err=%d\n",
   VAR_0.name, VAR_4);

 return VAR_4;
}
