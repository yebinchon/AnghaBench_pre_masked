
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb_pad {int dev; struct tegra_xusb_pad_soc const* soc; int * ops; } ;
struct tegra_xusb_sata_pad {int rst; struct tegra_xusb_pad base; } ;
struct tegra_xusb_padctl {int dummy; } ;
struct tegra_xusb_pad_soc {int dummy; } ;
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
 int FUNC_7 (struct tegra_xusb_sata_pad*) ;
 struct tegra_xusb_sata_pad* FUNC_8 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct tegra_xusb_pad*,struct tegra_xusb_padctl*,struct device_node*) ;
 int FUNC_10 (struct tegra_xusb_pad*,int *) ;

__attribute__((used)) static struct tegra_xusb_pad *
FUNC_11(struct tegra_xusb_padctl *VAR_4,
   const struct tegra_xusb_pad_soc *VAR_5,
   struct device_node *VAR_6)
{
 struct tegra_xusb_sata_pad *VAR_7;
 struct tegra_xusb_pad *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = &VAR_7->base;
 VAR_8->ops = &VAR_2;
 VAR_8->soc = VAR_5;

 VAR_9 = FUNC_9(VAR_8, VAR_4, VAR_6);
 if (VAR_9 < 0) {
  FUNC_7(VAR_7);
  goto out;
 }

 VAR_7->rst = FUNC_6(&VAR_8->dev, "phy");
 if (FUNC_1(VAR_7->rst)) {
  VAR_9 = FUNC_2(VAR_7->rst);
  FUNC_3(&VAR_8->dev, "failed to get SATA pad reset: %d\n", VAR_9);
  goto unregister;
 }

 VAR_9 = FUNC_10(VAR_8, &VAR_3);
 if (VAR_9 < 0)
  goto unregister;

 FUNC_4(&VAR_8->dev, VAR_8);

 return VAR_8;

unregister:
 FUNC_5(&VAR_8->dev);
out:
 return FUNC_0(VAR_9);
}
