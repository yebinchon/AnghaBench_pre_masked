
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xsphy_instance {int type; int efuse_rx_imp; int efuse_tx_imp; int efuse_intr; int eye_term; int eye_vrt; int eye_src; TYPE_1__* phy; } ;
struct mtk_xsphy {int dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;




 int FUNC_0 (struct device*,char*,int ,int ,int ,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct device*,char*,int *) ;

__attribute__((used)) static void FUNC_3(struct mtk_xsphy *VAR_0,
    struct xsphy_instance *VAR_1)
{
 struct device *VAR_2 = &VAR_1->phy->dev;

 switch (VAR_1->type) {
 case 129:
  FUNC_2(VAR_2, "mediatek,efuse-intr",
      &VAR_1->efuse_intr);
  FUNC_2(VAR_2, "mediatek,eye-src",
      &VAR_1->eye_src);
  FUNC_2(VAR_2, "mediatek,eye-vrt",
      &VAR_1->eye_vrt);
  FUNC_2(VAR_2, "mediatek,eye-term",
      &VAR_1->eye_term);
  FUNC_0(VAR_2, "intr:%d, src:%d, vrt:%d, term:%d\n",
   VAR_1->efuse_intr, VAR_1->eye_src,
   VAR_1->eye_vrt, VAR_1->eye_term);
  break;
 case 128:
  FUNC_2(VAR_2, "mediatek,efuse-intr",
      &VAR_1->efuse_intr);
  FUNC_2(VAR_2, "mediatek,efuse-tx-imp",
      &VAR_1->efuse_tx_imp);
  FUNC_2(VAR_2, "mediatek,efuse-rx-imp",
      &VAR_1->efuse_rx_imp);
  FUNC_0(VAR_2, "intr:%d, tx-imp:%d, rx-imp:%d\n",
   VAR_1->efuse_intr, VAR_1->efuse_tx_imp,
   VAR_1->efuse_rx_imp);
  break;
 default:
  FUNC_1(VAR_0->dev, "incompatible phy type\n");
  return;
 }
}
