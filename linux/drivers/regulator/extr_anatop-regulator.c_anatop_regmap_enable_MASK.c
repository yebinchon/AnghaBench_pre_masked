
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct anatop_regulator {int sel; scalar_t__ bypass; } ;


 int VAR_0 ;
 struct anatop_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1)
{
 struct anatop_regulator *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 VAR_3 = VAR_2->bypass ? VAR_0 : VAR_2->sel;
 return FUNC_1(VAR_1, VAR_3);
}
