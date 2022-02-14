
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viafb_dev {TYPE_2__* pdev; } ;
struct via_camera {int ctrl_handler; int v4l2_dev; int vdev; } ;
struct TYPE_3__ {struct viafb_dev* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (int ,struct via_camera*) ;
 int FUNC_1 (struct via_camera*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct via_camera* VAR_0 ;
 int FUNC_4 (struct via_camera*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct via_camera *VAR_3 = VAR_0;
 struct viafb_dev *VAR_4 = VAR_2->dev.platform_data;

 FUNC_6(&VAR_3->vdev);
 FUNC_3(&VAR_3->v4l2_dev);



 FUNC_0(VAR_4->pdev->irq, VAR_3);
 FUNC_4(VAR_3);
 FUNC_2(&VAR_3->ctrl_handler);
 FUNC_1(VAR_3);
 VAR_0 = ((void*)0);
 return 0;
}
