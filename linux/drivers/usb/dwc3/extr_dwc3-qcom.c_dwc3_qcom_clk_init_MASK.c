
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_qcom {int num_clocks; struct clk** clks; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 struct clk** FUNC_5 (struct device*,int,int,int ) ;
 struct clk* FUNC_6 (struct device_node*,int) ;

__attribute__((used)) static int FUNC_7(struct dwc3_qcom *VAR_2, int VAR_3)
{
 struct device *VAR_4 = VAR_2->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 int VAR_6;

 if (!VAR_5 || !VAR_3)
  return 0;

 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->num_clocks = VAR_3;

 VAR_2->clks = FUNC_5(VAR_4, VAR_2->num_clocks,
      sizeof(struct clk *), VAR_1);
 if (!VAR_2->clks)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2->num_clocks; VAR_6++) {
  struct clk *VAR_7;
  int VAR_8;

  VAR_7 = FUNC_6(VAR_5, VAR_6);
  if (FUNC_0(VAR_7)) {
   while (--VAR_6 >= 0)
    FUNC_4(VAR_2->clks[VAR_6]);
   return FUNC_1(VAR_7);
  }

  VAR_8 = FUNC_3(VAR_7);
  if (VAR_8 < 0) {
   while (--VAR_6 >= 0) {
    FUNC_2(VAR_2->clks[VAR_6]);
    FUNC_4(VAR_2->clks[VAR_6]);
   }
   FUNC_4(VAR_7);

   return VAR_8;
  }

  VAR_2->clks[VAR_6] = VAR_7;
 }

 return 0;
}
