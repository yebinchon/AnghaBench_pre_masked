
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8925_regulator_info {int enable_reg; int i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct max8925_regulator_info* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_6)
{
 struct max8925_regulator_info *VAR_7 = FUNC_1(VAR_6);

 return FUNC_0(VAR_7->i2c, VAR_7->enable_reg,
    VAR_4 << VAR_5 |
    VAR_1 << VAR_2,
    VAR_3 << VAR_5 |
    VAR_0 << VAR_2);
}
