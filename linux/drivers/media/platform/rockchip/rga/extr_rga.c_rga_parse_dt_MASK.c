
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_rga {struct reset_control* hclk; int dev; struct reset_control* aclk; struct reset_control* sclk; } ;
struct reset_control {int dummy; } ;


 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ,char*) ;
 struct reset_control* FUNC_4 (int ,char*) ;
 int FUNC_5 (struct reset_control*) ;
 int FUNC_6 (struct reset_control*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct rockchip_rga *VAR_0)
{
 struct reset_control *VAR_1, *VAR_2, *VAR_3;

 VAR_1 = FUNC_4(VAR_0->dev, "core");
 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_0->dev, "failed to get core reset controller\n");
  return FUNC_1(VAR_1);
 }

 VAR_2 = FUNC_4(VAR_0->dev, "axi");
 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_0->dev, "failed to get axi reset controller\n");
  return FUNC_1(VAR_2);
 }

 VAR_3 = FUNC_4(VAR_0->dev, "ahb");
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_0->dev, "failed to get ahb reset controller\n");
  return FUNC_1(VAR_3);
 }

 FUNC_5(VAR_1);
 FUNC_7(1);
 FUNC_6(VAR_1);

 FUNC_5(VAR_2);
 FUNC_7(1);
 FUNC_6(VAR_2);

 FUNC_5(VAR_3);
 FUNC_7(1);
 FUNC_6(VAR_3);

 VAR_0->sclk = FUNC_3(VAR_0->dev, "sclk");
 if (FUNC_0(VAR_0->sclk)) {
  FUNC_2(VAR_0->dev, "failed to get sclk clock\n");
  return FUNC_1(VAR_0->sclk);
 }

 VAR_0->aclk = FUNC_3(VAR_0->dev, "aclk");
 if (FUNC_0(VAR_0->aclk)) {
  FUNC_2(VAR_0->dev, "failed to get aclk clock\n");
  return FUNC_1(VAR_0->aclk);
 }

 VAR_0->hclk = FUNC_3(VAR_0->dev, "hclk");
 if (FUNC_0(VAR_0->hclk)) {
  FUNC_2(VAR_0->dev, "failed to get hclk clock\n");
  return FUNC_1(VAR_0->hclk);
 }

 return 0;
}
