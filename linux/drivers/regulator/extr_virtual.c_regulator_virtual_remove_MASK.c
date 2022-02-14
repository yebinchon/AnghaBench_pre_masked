
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtual_consumer_data {int regulator; scalar_t__ enabled; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 struct virtual_consumer_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct virtual_consumer_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_1->dev.kobj, &VAR_0);

 if (VAR_2->enabled)
  FUNC_1(VAR_2->regulator);

 return 0;
}
