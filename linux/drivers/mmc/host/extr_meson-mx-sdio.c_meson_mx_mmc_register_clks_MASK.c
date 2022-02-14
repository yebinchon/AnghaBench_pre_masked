
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct clk_init_data* init; } ;
struct TYPE_5__ {TYPE_3__ hw; int flags; int width; int shift; scalar_t__ reg; } ;
struct TYPE_4__ {int div; int mult; TYPE_3__ hw; } ;
struct meson_mx_mmc_host {void* cfg_div_clk; TYPE_2__ cfg_div; int controller_dev; scalar_t__ base; void* fixed_factor_clk; TYPE_1__ fixed_factor; void* parent_clk; } ;
struct clk_init_data {char const** parent_names; int num_parents; scalar_t__ flags; int * ops; void* name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int ) ;
 char* FUNC_3 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ,TYPE_3__*) ;
 void* FUNC_6 (int ,int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct meson_mx_mmc_host *VAR_9)
{
 struct clk_init_data VAR_10;
 const char *VAR_11, *VAR_12;

 VAR_12 = FUNC_3(VAR_9->parent_clk);
 VAR_10.name = FUNC_6(VAR_9->controller_dev, VAR_3,
       "%s#fixed_factor",
       FUNC_4(VAR_9->controller_dev));
 if (!VAR_10.name)
  return -VAR_2;

 VAR_10.ops = &VAR_8;
 VAR_10.flags = 0;
 VAR_10.parent_names = &VAR_12;
 VAR_10.num_parents = 1;
 VAR_9->fixed_factor.div = 2;
 VAR_9->fixed_factor.mult = 1;
 VAR_9->fixed_factor.hw.init = &VAR_10;

 VAR_9->fixed_factor_clk = FUNC_5(VAR_9->controller_dev,
       &VAR_9->fixed_factor.hw);
 if (FUNC_2(FUNC_0(VAR_9->fixed_factor_clk)))
  return FUNC_1(VAR_9->fixed_factor_clk);

 VAR_11 = FUNC_3(VAR_9->fixed_factor_clk);
 VAR_10.name = FUNC_6(VAR_9->controller_dev, VAR_3,
       "%s#div", FUNC_4(VAR_9->controller_dev));
 if (!VAR_10.name)
  return -VAR_2;

 VAR_10.ops = &VAR_7;
 VAR_10.flags = VAR_1;
 VAR_10.parent_names = &VAR_11;
 VAR_10.num_parents = 1;
 VAR_9->cfg_div.reg = VAR_9->base + VAR_4;
 VAR_9->cfg_div.shift = VAR_5;
 VAR_9->cfg_div.width = VAR_6;
 VAR_9->cfg_div.hw.init = &VAR_10;
 VAR_9->cfg_div.flags = VAR_0;

 VAR_9->cfg_div_clk = FUNC_5(VAR_9->controller_dev,
           &VAR_9->cfg_div.hw);
 if (FUNC_2(FUNC_0(VAR_9->cfg_div_clk)))
  return FUNC_1(VAR_9->cfg_div_clk);

 return 0;
}
