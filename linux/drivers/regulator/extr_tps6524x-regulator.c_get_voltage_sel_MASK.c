
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps6524x {int dummy; } ;
struct supply_info {int n_voltages; int voltage; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {int n_voltages; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct tps6524x* FUNC_1 (struct regulator_dev*) ;
 size_t FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct tps6524x*,int *) ;
 struct supply_info* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_2)
{
 const struct supply_info *VAR_3;
 struct tps6524x *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 VAR_3 = &VAR_1[FUNC_2(VAR_2)];

 if (VAR_2->desc->n_voltages == 1)
  return 0;

 VAR_5 = FUNC_3(VAR_4, &VAR_3->voltage);
 if (VAR_5 < 0)
  return VAR_5;
 if (FUNC_0(VAR_5 >= VAR_3->n_voltages))
  return -VAR_0;

 return VAR_5;
}
