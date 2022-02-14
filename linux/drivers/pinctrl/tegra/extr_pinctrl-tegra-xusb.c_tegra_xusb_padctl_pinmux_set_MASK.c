
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct tegra_xusb_padctl_lane {unsigned int num_funcs; unsigned int* funcs; unsigned int mask; unsigned int shift; int offset; } ;
struct tegra_xusb_padctl {TYPE_1__* soc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {struct tegra_xusb_padctl_lane* lanes; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct tegra_xusb_padctl*,int ) ;
 int FUNC_1 (struct tegra_xusb_padctl*,unsigned int,int ) ;
 struct tegra_xusb_padctl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3)
{
 struct tegra_xusb_padctl *VAR_4 = FUNC_2(VAR_1);
 const struct tegra_xusb_padctl_lane *VAR_5;
 unsigned int VAR_6;
 u32 VAR_7;

 VAR_5 = &VAR_4->soc->lanes[VAR_3];

 for (VAR_6 = 0; VAR_6 < VAR_5->num_funcs; VAR_6++)
  if (VAR_5->funcs[VAR_6] == VAR_2)
   break;

 if (VAR_6 >= VAR_5->num_funcs)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4, VAR_5->offset);
 VAR_7 &= ~(VAR_5->mask << VAR_5->shift);
 VAR_7 |= VAR_6 << VAR_5->shift;
 FUNC_1(VAR_4, VAR_7, VAR_5->offset);

 return 0;
}
