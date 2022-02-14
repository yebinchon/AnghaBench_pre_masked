
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct max8952_data {TYPE_1__* pdata; } ;
struct TYPE_2__ {int* dvs_mode; } ;


 int VAR_0 ;
 struct max8952_data* FUNC_0 (struct regulator_dev*) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_1,
  unsigned int VAR_2)
{
 struct max8952_data *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1) != 0)
  return -VAR_0;

 return (VAR_3->pdata->dvs_mode[VAR_2] * 10 + 770) * 1000;
}
