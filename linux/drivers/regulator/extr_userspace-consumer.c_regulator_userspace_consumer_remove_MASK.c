
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct userspace_consumer_data {int supplies; int num_supplies; scalar_t__ enabled; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct userspace_consumer_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct userspace_consumer_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_1->dev.kobj, &VAR_0);

 if (VAR_2->enabled)
  FUNC_1(VAR_2->num_supplies, VAR_2->supplies);

 return 0;
}
