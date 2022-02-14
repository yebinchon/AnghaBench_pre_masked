
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int n_coupled; struct regulator_dev** coupled_rdevs; } ;
struct regulator_dev {TYPE_2__ coupling_desc; TYPE_1__* supply; } ;
struct TYPE_3__ {struct regulator_dev* rdev; } ;


 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static void FUNC_2(struct regulator_dev *VAR_0,
           unsigned int VAR_1)
{
 struct regulator_dev *VAR_2;
 int VAR_3;

 for (VAR_3 = VAR_1; VAR_3 > 0; VAR_3--) {
  VAR_2 = VAR_0->coupling_desc.coupled_rdevs[VAR_3 - 1];

  if (!VAR_2)
   continue;

  if (VAR_2->supply && !FUNC_0(VAR_2))
   FUNC_2(
     VAR_2->supply->rdev,
     VAR_2->coupling_desc.n_coupled);

  FUNC_1(VAR_2);
 }
}
