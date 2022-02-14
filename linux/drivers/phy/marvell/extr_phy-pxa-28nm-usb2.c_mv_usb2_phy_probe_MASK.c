
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct phy_provider {int dummy; } ;
struct mv_usb2_phy {int phy; int base; int clk; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,struct resource*) ;
 struct mv_usb2_phy* FUNC_6 (TYPE_1__*,int,int ) ;
 struct phy_provider* FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int *) ;
 int VAR_3 ;
 int FUNC_9 (int ,struct mv_usb2_phy*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct phy_provider *VAR_6;
 struct mv_usb2_phy *VAR_7;
 struct resource *VAR_8;

 VAR_7 = FUNC_6(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->pdev = VAR_5;

 VAR_7->clk = FUNC_4(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  FUNC_3(&VAR_5->dev, "failed to get clock.\n");
  return FUNC_1(VAR_7->clk);
 }

 VAR_8 = FUNC_10(VAR_5, VAR_2, 0);
 VAR_7->base = FUNC_5(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->phy = FUNC_8(&VAR_5->dev, VAR_5->dev.of_node, &VAR_4);
 if (FUNC_0(VAR_7->phy))
  return FUNC_1(VAR_7->phy);

 FUNC_9(VAR_7->phy, VAR_7);

 VAR_6 = FUNC_7(&VAR_5->dev, VAR_3);
 return FUNC_2(VAR_6);
}
