
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g12a_mdio_mux {struct clk* pll; scalar_t__ regs; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct g12a_ephy_pll {TYPE_1__ hw; scalar_t__ base; } ;
struct device {int dummy; } ;
struct clk_mux {int shift; int mask; TYPE_1__ hw; scalar_t__ reg; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; scalar_t__ flags; int * ops; } ;
struct clk {int dummy; } ;
typedef int in_name ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct clk*) ;
 char* FUNC_2 (struct clk*) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (struct device*,char*,...) ;
 struct g12a_mdio_mux* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 struct clk* FUNC_7 (struct device*,char*) ;
 struct clk* FUNC_8 (struct device*,TYPE_1__*) ;
 void* FUNC_9 (struct device*,int,int ) ;
 int VAR_7 ;
 char* FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_8)
{
 struct g12a_mdio_mux *VAR_9 = FUNC_5(VAR_8);
 const char *VAR_10[VAR_5];
 struct clk_init_data VAR_11;
 struct g12a_ephy_pll *VAR_12;
 struct clk_mux *VAR_13;
 struct clk *VAR_14;
 char *VAR_15;
 int VAR_16;


 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  char VAR_17[8];

  FUNC_12(VAR_17, sizeof(VAR_17), "clkin%d", VAR_16);
  VAR_14 = FUNC_7(VAR_8, VAR_17);
  if (FUNC_0(VAR_14)) {
   if (FUNC_1(VAR_14) != -VAR_1)
    FUNC_4(VAR_8, "Missing clock %s\n", VAR_17);
   return FUNC_1(VAR_14);
  }

  VAR_10[VAR_16] = FUNC_2(VAR_14);
 }


 VAR_13 = FUNC_9(VAR_8, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_0;

 VAR_15 = FUNC_10(VAR_3, "%s#mux", FUNC_6(VAR_8));
 if (!VAR_15)
  return -VAR_0;

 VAR_11.name = VAR_15;
 VAR_11.ops = &VAR_6;
 VAR_11.flags = 0;
 VAR_11.parent_names = VAR_10;
 VAR_11.num_parents = VAR_5;

 VAR_13->reg = VAR_9->regs + VAR_2;
 VAR_13->shift = FUNC_3(VAR_4);
 VAR_13->mask = VAR_4 >> VAR_13->shift;
 VAR_13->hw.init = &VAR_11;

 VAR_14 = FUNC_8(VAR_8, &VAR_13->hw);
 FUNC_11(VAR_15);
 if (FUNC_0(VAR_14)) {
  FUNC_4(VAR_8, "failed to register input mux\n");
  return FUNC_1(VAR_14);
 }


 VAR_12 = FUNC_9(VAR_8, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_0;

 VAR_15 = FUNC_10(VAR_3, "%s#pll", FUNC_6(VAR_8));
 if (!VAR_15)
  return -VAR_0;

 VAR_11.name = VAR_15;
 VAR_11.ops = &VAR_7;
 VAR_11.flags = 0;
 VAR_10[0] = FUNC_2(VAR_14);
 VAR_11.parent_names = VAR_10;
 VAR_11.num_parents = 1;

 VAR_12->base = VAR_9->regs;
 VAR_12->hw.init = &VAR_11;

 VAR_14 = FUNC_8(VAR_8, &VAR_12->hw);
 FUNC_11(VAR_15);
 if (FUNC_0(VAR_14)) {
  FUNC_4(VAR_8, "failed to register input mux\n");
  return FUNC_1(VAR_14);
 }

 VAR_9->pll = VAR_14;

 return 0;
}
