
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mtk_ecc {int clk; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct mtk_ecc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtk_ecc*) ;
 struct platform_device* FUNC_3 (struct device_node*) ;
 struct mtk_ecc* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct mtk_ecc *FUNC_6(struct device_node *VAR_1)
{
 struct platform_device *VAR_2;
 struct mtk_ecc *VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 VAR_3 = FUNC_4(VAR_2);
 if (!VAR_3) {
  FUNC_5(&VAR_2->dev);
  return FUNC_0(-VAR_0);
 }

 FUNC_1(VAR_3->clk);
 FUNC_2(VAR_3);

 return VAR_3;
}
