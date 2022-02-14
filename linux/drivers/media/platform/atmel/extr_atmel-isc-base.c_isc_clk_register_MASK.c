
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct isc_device {TYPE_1__* dev; struct isc_clk* isc_clks; struct regmap* regmap; } ;
struct TYPE_5__ {struct clk_init_data* init; } ;
struct isc_clk {unsigned int id; int clk; TYPE_3__ hw; int lock; TYPE_1__* dev; struct regmap* regmap; } ;
struct device_node {char* name; } ;
struct clk_init_data {char const** parent_names; int num_parents; char const* name; int flags; int * ops; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int VAR_5 ;
 int FUNC_4 (struct device_node*,int ,int ) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*,char const**,int) ;
 int VAR_6 ;
 int FUNC_7 (struct device_node*,char*,char const**) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct isc_device *VAR_7, unsigned int VAR_8)
{
 struct regmap *VAR_9 = VAR_7->regmap;
 struct device_node *VAR_10 = VAR_7->dev->of_node;
 struct isc_clk *VAR_11;
 struct clk_init_data VAR_12;
 const char *VAR_13 = VAR_10->name;
 const char *VAR_14[3];
 int VAR_15;

 VAR_15 = FUNC_5(VAR_10);
 if (VAR_15 < 1 || VAR_15 > 3)
  return -VAR_2;

 if (VAR_15 > 2 && VAR_8 == VAR_3)
  VAR_15 = 2;

 FUNC_6(VAR_10, VAR_14, VAR_15);

 if (VAR_8 == VAR_4)
  FUNC_7(VAR_10, "clock-output-names", &VAR_13);
 else
  VAR_13 = "isc-ispck";

 VAR_12.parent_names = VAR_14;
 VAR_12.num_parents = VAR_15;
 VAR_12.name = VAR_13;
 VAR_12.ops = &VAR_5;
 VAR_12.flags = VAR_1 | VAR_0;

 VAR_11 = &VAR_7->isc_clks[VAR_8];
 VAR_11->hw.init = &VAR_12;
 VAR_11->regmap = VAR_9;
 VAR_11->id = VAR_8;
 VAR_11->dev = VAR_7->dev;
 FUNC_8(&VAR_11->lock);

 VAR_11->clk = FUNC_2(VAR_7->dev, &VAR_11->hw);
 if (FUNC_0(VAR_11->clk)) {
  FUNC_3(VAR_7->dev, "%s: clock register fail\n", VAR_13);
  return FUNC_1(VAR_11->clk);
 } else if (VAR_8 == VAR_4)
  FUNC_4(VAR_10, VAR_6, VAR_11->clk);

 return 0;
}
