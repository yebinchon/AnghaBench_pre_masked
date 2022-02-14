
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fimc_md {int media_dev; int v4l2_dev; int subdev_notifier; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct fimc_md*) ;
 int FUNC_2 (struct fimc_md*) ;
 int FUNC_3 (struct fimc_md*) ;
 int FUNC_4 (struct fimc_md*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct fimc_md* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct fimc_md *VAR_2 = FUNC_7(VAR_1);

 if (!VAR_2)
  return 0;

 FUNC_3(VAR_2);
 FUNC_9(&VAR_2->subdev_notifier);
 FUNC_8(&VAR_2->subdev_notifier);

 FUNC_10(&VAR_2->v4l2_dev);
 FUNC_0(&VAR_1->dev, &VAR_0);
 FUNC_4(VAR_2);
 FUNC_1(VAR_2);
 FUNC_6(&VAR_2->media_dev);
 FUNC_5(&VAR_2->media_dev);
 FUNC_2(VAR_2);

 return 0;
}
