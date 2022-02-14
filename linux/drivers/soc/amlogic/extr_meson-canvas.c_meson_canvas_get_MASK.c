
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct meson_canvas {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct meson_canvas* FUNC_0 (int ) ;
 struct meson_canvas* FUNC_1 (int *) ;
 struct platform_device* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,char*,int ) ;

struct meson_canvas *FUNC_5(struct device *VAR_3)
{
 struct device_node *VAR_4;
 struct platform_device *VAR_5;
 struct meson_canvas *VAR_6;

 VAR_4 = FUNC_4(VAR_3->of_node, "amlogic,canvas", 0);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5) {
  FUNC_3(VAR_4);
  return FUNC_0(-VAR_2);
 }

 FUNC_3(VAR_4);






 VAR_6 = FUNC_1(&VAR_5->dev);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 return VAR_6;
}
