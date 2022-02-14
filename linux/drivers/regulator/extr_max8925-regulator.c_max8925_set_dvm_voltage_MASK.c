
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8925_regulator_info {int enable_reg; int i2c; } ;


 unsigned char FUNC_0 (int,int ) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,unsigned char,unsigned char) ;
 struct max8925_regulator_info* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_5, int VAR_6)
{
 struct max8925_regulator_info *VAR_7 = FUNC_2(VAR_5);
 unsigned char VAR_8, VAR_9;

 if (VAR_6 < VAR_4 || VAR_6 > VAR_3)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6 - VAR_4, VAR_2);
 VAR_8 <<= VAR_1;
 VAR_9 = 3 << VAR_1;

 return FUNC_1(VAR_7->i2c, VAR_7->enable_reg, VAR_9, VAR_8);
}
