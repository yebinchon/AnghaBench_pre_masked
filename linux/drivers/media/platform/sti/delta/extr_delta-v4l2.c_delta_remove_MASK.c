
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct delta_dev {int v4l2_dev; int dev; int work_queue; } ;


 int FUNC_0 (struct delta_dev*) ;
 int FUNC_1 (struct delta_dev*) ;
 int FUNC_2 (int ) ;
 struct delta_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct delta_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1);

 FUNC_1(VAR_1);

 FUNC_2(VAR_1->work_queue);

 FUNC_5(VAR_1->dev);
 FUNC_4(VAR_1->dev);

 FUNC_6(&VAR_1->v4l2_dev);

 return 0;
}
