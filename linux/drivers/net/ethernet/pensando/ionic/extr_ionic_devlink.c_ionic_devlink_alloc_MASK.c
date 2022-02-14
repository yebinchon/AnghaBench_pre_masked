
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic {int dummy; } ;
struct devlink {int dummy; } ;
struct device {int dummy; } ;


 struct devlink* FUNC_0 (int *,int) ;
 struct ionic* FUNC_1 (struct devlink*) ;
 int VAR_0 ;

struct ionic *FUNC_2(struct device *VAR_1)
{
 struct devlink *VAR_2;

 VAR_2 = FUNC_0(&VAR_0, sizeof(struct ionic));

 return FUNC_1(VAR_2);
}
