
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct net_device {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct net_device*,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_1->dev, "register failed\n");
  return VAR_2;
 }
 if (FUNC_3(&VAR_1->dev.kobj, &VAR_0) < 0)
  FUNC_1(VAR_1, "sysfs group failed\n");

 return 0;
}
