
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6524x {int dummy; } ;
struct supply_info {int enable; } ;
struct regulator_dev {int dummy; } ;


 struct tps6524x* FUNC_0 (struct regulator_dev*) ;
 size_t FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct tps6524x*,int *) ;
 struct supply_info* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1)
{
 const struct supply_info *VAR_2;
 struct tps6524x *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 VAR_2 = &VAR_0[FUNC_1(VAR_1)];

 return FUNC_2(VAR_3, &VAR_2->enable);
}
