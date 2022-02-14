
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct clk_init_data* init; } ;
struct clk_init_data {char const** parent_names; unsigned int num_parents; char const* name; int flags; int * ops; } ;
struct serdes_am654_clk_mux {unsigned int reg; int clk_id; TYPE_1__ hw; struct regmap* regmap; struct clk_init_data clk_data; } ;
struct serdes_am654 {struct regmap** clks; struct device* dev; struct device_node* of_node; } ;
struct regmap {int dummy; } ;
struct device_node {int parent; } ;
struct device {int dummy; } ;
typedef struct regmap clk ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 unsigned int FUNC_2 (int const) ;
 int FUNC_3 (struct device*,char*) ;
 struct regmap* FUNC_4 (struct device*,TYPE_1__*) ;
 void* FUNC_5 (struct device*,int,int ) ;
 unsigned int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*,char const**,unsigned int) ;
 int * FUNC_8 (struct device_node*,int ,int *,int *) ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (struct device_node*,char*,int ) ;
 int VAR_5 ;
 struct regmap* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct serdes_am654 *VAR_6,
         const char *VAR_7, int VAR_8)
{
 struct device_node *VAR_9 = VAR_6->of_node;
 struct device *VAR_10 = VAR_6->dev;
 struct serdes_am654_clk_mux *VAR_11;
 struct device_node *VAR_12;
 const char **VAR_13;
 struct clk_init_data *VAR_14;
 unsigned int VAR_15;
 struct regmap *VAR_16;
 const __be32 *VAR_17;
 unsigned int VAR_18;
 struct clk *VAR_19;
 int VAR_20 = 0;

 VAR_11 = FUNC_5(VAR_10, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;

 VAR_14 = &VAR_11->clk_data;

 VAR_12 = FUNC_10(VAR_9, "ti,serdes-clk", 0);
 if (!VAR_12) {
  FUNC_3(VAR_10, "Fail to get serdes-clk node\n");
  VAR_20 = -VAR_2;
  goto out_put_node;
 }

 VAR_16 = FUNC_11(VAR_12->parent);
 if (FUNC_0(VAR_16)) {
  FUNC_3(VAR_10, "Fail to get Syscon regmap\n");
  VAR_20 = FUNC_1(VAR_16);
  goto out_put_node;
 }

 VAR_15 = FUNC_6(VAR_9);
 if (VAR_15 < 2) {
  FUNC_3(VAR_10, "SERDES clock must have parents\n");
  VAR_20 = -VAR_1;
  goto out_put_node;
 }

 VAR_13 = FUNC_5(VAR_10, (sizeof(char *) * VAR_15),
        VAR_4);
 if (!VAR_13) {
  VAR_20 = -VAR_3;
  goto out_put_node;
 }

 FUNC_7(VAR_9, VAR_13, VAR_15);

 VAR_17 = FUNC_8(VAR_12, 0, ((void*)0), ((void*)0));
 if (!VAR_17) {
  VAR_20 = -VAR_1;
  goto out_put_node;
 }

 VAR_18 = FUNC_2(*VAR_17);

 VAR_14->ops = &VAR_5;
 VAR_14->flags = VAR_0;
 VAR_14->parent_names = VAR_13;
 VAR_14->num_parents = VAR_15;
 VAR_14->name = VAR_7;

 VAR_11->regmap = VAR_16;
 VAR_11->reg = VAR_18;
 VAR_11->clk_id = VAR_8;
 VAR_11->hw.init = VAR_14;

 VAR_19 = FUNC_4(VAR_10, &VAR_11->hw);
 if (FUNC_0(VAR_19)) {
  VAR_20 = FUNC_1(VAR_19);
  goto out_put_node;
 }

 VAR_6->clks[VAR_8] = VAR_19;

out_put_node:
 FUNC_9(VAR_12);
 return VAR_20;
}
