
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void regulator_dev ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1, void *VAR_2)
{
 struct regulator_dev **VAR_3 = VAR_1;
 if (!VAR_3 || !*VAR_3) {
  FUNC_0(!VAR_3 || !*VAR_3);
  return 0;
 }
 return *VAR_3 == VAR_2;
}
