
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct watchdog_device {TYPE_2__* wd_data; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ cdev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct watchdog_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct watchdog_device*) ;

void FUNC_3(struct watchdog_device *VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_0(&VAR_0, VAR_1->wd_data->cdev.dev);
 FUNC_1(VAR_1);
}
