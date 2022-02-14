
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fimc_dev {int * clock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct fimc_dev*) ;
 int FUNC_3 (struct fimc_dev*) ;
 struct fimc_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct fimc_dev *VAR_3 = FUNC_4(VAR_2);

 FUNC_5(&VAR_2->dev);
 if (!FUNC_7(&VAR_2->dev))
  FUNC_0(VAR_3->clock[VAR_1]);
 FUNC_6(&VAR_2->dev);

 FUNC_3(VAR_3);
 FUNC_8(&VAR_2->dev);

 FUNC_0(VAR_3->clock[VAR_0]);
 FUNC_2(VAR_3);

 FUNC_1(&VAR_2->dev, "driver unloaded\n");
 return 0;
}
