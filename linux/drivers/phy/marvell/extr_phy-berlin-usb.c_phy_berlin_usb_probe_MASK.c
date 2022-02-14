
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct phy_provider {int dummy; } ;
struct phy_berlin_usb_priv {int pll_divider; struct phy* rst_ctrl; struct phy* base; } ;
struct phy {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (int *,char*) ;
 struct phy* FUNC_4 (int *,struct resource*) ;
 struct phy_berlin_usb_priv* FUNC_5 (int *,int,int ) ;
 struct phy_provider* FUNC_6 (int *,int ) ;
 struct phy* FUNC_7 (int *,int *,int *) ;
 struct phy* FUNC_8 (int *,int *) ;
 struct of_device_id* FUNC_9 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct phy*,struct phy_berlin_usb_priv*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 const struct of_device_id *VAR_7 =
  FUNC_9(VAR_4, &VAR_6->dev);
 struct phy_berlin_usb_priv *VAR_8;
 struct resource *VAR_9;
 struct phy *VAR_10;
 struct phy_provider *VAR_11;

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_11(VAR_6, VAR_2, 0);
 VAR_8->base = FUNC_4(&VAR_6->dev, VAR_9);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->rst_ctrl = FUNC_8(&VAR_6->dev, ((void*)0));
 if (FUNC_0(VAR_8->rst_ctrl))
  return FUNC_1(VAR_8->rst_ctrl);

 VAR_8->pll_divider = *((u32 *)VAR_7->data);

 VAR_10 = FUNC_7(&VAR_6->dev, ((void*)0), &VAR_5);
 if (FUNC_0(VAR_10)) {
  FUNC_3(&VAR_6->dev, "failed to create PHY\n");
  return FUNC_1(VAR_10);
 }

 FUNC_10(VAR_10, VAR_8);

 VAR_11 =
  FUNC_6(&VAR_6->dev, VAR_3);
 return FUNC_2(VAR_11);
}
