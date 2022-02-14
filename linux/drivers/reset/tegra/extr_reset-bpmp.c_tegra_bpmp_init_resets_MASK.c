
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int nr_resets; int of_node; int owner; int * ops; } ;
struct tegra_bpmp {TYPE_3__ rstc; TYPE_2__* dev; TYPE_1__* soc; } ;
struct TYPE_5__ {int of_node; } ;
struct TYPE_4__ {int num_resets; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int VAR_1 ;

int FUNC_1(struct tegra_bpmp *VAR_2)
{
 VAR_2->rstc.ops = &VAR_1;
 VAR_2->rstc.owner = VAR_0;
 VAR_2->rstc.of_node = VAR_2->dev->of_node;
 VAR_2->rstc.nr_resets = VAR_2->soc->num_resets;

 return FUNC_0(VAR_2->dev, &VAR_2->rstc);
}
