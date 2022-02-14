
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_driver {int dummy; } ;
struct TYPE_4__ {struct device_driver driver; } ;
struct TYPE_5__ {TYPE_1__ drvwrap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct device_driver*,int *,int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(void)
{
 struct device_driver *VAR_3 = &VAR_2.drvwrap.driver;
 int VAR_4;

 FUNC_0(VAR_0, "Enter\n");
 VAR_4 = FUNC_1(VAR_3, ((void*)0), ((void*)0),
         VAR_1);
 FUNC_2(&VAR_2);
}
