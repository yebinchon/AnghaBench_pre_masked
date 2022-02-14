
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int of_node; } ;
struct tegra_xusb_pad {struct tegra_xusb_lane** lanes; struct tegra_xusb_lane* provider; TYPE_4__ dev; TYPE_3__* padctl; TYPE_2__* ops; TYPE_1__* soc; } ;
struct tegra_xusb_lane {int list; } ;
struct phy_ops {int dummy; } ;
struct phy {int dummy; } ;
struct device_node {int dummy; } ;
typedef int lane ;
struct TYPE_9__ {int lanes; } ;
struct TYPE_8__ {struct tegra_xusb_lane* (* probe ) (struct tegra_xusb_pad*,struct device_node*,unsigned int) ;} ;
struct TYPE_7__ {unsigned int num_lanes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tegra_xusb_lane*) ;
 int FUNC_1 (struct tegra_xusb_lane*) ;
 struct tegra_xusb_lane** FUNC_2 (TYPE_4__*,unsigned int,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (int ,char*) ;
 int FUNC_6 (struct device_node*) ;
 struct tegra_xusb_lane* FUNC_7 (TYPE_4__*,struct device_node*,int ) ;
 struct tegra_xusb_lane* FUNC_8 (TYPE_4__*,struct device_node*,struct phy_ops const*) ;
 int FUNC_9 (struct tegra_xusb_lane*) ;
 int FUNC_10 (struct tegra_xusb_lane*,struct tegra_xusb_lane*) ;
 struct tegra_xusb_lane* FUNC_11 (struct tegra_xusb_pad*,struct device_node*,unsigned int) ;
 int FUNC_12 (struct tegra_xusb_lane*) ;
 struct device_node* FUNC_13 (struct tegra_xusb_pad*,unsigned int) ;
 int VAR_3 ;

int FUNC_14(struct tegra_xusb_pad *VAR_4,
       const struct phy_ops *VAR_5)
{
 struct device_node *VAR_6;
 struct phy *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_5(VAR_4->dev.of_node, "lanes");
 if (!VAR_6)
  return -VAR_0;

 VAR_4->lanes = FUNC_2(&VAR_4->dev, VAR_4->soc->num_lanes, sizeof(VAR_7),
      VAR_2);
 if (!VAR_4->lanes) {
  FUNC_6(VAR_6);
  return -VAR_1;
 }

 for (VAR_8 = 0; VAR_8 < VAR_4->soc->num_lanes; VAR_8++) {
  struct device_node *VAR_10 = FUNC_13(VAR_4, VAR_8);
  struct tegra_xusb_lane *VAR_11;


  if (!VAR_10 || !FUNC_4(VAR_10)) {
   FUNC_6(VAR_10);
   continue;
  }

  VAR_4->lanes[VAR_8] = FUNC_8(&VAR_4->dev, VAR_10, VAR_5);
  if (FUNC_0(VAR_4->lanes[VAR_8])) {
   VAR_9 = FUNC_1(VAR_4->lanes[VAR_8]);
   FUNC_6(VAR_10);
   goto remove;
  }

  VAR_11 = VAR_4->ops->probe(VAR_4, VAR_10, VAR_8);
  if (FUNC_0(VAR_11)) {
   FUNC_9(VAR_4->lanes[VAR_8]);
   VAR_9 = FUNC_1(VAR_11);
   goto remove;
  }

  FUNC_3(&VAR_11->list, &VAR_4->padctl->lanes);
  FUNC_10(VAR_4->lanes[VAR_8], VAR_11);
 }

 VAR_4->provider = FUNC_7(&VAR_4->dev, VAR_6,
            VAR_3);
 if (FUNC_0(VAR_4->provider)) {
  VAR_9 = FUNC_1(VAR_4->provider);
  goto remove;
 }

 return 0;

remove:
 while (VAR_8--)
  FUNC_12(VAR_4->lanes[VAR_8]);

 FUNC_6(VAR_6);

 return VAR_9;
}
