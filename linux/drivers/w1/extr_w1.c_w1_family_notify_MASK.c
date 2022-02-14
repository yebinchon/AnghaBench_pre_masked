
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct w1_slave {TYPE_2__ dev; TYPE_1__* family; struct device* hwmon; } ;
struct w1_family_ops {int (* add_slave ) (struct w1_slave*) ;int groups; int (* remove_slave ) (struct w1_slave*) ;int chip_info; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct w1_family_ops* fops; } ;




 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 struct device* FUNC_4 (TYPE_2__*,char*,struct w1_slave*,int ,int *) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct w1_slave*) ;
 int FUNC_7 (struct w1_slave*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(unsigned long VAR_1, struct w1_slave *VAR_2)
{
 struct w1_family_ops *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->family->fops;

 if (!VAR_3)
  return 0;

 switch (VAR_1) {
 case 129:

  if (VAR_3->add_slave) {
   VAR_4 = VAR_3->add_slave(VAR_2);
   if (VAR_4 < 0) {
    FUNC_2(&VAR_2->dev,
     "add_slave() call failed. err=%d\n",
     VAR_4);
    return VAR_4;
   }
  }
  if (VAR_3->groups) {
   VAR_4 = FUNC_8(&VAR_2->dev.kobj, VAR_3->groups);
   if (VAR_4) {
    FUNC_2(&VAR_2->dev,
     "sysfs group creation failed. err=%d\n",
     VAR_4);
    return VAR_4;
   }
  }
  if (FUNC_1(VAR_0) && VAR_3->chip_info) {
   struct device *VAR_5
    = FUNC_4(&VAR_2->dev,
      "w1_slave_temp", VAR_2,
      VAR_3->chip_info,
      ((void*)0));
   if (FUNC_0(VAR_5)) {
    FUNC_3(&VAR_2->dev,
      "could not create hwmon device\n");
   } else {
    VAR_2->hwmon = VAR_5;
   }
  }
  break;
 case 128:
  if (FUNC_1(VAR_0) && VAR_3->chip_info &&
       VAR_2->hwmon)
   FUNC_5(VAR_2->hwmon);
  if (VAR_3->remove_slave)
   VAR_2->family->fops->remove_slave(VAR_2);
  if (VAR_3->groups)
   FUNC_9(&VAR_2->dev.kobj, VAR_3->groups);
  break;
 }
 return 0;
}
