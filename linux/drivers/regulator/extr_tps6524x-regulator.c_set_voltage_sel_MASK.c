
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps6524x {int dummy; } ;
struct supply_info {int voltage; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {int n_voltages; } ;


 int VAR_0 ;
 struct tps6524x* FUNC_0 (struct regulator_dev*) ;
 size_t FUNC_1 (struct regulator_dev*) ;
 struct supply_info* VAR_1 ;
 int FUNC_2 (struct tps6524x*,int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2, unsigned VAR_3)
{
 const struct supply_info *VAR_4;
 struct tps6524x *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 VAR_4 = &VAR_1[FUNC_1(VAR_2)];

 if (VAR_2->desc->n_voltages == 1)
  return -VAR_0;

 return FUNC_2(VAR_5, &VAR_4->voltage, VAR_3);
}
