
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct phy_provider {int dummy; } ;
struct lpc18xx_usb_otg_phy {int phy; int clk; int reg; } ;
struct TYPE_7__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 struct lpc18xx_usb_otg_phy* FUNC_5 (TYPE_2__*,int,int ) ;
 struct phy_provider* FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ,struct lpc18xx_usb_otg_phy*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct phy_provider *VAR_5;
 struct lpc18xx_usb_otg_phy *VAR_6;

 VAR_6 = FUNC_5(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->reg = FUNC_9(VAR_4->dev.of_node->parent);
 if (FUNC_0(VAR_6->reg)) {
  FUNC_3(&VAR_4->dev, "failed to get syscon\n");
  return FUNC_1(VAR_6->reg);
 }

 VAR_6->clk = FUNC_4(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_6->clk)) {
  FUNC_3(&VAR_4->dev, "failed to get clock\n");
  return FUNC_1(VAR_6->clk);
 }

 VAR_6->phy = FUNC_7(&VAR_4->dev, ((void*)0), &VAR_2);
 if (FUNC_0(VAR_6->phy)) {
  FUNC_3(&VAR_4->dev, "failed to create PHY\n");
  return FUNC_1(VAR_6->phy);
 }

 FUNC_8(VAR_6->phy, VAR_6);

 VAR_5 = FUNC_6(&VAR_4->dev,
           VAR_3);

 return FUNC_2(VAR_5);
}
