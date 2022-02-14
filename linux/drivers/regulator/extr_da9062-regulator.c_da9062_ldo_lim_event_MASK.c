
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct da9062_regulators {int n_regulators; struct da9062_regulator* regulator; } ;
struct da9062_regulator {int rdev; TYPE_2__* info; struct da9062* hw; } ;
struct da9062 {int dev; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ reg; int lsb; } ;
struct TYPE_4__ {TYPE_1__ oc_event; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,scalar_t__,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct da9062_regulators *VAR_6 = VAR_5;
 struct da9062 *VAR_7 = VAR_6->regulator[0].hw;
 struct da9062_regulator *VAR_8;
 int VAR_9 = VAR_2;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = FUNC_2(VAR_7->regmap, VAR_0, &VAR_10);
 if (VAR_12 < 0) {
  FUNC_1(VAR_7->dev,
   "Failed to read LDO overcurrent indicator\n");
  goto ldo_lim_error;
 }

 for (VAR_11 = VAR_6->n_regulators - 1; VAR_11 >= 0; VAR_11--) {
  VAR_8 = &VAR_6->regulator[VAR_11];
  if (VAR_8->info->oc_event.reg != VAR_0)
   continue;

  if (FUNC_0(VAR_8->info->oc_event.lsb) & VAR_10) {
   FUNC_3(VAR_8->rdev);
   FUNC_4(VAR_8->rdev,
     VAR_3, ((void*)0));
   FUNC_5(VAR_8->rdev);
   VAR_9 = VAR_1;
  }
 }

ldo_lim_error:
 return VAR_9;
}
