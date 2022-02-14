
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_pgc_domain {int num_clks; struct clk** clk; TYPE_1__* dev; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 struct clk* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct imx_pgc_domain *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; ; VAR_3++) {
  struct clk *VAR_5 = FUNC_3(VAR_2->dev->of_node, VAR_3);
  if (FUNC_0(VAR_5))
   break;
  if (VAR_3 >= VAR_1) {
   FUNC_2(VAR_2->dev, "more than %d clocks\n",
    VAR_1);
   VAR_4 = -VAR_0;
   goto clk_err;
  }
  VAR_2->clk[VAR_3] = VAR_5;
 }
 VAR_2->num_clks = VAR_3;

 return 0;

clk_err:
 while (VAR_3--)
  FUNC_1(VAR_2->clk[VAR_3]);

 return VAR_4;
}
