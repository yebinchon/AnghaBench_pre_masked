
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct da9063_regulators {int n_regulators; struct da9063_regulator* regulator; } ;
struct da9063_regulator {int rdev; TYPE_2__* info; struct da9063* hw; } ;
struct da9063 {int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ reg; int lsb; } ;
struct TYPE_4__ {TYPE_1__ oc_event; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct da9063_regulators *VAR_6 = VAR_5;
 struct da9063 *VAR_7 = VAR_6->regulator[0].hw;
 struct da9063_regulator *VAR_8;
 int VAR_9, VAR_10 , VAR_11;

 VAR_11 = FUNC_1(VAR_7->regmap, VAR_0, &VAR_9);
 if (VAR_11 < 0)
  return VAR_2;

 for (VAR_10 = VAR_6->n_regulators - 1; VAR_10 >= 0; VAR_10--) {
  VAR_8 = &VAR_6->regulator[VAR_10];
  if (VAR_8->info->oc_event.reg != VAR_0)
   continue;

  if (FUNC_0(VAR_8->info->oc_event.lsb) & VAR_9) {
          FUNC_2(VAR_8->rdev);
   FUNC_3(VAR_8->rdev,
     VAR_3, ((void*)0));
          FUNC_4(VAR_8->rdev);
  }
 }

 return VAR_1;
}
