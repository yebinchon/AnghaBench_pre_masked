
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct clk** clock; } ;
struct gpmi_nand_data {TYPE_1__ resources; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;

__attribute__((used)) static int FUNC_2(struct gpmi_nand_data *VAR_1, bool VAR_2)
{
 struct clk *VAR_3;
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = VAR_1->resources.clock[VAR_5];
  if (!VAR_3)
   break;

  if (VAR_2) {
   VAR_4 = FUNC_1(VAR_3);
   if (VAR_4)
    goto err_clk;
  } else {
   FUNC_0(VAR_3);
  }
 }
 return 0;

err_clk:
 for (; VAR_5 > 0; VAR_5--)
  FUNC_0(VAR_1->resources.clock[VAR_5 - 1]);
 return VAR_4;
}
