
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_rga {int aclk; int sclk; int dev; int hclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct rockchip_rga *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->sclk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "Cannot enable rga sclk: %d\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_1(VAR_0->aclk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "Cannot enable rga aclk: %d\n", VAR_1);
  goto err_disable_sclk;
 }

 VAR_1 = FUNC_1(VAR_0->hclk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "Cannot enable rga hclk: %d\n", VAR_1);
  goto err_disable_aclk;
 }

 return 0;

err_disable_sclk:
 FUNC_0(VAR_0->sclk);
err_disable_aclk:
 FUNC_0(VAR_0->aclk);

 return VAR_1;
}
