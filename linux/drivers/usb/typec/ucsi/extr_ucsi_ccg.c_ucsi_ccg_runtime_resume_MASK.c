
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ccg {scalar_t__ fw_build; scalar_t__ fw_version; int pm_work; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ucsi_ccg* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_2);
 struct ucsi_ccg *VAR_4 = FUNC_0(VAR_3);






 if (VAR_4->fw_build == VAR_0 &&
     VAR_4->fw_version <= VAR_1)
  FUNC_1(&VAR_4->pm_work);

 return 0;
}
