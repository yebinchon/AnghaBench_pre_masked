
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct clk_init_data* init; } ;
struct inno_hdmi_phy {int phyclk; TYPE_2__ hw; TYPE_1__* plat_data; int refoclk; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct clk_init_data {char const** parent_names; int num_parents; char* name; int ops; scalar_t__ flags; } ;
struct TYPE_3__ {int clk_ops; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,TYPE_2__*) ;
 int FUNC_5 (struct device_node*,int ,int ) ;
 int VAR_0 ;
 int FUNC_6 (struct device_node*,char*,char**) ;

__attribute__((used)) static int FUNC_7(struct inno_hdmi_phy *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct device_node *VAR_3 = VAR_2->of_node;
 struct clk_init_data VAR_4;
 const char *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1->refoclk);

 VAR_4.parent_names = &VAR_5;
 VAR_4.num_parents = 1;
 VAR_4.flags = 0;
 VAR_4.name = "pin_hd20_pclk";
 VAR_4.ops = VAR_1->plat_data->clk_ops;


 FUNC_6(VAR_3, "clock-output-names", &VAR_4.name);

 VAR_1->hw.init = &VAR_4;

 VAR_1->phyclk = FUNC_4(VAR_2, &VAR_1->hw);
 if (FUNC_0(VAR_1->phyclk)) {
  VAR_6 = FUNC_1(VAR_1->phyclk);
  FUNC_3(VAR_2, "failed to register clock: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_3, VAR_0, VAR_1->phyclk);
 if (VAR_6) {
  FUNC_3(VAR_2, "failed to register clock provider: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
