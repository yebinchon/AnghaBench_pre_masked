
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_device {int video_dev; int v4l2_dev; struct vpfe_device* sd; int ccdc_irq0; } ;
struct TYPE_2__ {int driver; } ;
struct platform_device {TYPE_1__ dev; } ;


 struct vpfe_device* VAR_0 ;
 int FUNC_0 (int ,struct vpfe_device*) ;
 int FUNC_1 (struct vpfe_device*) ;
 struct vpfe_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct vpfe_device *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(VAR_1->dev.driver, "vpfe_remove\n");

 FUNC_0(VAR_2->ccdc_irq0, VAR_2);
 FUNC_1(VAR_2->sd);
 FUNC_3(&VAR_2->v4l2_dev);
 FUNC_5(&VAR_2->video_dev);
 FUNC_1(VAR_2);
 FUNC_1(VAR_0);
 return 0;
}
