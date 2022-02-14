
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devt; } ;
struct event_device_data {TYPE_1__ dev; int cdev; } ;
struct acpi_device {struct event_device_data* driver_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (struct event_device_data*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_1)
{
 struct event_device_data *VAR_2 = VAR_1->driver_data;

 FUNC_1(&VAR_2->cdev, &VAR_2->dev);
 FUNC_3(&VAR_0, FUNC_0(VAR_2->dev.devt));
 FUNC_2(VAR_2);

 return 0;
}
