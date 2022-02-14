
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int kobj; } ;
struct cros_ec_dev {TYPE_2__ class_dev; } ;


 int VAR_0 ;
 struct cros_ec_dev* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct cros_ec_dev *VAR_2 = FUNC_0(VAR_1->dev.parent);

 FUNC_1(&VAR_2->class_dev.kobj,
      &VAR_0);

 return 0;
}
