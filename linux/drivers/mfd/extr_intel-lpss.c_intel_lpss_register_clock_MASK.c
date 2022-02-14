
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfd_cell {char* name; } ;
struct intel_lpss {int devid; scalar_t__ type; struct clk* clk; int clock; TYPE_1__* info; int dev; struct mfd_cell* cell; } ;
struct clk {int dummy; } ;
typedef int devname ;
struct TYPE_2__ {int clk_con_id; int clk_rate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int *,int ,int *,int ,int ) ;
 int FUNC_3 (struct clk*,int ,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct intel_lpss*,char*,struct clk**) ;
 int FUNC_6 (struct clk*) ;
 int FUNC_7 (char*,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct intel_lpss *VAR_2)
{
 const struct mfd_cell *VAR_3 = VAR_2->cell;
 struct clk *VAR_4;
 char VAR_5[24];
 int VAR_6;

 if (!VAR_2->info->clk_rate)
  return 0;


 VAR_4 = FUNC_2(((void*)0), FUNC_4(VAR_2->dev), ((void*)0), 0,
          VAR_2->info->clk_rate);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_7(VAR_5, sizeof(VAR_5), "%s.%d", VAR_3->name, VAR_2->devid);





 if (VAR_2->type != VAR_1) {
  VAR_6 = FUNC_5(VAR_2, VAR_5, &VAR_4);
  if (VAR_6)
   goto err_clk_register;
 }

 VAR_6 = -VAR_0;


 VAR_2->clock = FUNC_3(VAR_4, VAR_2->info->clk_con_id, "%s", VAR_5);
 if (!VAR_2->clock)
  goto err_clk_register;

 VAR_2->clk = VAR_4;

 return 0;

err_clk_register:
 FUNC_6(VAR_4);

 return VAR_6;
}
