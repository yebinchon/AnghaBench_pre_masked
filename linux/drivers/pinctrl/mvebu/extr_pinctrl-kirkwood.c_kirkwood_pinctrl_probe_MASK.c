
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 struct of_device_id* FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 const struct of_device_id *VAR_2 =
  FUNC_1(VAR_0, &VAR_1->dev);

 VAR_1->dev.platform_data = (void *)VAR_2->data;

 return FUNC_0(VAR_1);
}
