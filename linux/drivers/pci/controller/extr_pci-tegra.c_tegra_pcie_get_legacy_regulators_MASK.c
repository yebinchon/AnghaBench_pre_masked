
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_pcie {int num_supplies; TYPE_1__* supplies; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_3__ {char* supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,struct device_node*) ;
 TYPE_1__* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device*,int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_4(struct tegra_pcie *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct device_node *VAR_5 = VAR_4->of_node;

 if (FUNC_3(VAR_5, "nvidia,tegra30-pcie"))
  VAR_3->num_supplies = 3;
 else if (FUNC_3(VAR_5, "nvidia,tegra20-pcie"))
  VAR_3->num_supplies = 2;

 if (VAR_3->num_supplies == 0) {
  FUNC_0(VAR_4, "device %pOF not supported in legacy mode\n", VAR_5);
  return -VAR_0;
 }

 VAR_3->supplies = FUNC_1(VAR_4, VAR_3->num_supplies,
          sizeof(*VAR_3->supplies),
          VAR_2);
 if (!VAR_3->supplies)
  return -VAR_1;

 VAR_3->supplies[0].supply = "pex-clk";
 VAR_3->supplies[1].supply = "vdd";

 if (VAR_3->num_supplies > 2)
  VAR_3->supplies[2].supply = "avdd";

 return FUNC_2(VAR_4, VAR_3->num_supplies, VAR_3->supplies);
}
