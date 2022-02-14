
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc_thermal_device {TYPE_2__* dev; int int340x_zone; TYPE_1__* adev; } ;
struct TYPE_6__ {int attr; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct proc_thermal_device *VAR_4)
{
 FUNC_0(VAR_4->adev->handle,
       VAR_0, VAR_3);
 FUNC_1(VAR_4->int340x_zone);
 FUNC_2(&VAR_4->dev->kobj, &VAR_1.attr);
 FUNC_3(&VAR_4->dev->kobj,
      &VAR_2);
}
