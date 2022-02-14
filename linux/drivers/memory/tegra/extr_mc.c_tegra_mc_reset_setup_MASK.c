
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int of_reset_n_cells; int nr_resets; int of_node; int owner; int * ops; } ;
struct tegra_mc {TYPE_3__ reset; TYPE_2__* soc; TYPE_1__* dev; } ;
struct TYPE_5__ {int num_resets; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct tegra_mc *VAR_2)
{
 int VAR_3;

 VAR_2->reset.ops = &VAR_1;
 VAR_2->reset.owner = VAR_0;
 VAR_2->reset.of_node = VAR_2->dev->of_node;
 VAR_2->reset.of_reset_n_cells = 1;
 VAR_2->reset.nr_resets = VAR_2->soc->num_resets;

 VAR_3 = FUNC_0(&VAR_2->reset);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
