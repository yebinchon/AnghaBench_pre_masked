
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct da9063_regulator {int suspend; } ;


 struct da9063_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0)
{
 struct da9063_regulator *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->suspend, 0);
}
