
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spmi_regulator {int logical_type; } ;
struct regulator_dev {int dummy; } ;
typedef enum spmi_regulator_logical_type { ____Placeholder_spmi_regulator_logical_type } spmi_regulator_logical_type ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 struct spmi_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct spmi_regulator*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_6, int VAR_7)
{
 struct spmi_regulator *VAR_8 = FUNC_0(VAR_6);
 enum spmi_regulator_logical_type VAR_9 = VAR_8->logical_type;
 unsigned int VAR_10;
 u8 VAR_11;
 u8 VAR_12 = VAR_3 |
    VAR_2;
 int VAR_13 = (VAR_3 + 1) * 500;

 if (VAR_9 == VAR_5)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_1;

 if (VAR_7 > VAR_13 || VAR_7 <= 0)
  return -VAR_0;

 VAR_11 = (VAR_7 - 1) / 500;
 VAR_11 |= VAR_2;

 return FUNC_1(VAR_8, VAR_10, VAR_11, VAR_12);
}
