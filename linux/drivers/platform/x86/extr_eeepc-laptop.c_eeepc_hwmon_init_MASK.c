
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeepc_laptop {TYPE_1__* platform_device; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (struct device*,char*,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct eeepc_laptop *VAR_1)
{
 struct device *VAR_2 = &VAR_1->platform_device->dev;
 struct device *VAR_3;

 VAR_3 = FUNC_2(VAR_2, "eeepc", ((void*)0),
             VAR_0);
 if (FUNC_0(VAR_3)) {
  FUNC_3("Could not register eeepc hwmon device\n");
  return FUNC_1(VAR_3);
 }
 return 0;
}
