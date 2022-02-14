
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ parent; } ;
struct regulator_dev {int * supply; scalar_t__ use_count; TYPE_2__ dev; TYPE_1__* desc; int supply_name; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 struct regulator_dev* VAR_1 ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_2__*) ;
 struct regulator_dev* FUNC_8 (struct device*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct regulator_dev*,struct regulator_dev*) ;

__attribute__((used)) static int FUNC_11(struct regulator_dev *VAR_2)
{
 struct regulator_dev *VAR_3;
 struct device *VAR_4 = VAR_2->dev.parent;
 int VAR_5;


 if (!VAR_2->supply_name)
  return 0;


 if (VAR_2->supply)
  return 0;

 VAR_3 = FUNC_8(VAR_4, VAR_2->supply_name);
 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_1(VAR_3);


  if (VAR_5 == -VAR_0)
   return VAR_5;

  if (FUNC_6()) {
   VAR_3 = VAR_1;
   FUNC_5(&VAR_3->dev);
  } else {
   FUNC_3(VAR_4, "Failed to resolve %s-supply for %s\n",
    VAR_2->supply_name, VAR_2->desc->name);
   return -VAR_0;
  }
 }







 if (VAR_3->dev.parent && VAR_3->dev.parent != VAR_2->dev.parent) {
  if (!FUNC_4(VAR_3->dev.parent)) {
   FUNC_7(&VAR_3->dev);
   return -VAR_0;
  }
 }


 VAR_5 = FUNC_11(VAR_3);
 if (VAR_5 < 0) {
  FUNC_7(&VAR_3->dev);
  return VAR_5;
 }

 VAR_5 = FUNC_10(VAR_2, VAR_3);
 if (VAR_5 < 0) {
  FUNC_7(&VAR_3->dev);
  return VAR_5;
 }






 if (VAR_2->use_count) {
  VAR_5 = FUNC_9(VAR_2->supply);
  if (VAR_5 < 0) {
   FUNC_2(VAR_2->supply);
   VAR_2->supply = ((void*)0);
   return VAR_5;
  }
 }

 return 0;
}
