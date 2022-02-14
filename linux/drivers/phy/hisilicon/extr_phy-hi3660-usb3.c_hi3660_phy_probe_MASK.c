
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; TYPE_1__* parent; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy {int dummy; } ;
struct hi3660_priv {int eye_diagram_param; struct phy* otg_bc; struct phy* pctrl; struct phy* peri_crg; struct device* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*) ;
 struct hi3660_priv* FUNC_4 (struct device*,int,int ) ;
 struct phy_provider* FUNC_5 (struct device*,int ) ;
 struct phy* FUNC_6 (struct device*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (struct phy*,struct hi3660_priv*) ;
 struct phy* FUNC_9 (int ) ;
 void* FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct phy_provider *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 struct phy *VAR_8;
 struct hi3660_priv *VAR_9;

 VAR_9 = FUNC_4(VAR_7, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->dev = VAR_7;
 VAR_9->peri_crg = FUNC_10(VAR_7->of_node,
     "hisilicon,pericrg-syscon");
 if (FUNC_0(VAR_9->peri_crg)) {
  FUNC_3(VAR_7, "no hisilicon,pericrg-syscon\n");
  return FUNC_1(VAR_9->peri_crg);
 }

 VAR_9->pctrl = FUNC_10(VAR_7->of_node,
     "hisilicon,pctrl-syscon");
 if (FUNC_0(VAR_9->pctrl)) {
  FUNC_3(VAR_7, "no hisilicon,pctrl-syscon\n");
  return FUNC_1(VAR_9->pctrl);
 }


 VAR_9->otg_bc = FUNC_9(VAR_7->parent->of_node);
 if (FUNC_0(VAR_9->otg_bc)) {
  FUNC_3(VAR_7, "no hisilicon,usb3-otg-bc-syscon\n");
  return FUNC_1(VAR_9->otg_bc);
 }

 if (FUNC_7(VAR_7->of_node, "hisilicon,eye-diagram-param",
  &(VAR_9->eye_diagram_param)))
  VAR_9->eye_diagram_param = VAR_2;

 VAR_8 = FUNC_6(VAR_7, ((void*)0), &VAR_3);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 FUNC_8(VAR_8, VAR_9);
 VAR_6 = FUNC_5(VAR_7, VAR_4);
 return FUNC_2(VAR_6);
}
