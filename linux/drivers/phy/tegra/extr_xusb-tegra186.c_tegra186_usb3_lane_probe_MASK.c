
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb_lane {unsigned int index; struct device_node* np; struct tegra_xusb_pad* pad; int * soc; int list; } ;
struct tegra_xusb_usb3_lane {struct tegra_xusb_lane base; } ;
struct tegra_xusb_pad {TYPE_1__* soc; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int * lanes; } ;


 int VAR_0 ;
 struct tegra_xusb_lane* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tegra_xusb_usb3_lane*) ;
 struct tegra_xusb_usb3_lane* FUNC_3 (int,int ) ;
 int FUNC_4 (struct tegra_xusb_lane*,struct device_node*) ;

__attribute__((used)) static struct tegra_xusb_lane *
FUNC_5(struct tegra_xusb_pad *VAR_2, struct device_node *VAR_3,
    unsigned int VAR_4)
{
 struct tegra_xusb_usb3_lane *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_5->base.list);
 VAR_5->base.soc = &VAR_2->soc->lanes[VAR_4];
 VAR_5->base.index = VAR_4;
 VAR_5->base.pad = VAR_2;
 VAR_5->base.np = VAR_3;

 VAR_6 = FUNC_4(&VAR_5->base, VAR_3);
 if (VAR_6 < 0) {
  FUNC_2(VAR_5);
  return FUNC_0(VAR_6);
 }

 return &VAR_5->base;
}
