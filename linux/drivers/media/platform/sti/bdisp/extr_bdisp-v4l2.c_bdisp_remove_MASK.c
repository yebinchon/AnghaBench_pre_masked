
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int name; int dev; } ;
struct bdisp_dev {int clock; int v4l2_dev; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bdisp_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bdisp_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int ) ;
 struct bdisp_dev* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct bdisp_dev *VAR_1 = FUNC_6(VAR_0);

 FUNC_3(VAR_1);

 FUNC_2(VAR_1->dev);

 FUNC_7(&VAR_0->dev);

 FUNC_1(VAR_1);

 FUNC_8(&VAR_1->v4l2_dev);

 if (!FUNC_0(VAR_1->clock))
  FUNC_4(VAR_1->clock);

 FUNC_5(&VAR_0->dev, "%s driver unloaded\n", VAR_0->name);

 return 0;
}
