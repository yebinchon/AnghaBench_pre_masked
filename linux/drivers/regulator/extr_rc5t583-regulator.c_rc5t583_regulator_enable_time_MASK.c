
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct rc5t583_regulator_info {int enable_uv_per_us; } ;


 int FUNC_0 (int,int ) ;
 struct rc5t583_regulator_info* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0)
{
 struct rc5t583_regulator_info *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = FUNC_3(VAR_0, VAR_2);

 return FUNC_0(VAR_3, VAR_1->enable_uv_per_us);
}
