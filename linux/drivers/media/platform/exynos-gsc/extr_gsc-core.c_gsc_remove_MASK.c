
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int name; int dev; } ;
struct gsc_dev {int num_clocks; int * clock; int v4l2_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct gsc_dev*) ;
 struct gsc_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct gsc_dev *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_5(&VAR_0->dev);

 FUNC_2(VAR_1);
 FUNC_7(&VAR_1->v4l2_dev);

 FUNC_8(&VAR_0->dev);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_clocks; VAR_2++)
  FUNC_0(VAR_1->clock[VAR_2]);

 FUNC_6(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 FUNC_1(&VAR_0->dev, "%s driver unloaded\n", VAR_0->name);
 return 0;
}
