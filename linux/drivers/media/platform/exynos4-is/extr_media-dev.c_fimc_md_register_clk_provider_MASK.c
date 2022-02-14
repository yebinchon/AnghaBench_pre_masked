
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ clk_num; int * clks; } ;
struct cam_clk_provider {scalar_t__ num_clocks; TYPE_3__ clk_data; int of_node; int * clks; struct cam_clk* camclk; } ;
struct fimc_md {TYPE_2__* camclk; TYPE_1__* pdev; struct cam_clk_provider clk_provider; } ;
struct device {int of_node; } ;
struct clk_init_data {char const** parent_names; int num_parents; int name; int flags; int * ops; } ;
struct TYPE_8__ {struct clk_init_data* init; } ;
struct cam_clk {TYPE_4__ hw; struct fimc_md* fmd; } ;
struct TYPE_6__ {int clock; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (struct device*,char*,int ,int) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct fimc_md*) ;
 int FUNC_7 (int ,int ,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_8 (int ,char*,int,int *) ;

__attribute__((used)) static int FUNC_9(struct fimc_md *VAR_4)
{
 struct cam_clk_provider *VAR_5 = &VAR_4->clk_provider;
 struct device *VAR_6 = &VAR_4->pdev->dev;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  struct cam_clk *VAR_9 = &VAR_5->camclk[VAR_7];
  struct clk_init_data VAR_10;
  const char *VAR_11;

  VAR_8 = FUNC_8(VAR_6->of_node,
     "clock-output-names", VAR_7, &VAR_10.name);
  if (VAR_8 < 0)
   break;

  VAR_11 = FUNC_2(VAR_4->camclk[VAR_7].clock);


  VAR_10.parent_names = &VAR_11;
  VAR_10.num_parents = 1;
  VAR_10.ops = &VAR_2;
  VAR_10.flags = VAR_0;
  VAR_9->hw.init = &VAR_10;
  VAR_9->fmd = VAR_4;

  VAR_5->clks[VAR_7] = FUNC_3(((void*)0), &VAR_9->hw);
  if (FUNC_0(VAR_5->clks[VAR_7])) {
   FUNC_4(VAR_6, "failed to register clock: %s (%ld)\n",
     VAR_10.name, FUNC_1(VAR_5->clks[VAR_7]));
   VAR_8 = FUNC_1(VAR_5->clks[VAR_7]);
   goto err;
  }
  VAR_5->num_clocks++;
 }

 if (VAR_5->num_clocks == 0) {
  FUNC_5(VAR_6, "clk provider not registered\n");
  return 0;
 }

 VAR_5->clk_data.clks = VAR_5->clks;
 VAR_5->clk_data.clk_num = VAR_5->num_clocks;
 VAR_5->of_node = VAR_6->of_node;
 VAR_8 = FUNC_7(VAR_6->of_node, VAR_3,
      &VAR_5->clk_data);
 if (VAR_8 == 0)
  return 0;
err:
 FUNC_6(VAR_4);
 return VAR_8;
}
