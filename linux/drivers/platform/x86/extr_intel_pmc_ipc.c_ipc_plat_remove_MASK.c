
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kobj; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int * dev; int telemetry_dev; int punit_dev; int tco_dev; int irq; } ;


 int FUNC_0 (TYPE_2__*,int ,TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 FUNC_2(&VAR_2->dev.kobj, &VAR_0);
 FUNC_0(&VAR_2->dev, VAR_1.irq, &VAR_1);
 FUNC_1(VAR_1.tco_dev);
 FUNC_1(VAR_1.punit_dev);
 FUNC_1(VAR_1.telemetry_dev);
 VAR_1.dev = ((void*)0);
 return 0;
}
