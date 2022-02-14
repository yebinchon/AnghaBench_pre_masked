
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct clk_init_data* init; } ;
struct meson_ao_cec_g12a_dualdiv_clk {TYPE_2__ hw; int regmap; } ;
struct meson_ao_cec_g12a_device {struct clk* core; int regmap; int oscin; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; scalar_t__ flags; int * ops; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 struct clk* FUNC_5 (struct device*,TYPE_2__*) ;
 struct meson_ao_cec_g12a_dualdiv_clk* FUNC_6 (struct device*,int,int ) ;
 char* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct meson_ao_cec_g12a_device *VAR_3)
{
 struct meson_ao_cec_g12a_dualdiv_clk *VAR_4;
 struct device *VAR_5 = &VAR_3->pdev->dev;
 struct clk_init_data VAR_6;
 const char *VAR_7;
 struct clk *VAR_8;
 char *VAR_9;

 VAR_4 = FUNC_6(VAR_5, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_9 = FUNC_7(VAR_1, "%s#dualdiv_clk", FUNC_4(VAR_5));
 if (!VAR_9)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3->oscin);

 VAR_6.name = VAR_9;
 VAR_6.ops = &VAR_2;
 VAR_6.flags = 0;
 VAR_6.parent_names = &VAR_7;
 VAR_6.num_parents = 1;
 VAR_4->regmap = VAR_3->regmap;
 VAR_4->hw.init = &VAR_6;

 VAR_8 = FUNC_5(VAR_5, &VAR_4->hw);
 FUNC_8(VAR_9);
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_5, "failed to register clock\n");
  return FUNC_1(VAR_8);
 }

 VAR_3->core = VAR_8;

 return 0;
}
