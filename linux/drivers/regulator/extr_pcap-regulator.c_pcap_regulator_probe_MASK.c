
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {void* driver_data; int init_data; TYPE_1__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {size_t id; TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 struct regulator_dev* FUNC_4 (TYPE_1__*,int *,struct regulator_config*) ;
 int * VAR_0 ;
 int FUNC_5 (struct platform_device*,struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct regulator_dev *VAR_2;
 void *VAR_3 = FUNC_2(VAR_1->dev.parent);
 struct regulator_config VAR_4 = { };

 VAR_4.dev = &VAR_1->dev;
 VAR_4.init_data = FUNC_3(&VAR_1->dev);
 VAR_4.driver_data = VAR_3;

 VAR_2 = FUNC_4(&VAR_1->dev, &VAR_0[VAR_1->id],
           &VAR_4);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_5(VAR_1, VAR_2);

 return 0;
}
