
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct power_supply {TYPE_1__ dev; } ;
struct device {int kobj; } ;


 int FUNC_0 (int *,int *,char*) ;

int FUNC_1(struct power_supply *VAR_0, struct device *VAR_1)
{
 return FUNC_0(&VAR_0->dev.kobj, &VAR_1->kobj, "powers");
}
