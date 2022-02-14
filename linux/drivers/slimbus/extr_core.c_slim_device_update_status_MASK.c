
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slim_driver {int (* device_status ) (struct slim_device*,int) ;} ;
struct TYPE_2__ {int driver; } ;
struct slim_device {int status; TYPE_1__ dev; } ;
typedef enum slim_device_status { ____Placeholder_slim_device_status } slim_device_status ;


 int FUNC_0 (struct slim_device*,int) ;
 struct slim_driver* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct slim_device *VAR_0,
          enum slim_device_status VAR_1)
{
 struct slim_driver *VAR_2;

 if (VAR_0->status == VAR_1)
  return;

 VAR_0->status = VAR_1;
 if (!VAR_0->dev.driver)
  return;

 VAR_2 = FUNC_1(VAR_0->dev.driver);
 if (VAR_2->device_status)
  VAR_2->device_status(VAR_0, VAR_0->status);
}
