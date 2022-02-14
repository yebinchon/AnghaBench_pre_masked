
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8925_regulator_info {int vol_reg; int i2c; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 struct max8925_regulator_info* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1)
{
 struct max8925_regulator_info *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->i2c, VAR_2->vol_reg, 1 << VAR_0, 0);
}
