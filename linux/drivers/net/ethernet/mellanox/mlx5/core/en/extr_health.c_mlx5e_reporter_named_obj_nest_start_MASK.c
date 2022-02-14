
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_fmsg {int dummy; } ;


 int FUNC_0 (struct devlink_fmsg*) ;
 int FUNC_1 (struct devlink_fmsg*,char*) ;

int FUNC_2(struct devlink_fmsg *VAR_0, char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;

 return 0;
}
