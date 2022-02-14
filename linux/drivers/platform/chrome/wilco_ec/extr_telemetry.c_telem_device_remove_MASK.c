
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int devt; } ;
struct telem_device_data {TYPE_1__ dev; int cdev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 struct telem_device_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct telem_device_data *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_2->cdev, &VAR_2->dev);
 FUNC_4(&VAR_2->dev);
 FUNC_2(&VAR_0, FUNC_0(VAR_2->dev.devt));

 return 0;
}
