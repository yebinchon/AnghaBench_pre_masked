
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_xusb_padctl_lane {int iddq; int offset; } ;
struct tegra_xusb_padctl {int dev; TYPE_1__* soc; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum tegra_xusb_padctl_param { ____Placeholder_tegra_xusb_padctl_param } tegra_xusb_padctl_param ;
struct TYPE_2__ {struct tegra_xusb_padctl_lane* lanes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct tegra_xusb_padctl*,int ) ;
 struct tegra_xusb_padctl* FUNC_5 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_2,
            unsigned int VAR_3,
            unsigned long *VAR_4)
{
 struct tegra_xusb_padctl *VAR_5 = FUNC_5(VAR_2);
 const struct tegra_xusb_padctl_lane *VAR_6;
 enum tegra_xusb_padctl_param VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_2(*VAR_4);
 VAR_6 = &VAR_5->soc->lanes[VAR_3];

 switch (VAR_7) {
 case 128:

  if (VAR_6->iddq == 0)
   return -VAR_0;

  VAR_8 = FUNC_4(VAR_5, VAR_6->offset);

  if (VAR_8 & FUNC_0(VAR_6->iddq))
   VAR_8 = 0;
  else
   VAR_8 = 1;

  *VAR_4 = FUNC_1(VAR_7, VAR_8);
  break;

 default:
  FUNC_3(VAR_5->dev, "invalid configuration parameter: %04x\n",
   VAR_7);
  return -VAR_1;
 }

 return 0;
}
