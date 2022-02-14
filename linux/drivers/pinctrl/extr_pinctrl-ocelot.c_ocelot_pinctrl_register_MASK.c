
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ocelot_pinctrl {int pctl; int desc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,struct ocelot_pinctrl*) ;
 int FUNC_4 (int *,struct ocelot_pinctrl*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0,
       struct ocelot_pinctrl *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(&VAR_0->dev, VAR_1);
 if (VAR_2) {
  FUNC_2(&VAR_0->dev, "Unable to create group func map.\n");
  return VAR_2;
 }

 VAR_1->pctl = FUNC_3(&VAR_0->dev, VAR_1->desc, VAR_1);
 if (FUNC_0(VAR_1->pctl)) {
  FUNC_2(&VAR_0->dev, "Failed to register pinctrl\n");
  return FUNC_1(VAR_1->pctl);
 }

 return 0;
}
