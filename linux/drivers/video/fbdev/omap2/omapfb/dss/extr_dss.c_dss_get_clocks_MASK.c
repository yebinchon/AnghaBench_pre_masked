
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct clk {int dummy; } ;
struct TYPE_6__ {struct clk* parent_clk; TYPE_2__* feat; struct clk* dss_clk; TYPE_1__* pdev; } ;
struct TYPE_5__ {scalar_t__ parent_clk_name; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,scalar_t__) ;
 struct clk* FUNC_4 (int *,char*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_5(void)
{
 struct clk *VAR_1;

 VAR_1 = FUNC_4(&VAR_0.pdev->dev, "fck");
 if (FUNC_1(VAR_1)) {
  FUNC_0("can't get clock fck\n");
  return FUNC_2(VAR_1);
 }

 VAR_0.dss_clk = VAR_1;

 if (VAR_0.feat->parent_clk_name) {
  VAR_1 = FUNC_3(((void*)0), VAR_0.feat->parent_clk_name);
  if (FUNC_1(VAR_1)) {
   FUNC_0("Failed to get %s\n", VAR_0.feat->parent_clk_name);
   return FUNC_2(VAR_1);
  }
 } else {
  VAR_1 = ((void*)0);
 }

 VAR_0.parent_clk = VAR_1;

 return 0;
}
