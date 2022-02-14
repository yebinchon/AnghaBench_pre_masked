
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_coupled; struct regulator_dev** coupled_rdevs; } ;
struct regulator_dev {TYPE_2__* supply; TYPE_1__ coupling_desc; } ;
struct TYPE_4__ {struct regulator_dev* rdev; } ;



__attribute__((used)) static bool FUNC_0(struct regulator_dev *VAR_0)
{
 struct regulator_dev *VAR_1;
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_0->coupling_desc.n_coupled; VAR_2++) {
  VAR_1 = VAR_0->coupling_desc.coupled_rdevs[VAR_2];

  if (VAR_0->supply->rdev == VAR_1)
   return 1;
 }

 return 0;
}
