
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb_padctl_soc {int dummy; } ;
struct tegra_xusb_padctl {struct tegra_xusb_padctl_soc const* soc; struct device* dev; } ;
struct tegra186_xusb_padctl {struct tegra_xusb_padctl base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct tegra_xusb_padctl* FUNC_0 (int) ;
 int VAR_1 ;
 struct tegra186_xusb_padctl* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct tegra186_xusb_padctl*) ;

__attribute__((used)) static struct tegra_xusb_padctl *
FUNC_3(struct device *VAR_2,
      const struct tegra_xusb_padctl_soc *VAR_3)
{
 struct tegra186_xusb_padctl *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->base.dev = VAR_2;
 VAR_4->base.soc = VAR_3;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return FUNC_0(VAR_5);

 return &VAR_4->base;
}
