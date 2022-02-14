
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct regulator_dev {int owner; TYPE_1__ dev; scalar_t__ exclusive; int open_count; } ;
struct regulator {int supply_name; int list; scalar_t__ dev; int debugfs; struct regulator_dev* rdev; int enable_count; } ;


 scalar_t__ FUNC_0 (struct regulator*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 (struct regulator*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_10 (struct regulator_dev*) ;
 int FUNC_11 (struct regulator_dev*) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void FUNC_13(struct regulator *VAR_1)
{
 struct regulator_dev *VAR_2;

 if (FUNC_0(VAR_1))
  return;

 FUNC_7(&VAR_0);


 FUNC_1(VAR_1->enable_count);

 VAR_2 = VAR_1->rdev;

 FUNC_2(VAR_1->debugfs);

 if (VAR_1->dev) {
  FUNC_3(VAR_1->dev, &VAR_2->dev);


  FUNC_12(&VAR_2->dev.kobj, VAR_1->supply_name);
 }

 FUNC_10(VAR_2);
 FUNC_6(&VAR_1->list);

 VAR_2->open_count--;
 VAR_2->exclusive = 0;
 FUNC_9(&VAR_2->dev);
 FUNC_11(VAR_2);

 FUNC_5(VAR_1->supply_name);
 FUNC_4(VAR_1);

 FUNC_8(VAR_2->owner);
}
