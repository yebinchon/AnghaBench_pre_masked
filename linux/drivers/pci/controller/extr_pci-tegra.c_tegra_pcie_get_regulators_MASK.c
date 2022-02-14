
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tegra_pcie {int num_supplies; TYPE_1__* supplies; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_4__ {char* supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device*,TYPE_1__*) ;
 int FUNC_3 (struct device*,int,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 scalar_t__ FUNC_5 (struct device_node*,TYPE_1__*,int) ;
 int FUNC_6 (struct tegra_pcie*) ;

__attribute__((used)) static int FUNC_7(struct tegra_pcie *VAR_2, u32 VAR_3)
{
 struct device *VAR_4 = VAR_2->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 unsigned int VAR_6 = 0;

 if (FUNC_4(VAR_5, "nvidia,tegra186-pcie")) {
  VAR_2->num_supplies = 4;

  VAR_2->supplies = FUNC_1(VAR_2->dev, VAR_2->num_supplies,
           sizeof(*VAR_2->supplies),
           VAR_1);
  if (!VAR_2->supplies)
   return -VAR_0;

  VAR_2->supplies[VAR_6++].supply = "dvdd-pex";
  VAR_2->supplies[VAR_6++].supply = "hvdd-pex-pll";
  VAR_2->supplies[VAR_6++].supply = "hvdd-pex";
  VAR_2->supplies[VAR_6++].supply = "vddio-pexctl-aud";
 } else if (FUNC_4(VAR_5, "nvidia,tegra210-pcie")) {
  VAR_2->num_supplies = 6;

  VAR_2->supplies = FUNC_1(VAR_2->dev, VAR_2->num_supplies,
           sizeof(*VAR_2->supplies),
           VAR_1);
  if (!VAR_2->supplies)
   return -VAR_0;

  VAR_2->supplies[VAR_6++].supply = "avdd-pll-uerefe";
  VAR_2->supplies[VAR_6++].supply = "hvddio-pex";
  VAR_2->supplies[VAR_6++].supply = "dvddio-pex";
  VAR_2->supplies[VAR_6++].supply = "dvdd-pex-pll";
  VAR_2->supplies[VAR_6++].supply = "hvdd-pex-pll-e";
  VAR_2->supplies[VAR_6++].supply = "vddio-pex-ctl";
 } else if (FUNC_4(VAR_5, "nvidia,tegra124-pcie")) {
  VAR_2->num_supplies = 7;

  VAR_2->supplies = FUNC_1(VAR_4, VAR_2->num_supplies,
           sizeof(*VAR_2->supplies),
           VAR_1);
  if (!VAR_2->supplies)
   return -VAR_0;

  VAR_2->supplies[VAR_6++].supply = "avddio-pex";
  VAR_2->supplies[VAR_6++].supply = "dvddio-pex";
  VAR_2->supplies[VAR_6++].supply = "avdd-pex-pll";
  VAR_2->supplies[VAR_6++].supply = "hvdd-pex";
  VAR_2->supplies[VAR_6++].supply = "hvdd-pex-pll-e";
  VAR_2->supplies[VAR_6++].supply = "vddio-pex-ctl";
  VAR_2->supplies[VAR_6++].supply = "avdd-pll-erefe";
 } else if (FUNC_4(VAR_5, "nvidia,tegra30-pcie")) {
  bool VAR_7 = 0, VAR_8 = 0;


  if (VAR_3 & 0x0f)
   VAR_7 = 1;


  if (VAR_3 & 0x30)
   VAR_8 = 1;

  VAR_2->num_supplies = 4 + (VAR_7 ? 2 : 0) +
      (VAR_8 ? 2 : 0);

  VAR_2->supplies = FUNC_1(VAR_4, VAR_2->num_supplies,
           sizeof(*VAR_2->supplies),
           VAR_1);
  if (!VAR_2->supplies)
   return -VAR_0;

  VAR_2->supplies[VAR_6++].supply = "avdd-pex-pll";
  VAR_2->supplies[VAR_6++].supply = "hvdd-pex";
  VAR_2->supplies[VAR_6++].supply = "vddio-pex-ctl";
  VAR_2->supplies[VAR_6++].supply = "avdd-plle";

  if (VAR_7) {
   VAR_2->supplies[VAR_6++].supply = "avdd-pexa";
   VAR_2->supplies[VAR_6++].supply = "vdd-pexa";
  }

  if (VAR_8) {
   VAR_2->supplies[VAR_6++].supply = "avdd-pexb";
   VAR_2->supplies[VAR_6++].supply = "vdd-pexb";
  }
 } else if (FUNC_4(VAR_5, "nvidia,tegra20-pcie")) {
  VAR_2->num_supplies = 5;

  VAR_2->supplies = FUNC_1(VAR_4, VAR_2->num_supplies,
           sizeof(*VAR_2->supplies),
           VAR_1);
  if (!VAR_2->supplies)
   return -VAR_0;

  VAR_2->supplies[0].supply = "avdd-pex";
  VAR_2->supplies[1].supply = "vdd-pex";
  VAR_2->supplies[2].supply = "avdd-pex-pll";
  VAR_2->supplies[3].supply = "avdd-plle";
  VAR_2->supplies[4].supply = "vddio-pex-clk";
 }

 if (FUNC_5(VAR_4->of_node, VAR_2->supplies,
     VAR_2->num_supplies))
  return FUNC_3(VAR_4, VAR_2->num_supplies,
            VAR_2->supplies);






 FUNC_0(VAR_4, "using legacy DT binding for power supplies\n");

 FUNC_2(VAR_4, VAR_2->supplies);
 VAR_2->num_supplies = 0;

 return FUNC_6(VAR_2);
}
