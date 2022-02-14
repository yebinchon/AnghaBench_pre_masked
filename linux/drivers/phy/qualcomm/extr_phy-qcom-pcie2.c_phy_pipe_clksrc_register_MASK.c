
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qcom_phy {TYPE_1__* dev; } ;
struct device_node {int name; } ;
struct clk_init_data {int * ops; int name; } ;
struct TYPE_6__ {struct clk_init_data* init; } ;
struct clk_fixed_rate {int fixed_rate; TYPE_3__ hw; } ;
struct TYPE_5__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 struct clk_fixed_rate* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_4(struct qcom_phy *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev->of_node;
 struct clk_fixed_rate *VAR_5;
 struct clk_init_data VAR_6 = { };
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4, "clock-output-names", &VAR_6.name);
 if (VAR_7) {
  FUNC_0(VAR_3->dev, "%s: No clock-output-names\n", VAR_4->name);
  return VAR_7;
 }

 VAR_5 = FUNC_2(VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6.ops = &VAR_2;


 VAR_5->fixed_rate = 250000000;
 VAR_5->hw.init = &VAR_6;

 return FUNC_1(VAR_3->dev, &VAR_5->hw);
}
