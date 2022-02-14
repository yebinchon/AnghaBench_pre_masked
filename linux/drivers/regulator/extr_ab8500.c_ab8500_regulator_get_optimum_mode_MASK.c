
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct ab8500_regulator_info {int load_lp_uA; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct regulator_dev*) ;
 struct ab8500_regulator_info* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_3(
  struct regulator_dev *VAR_3, int VAR_4,
  int VAR_5, int VAR_6)
{
 unsigned int VAR_7;

 struct ab8500_regulator_info *VAR_8 = FUNC_2(VAR_3);

 if (VAR_8 == ((void*)0)) {
  FUNC_0(FUNC_1(VAR_3), "regulator info null pointer\n");
  return -VAR_0;
 }

 if (VAR_6 <= VAR_8->load_lp_uA)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;

 return VAR_7;
}
