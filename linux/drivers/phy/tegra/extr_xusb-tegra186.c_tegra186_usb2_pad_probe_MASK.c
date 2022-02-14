
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb_pad {int dev; struct tegra_xusb_pad_soc const* soc; int * ops; } ;
struct tegra_xusb_usb2_pad {struct tegra_xusb_pad base; } ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_pad_soc {int dummy; } ;
struct tegra186_xusb_padctl {int usb2_trk_clk; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct tegra_xusb_pad* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,struct tegra_xusb_pad*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct tegra_xusb_usb2_pad*) ;
 struct tegra_xusb_usb2_pad* FUNC_8 (int,int ) ;
 int VAR_2 ;
 int FUNC_9 (struct tegra_xusb_pad*,struct tegra_xusb_padctl*,struct device_node*) ;
 int FUNC_10 (struct tegra_xusb_pad*,int *) ;
 struct tegra186_xusb_padctl* FUNC_11 (struct tegra_xusb_padctl*) ;
 int VAR_3 ;

__attribute__((used)) static struct tegra_xusb_pad *
FUNC_12(struct tegra_xusb_padctl *VAR_4,
   const struct tegra_xusb_pad_soc *VAR_5,
   struct device_node *VAR_6)
{
 struct tegra186_xusb_padctl *VAR_7 = FUNC_11(VAR_4);
 struct tegra_xusb_usb2_pad *VAR_8;
 struct tegra_xusb_pad *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_9 = &VAR_8->base;
 VAR_9->ops = &VAR_2;
 VAR_9->soc = VAR_5;

 VAR_10 = FUNC_9(VAR_9, VAR_4, VAR_6);
 if (VAR_10 < 0) {
  FUNC_7(VAR_8);
  goto out;
 }

 VAR_7->usb2_trk_clk = FUNC_6(&VAR_9->dev, "trk");
 if (FUNC_1(VAR_7->usb2_trk_clk)) {
  VAR_10 = FUNC_2(VAR_7->usb2_trk_clk);
  FUNC_3(&VAR_9->dev, "failed to get usb2 trk clock: %d\n", VAR_10);
  goto unregister;
 }

 VAR_10 = FUNC_10(VAR_9, &VAR_3);
 if (VAR_10 < 0)
  goto unregister;

 FUNC_4(&VAR_9->dev, VAR_9);

 return VAR_9;

unregister:
 FUNC_5(&VAR_9->dev);
out:
 return FUNC_0(VAR_10);
}
