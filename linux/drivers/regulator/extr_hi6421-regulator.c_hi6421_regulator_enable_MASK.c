
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct regulator_dev {TYPE_1__ dev; } ;
struct hi6421_regulator_pdata {int lock; } ;


 struct hi6421_regulator_pdata* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0)
{
 struct hi6421_regulator_pdata *VAR_1;

 VAR_1 = FUNC_0(VAR_0->dev.parent);





 FUNC_1(&VAR_1->lock);


 FUNC_3(VAR_0);

 FUNC_2(&VAR_1->lock);
 return 0;
}
