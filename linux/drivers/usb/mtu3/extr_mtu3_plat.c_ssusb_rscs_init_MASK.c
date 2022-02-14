
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int vusb33; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ssusb_mtk*) ;
 int FUNC_4 (struct ssusb_mtk*) ;
 int FUNC_5 (struct ssusb_mtk*) ;
 int FUNC_6 (struct ssusb_mtk*) ;
 int FUNC_7 (struct ssusb_mtk*) ;

__attribute__((used)) static int FUNC_8(struct ssusb_mtk *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_2(VAR_0->vusb33);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "failed to enable vusb33\n");
  goto vusb33_err;
 }

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  goto clks_err;

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "failed to init phy\n");
  goto phy_init_err;
 }

 VAR_1 = FUNC_7(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "failed to power on phy\n");
  goto phy_err;
 }

 return 0;

phy_err:
 FUNC_5(VAR_0);
phy_init_err:
 FUNC_3(VAR_0);
clks_err:
 FUNC_1(VAR_0->vusb33);
vusb33_err:
 return VAR_1;
}
