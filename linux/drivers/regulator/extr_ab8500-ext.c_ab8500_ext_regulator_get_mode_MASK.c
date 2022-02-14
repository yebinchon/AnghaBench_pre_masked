
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct ab8500_ext_regulator_info {scalar_t__ update_val; scalar_t__ update_val_hp; scalar_t__ update_val_lp; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct regulator_dev*) ;
 struct ab8500_ext_regulator_info* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_3(struct regulator_dev *VAR_3)
{
 struct ab8500_ext_regulator_info *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 if (VAR_4 == ((void*)0)) {
  FUNC_0(FUNC_1(VAR_3), "regulator info null pointer\n");
  return -VAR_0;
 }

 if (VAR_4->update_val == VAR_4->update_val_hp)
  VAR_5 = VAR_2;
 else if (VAR_4->update_val == VAR_4->update_val_lp)
  VAR_5 = VAR_1;
 else
  VAR_5 = -VAR_0;

 return VAR_5;
}
