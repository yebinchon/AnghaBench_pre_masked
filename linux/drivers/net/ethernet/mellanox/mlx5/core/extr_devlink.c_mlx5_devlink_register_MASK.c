
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct devlink*) ;
 int FUNC_2 (struct devlink*,int ,int ) ;
 int FUNC_3 (struct devlink*,struct device*) ;
 int FUNC_4 (struct devlink*) ;
 int VAR_0 ;
 int FUNC_5 (struct devlink*) ;

int FUNC_6(struct devlink *VAR_1, struct device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_0,
          FUNC_0(VAR_0));
 if (VAR_3)
  goto params_reg_err;
 FUNC_5(VAR_1);
 FUNC_1(VAR_1);
 return 0;

params_reg_err:
 FUNC_4(VAR_1);
 return VAR_3;
}
