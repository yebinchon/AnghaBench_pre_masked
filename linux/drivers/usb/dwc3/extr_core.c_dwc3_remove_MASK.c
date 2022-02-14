
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dwc3 {int dummy; } ;


 int FUNC_0 (struct dwc3*) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct dwc3*) ;
 int FUNC_4 (struct dwc3*) ;
 int FUNC_5 (struct dwc3*) ;
 struct dwc3* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_0)
{
 struct dwc3 *VAR_1 = FUNC_6(VAR_0);

 FUNC_9(&VAR_0->dev);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 FUNC_5(VAR_1);

 FUNC_10(&VAR_0->dev);
 FUNC_7(&VAR_0->dev);
 FUNC_8(&VAR_0->dev);

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);

 return 0;
}
