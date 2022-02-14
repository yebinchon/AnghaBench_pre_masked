
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_config {int of_node; int init_data; struct lp8755_chip* driver_data; TYPE_2__* dev; int regmap; } ;
struct lp8755_platform_data {int * buck_data; } ;
struct lp8755_chip {size_t mphase; TYPE_2__* dev; int ** rdev; int regmap; struct lp8755_platform_data* pdata; } ;
struct TYPE_5__ {int of_node; } ;
struct TYPE_4__ {int nreg; int* buck_num; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int * FUNC_3 (TYPE_2__*,int *,struct regulator_config*) ;
 int * VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct lp8755_chip *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct lp8755_platform_data *VAR_6 = VAR_2->pdata;
 struct regulator_config VAR_7 = { };

 VAR_7.regmap = VAR_2->regmap;
 VAR_7.dev = VAR_2->dev;
 VAR_7.driver_data = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_1[VAR_2->mphase].nreg; VAR_4++) {
  VAR_5 = VAR_1[VAR_2->mphase].buck_num[VAR_4];
  VAR_7.init_data = VAR_6->buck_data[VAR_5];
  VAR_7.of_node = VAR_2->dev->of_node;
  VAR_2->rdev[VAR_5] =
      FUNC_3(VAR_2->dev,
        &VAR_0[VAR_5], &VAR_7);
  if (FUNC_0(VAR_2->rdev[VAR_5])) {
   VAR_3 = FUNC_1(VAR_2->rdev[VAR_5]);
   VAR_2->rdev[VAR_5] = ((void*)0);
   FUNC_2(VAR_2->dev, "regulator init failed: buck %d\n",
    VAR_5);
   return VAR_3;
  }
 }

 return 0;
}
