
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_device {int dummy; } ;
struct soc_camera_async_client {struct platform_device* pdev; } ;
struct TYPE_2__ {int driver; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct platform_device*) ;
 struct soc_camera_device* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static struct soc_camera_device *FUNC_2(struct soc_camera_async_client *VAR_0)
{
 struct platform_device *VAR_1 = VAR_0->pdev;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0 || !VAR_1->dev.driver)
  return ((void*)0);

 return FUNC_1(VAR_1);
}
