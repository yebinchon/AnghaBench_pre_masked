
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct clk_init_data* init; } ;
struct sdhci_arasan_data {int sdcardclk; TYPE_1__ sdcardclk_hw; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct clk_init_data {char const** parent_names; int num_parents; int * ops; int flags; int name; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,TYPE_1__*) ;
 int FUNC_3 (struct device_node*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct device_node*,char*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct sdhci_arasan_data *VAR_3,
           struct clk *VAR_4,
           struct device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->of_node;
 struct clk_init_data VAR_7;
 const char *VAR_8;
 int VAR_9;


 if (!FUNC_4(VAR_6, "#clock-cells", ((void*)0)))
  return 0;

 VAR_9 = FUNC_5(VAR_6, "clock-output-names", 0,
         &VAR_7.name);
 if (VAR_9) {
  FUNC_1(VAR_5, "DT has #clock-cells but no clock-output-names\n");
  return VAR_9;
 }

 VAR_8 = FUNC_0(VAR_4);
 VAR_7.parent_names = &VAR_8;
 VAR_7.num_parents = 1;
 VAR_7.flags = VAR_0;
 VAR_7.ops = &VAR_1;

 VAR_3->sdcardclk_hw.init = &VAR_7;
 VAR_3->sdcardclk =
  FUNC_2(VAR_5, &VAR_3->sdcardclk_hw);
 VAR_3->sdcardclk_hw.init = ((void*)0);

 VAR_9 = FUNC_3(VAR_6, VAR_2,
      VAR_3->sdcardclk);
 if (VAR_9)
  FUNC_1(VAR_5, "Failed to add clock provider\n");

 return VAR_9;
}
