
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int video_dev; int v4l2_dev; int notifier; } ;
struct platform_device {int dev; } ;


 struct vpfe_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,struct vpfe_device*,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct vpfe_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_6(2, VAR_1, "vpfe_remove\n");

 FUNC_1(&VAR_0->dev);

 FUNC_3(&VAR_1->notifier);
 FUNC_2(&VAR_1->notifier);
 FUNC_4(&VAR_1->v4l2_dev);
 FUNC_5(&VAR_1->video_dev);

 return 0;
}
