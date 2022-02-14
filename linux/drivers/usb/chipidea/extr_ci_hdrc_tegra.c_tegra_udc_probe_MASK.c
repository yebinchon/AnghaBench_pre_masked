
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_udc_soc_info {int flags; } ;
struct TYPE_2__ {char* name; int capoffset; int usb_phy; int flags; } ;
struct tegra_udc {int clk; int phy; int dev; TYPE_1__ data; } ;
struct platform_device {int dev; int num_resources; int resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,int *) ;
 struct tegra_udc* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,char*,int ) ;
 struct tegra_udc_soc_info* FUNC_9 (int *) ;
 int FUNC_10 (struct platform_device*,struct tegra_udc*) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 const struct tegra_udc_soc_info *VAR_5;
 struct tegra_udc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_7(&VAR_4->dev, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_5 = FUNC_9(&VAR_4->dev);
 if (!VAR_5) {
  FUNC_5(&VAR_4->dev, "failed to match OF data\n");
  return -VAR_1;
 }

 VAR_6->phy = FUNC_8(&VAR_4->dev, "nvidia,phy", 0);
 if (FUNC_0(VAR_6->phy)) {
  VAR_7 = FUNC_1(VAR_6->phy);
  FUNC_5(&VAR_4->dev, "failed to get PHY: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_6->clk = FUNC_6(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_6->clk)) {
  VAR_7 = FUNC_1(VAR_6->clk);
  FUNC_5(&VAR_4->dev, "failed to get clock: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_4(VAR_6->clk);
 if (VAR_7 < 0) {
  FUNC_5(&VAR_4->dev, "failed to enable clock: %d\n", VAR_7);
  return VAR_7;
 }






 FUNC_11(VAR_6->phy, 0);


 VAR_6->data.name = "tegra-udc";
 VAR_6->data.flags = VAR_5->flags;
 VAR_6->data.usb_phy = VAR_6->phy;
 VAR_6->data.capoffset = VAR_0;

 VAR_6->dev = FUNC_2(&VAR_4->dev, VAR_4->resource,
          VAR_4->num_resources, &VAR_6->data);
 if (FUNC_0(VAR_6->dev)) {
  VAR_7 = FUNC_1(VAR_6->dev);
  FUNC_5(&VAR_4->dev, "failed to add HDRC device: %d\n", VAR_7);
  goto fail_power_off;
 }

 FUNC_10(VAR_4, VAR_6);

 return 0;

fail_power_off:
 FUNC_11(VAR_6->phy, 1);
 FUNC_3(VAR_6->clk);
 return VAR_7;
}
