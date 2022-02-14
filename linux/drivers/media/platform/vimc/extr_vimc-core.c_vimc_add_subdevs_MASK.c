
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vimc_platform_data {int entity_name; } ;
struct TYPE_10__ {int dev; } ;
struct vimc_device {TYPE_4__** subdevs; TYPE_3__ pdev; TYPE_2__* pipe_cfg; } ;
struct component_match {int dummy; } ;
typedef int pdata ;
struct TYPE_11__ {int dev; } ;
struct TYPE_9__ {int num_ents; TYPE_1__* ents; } ;
struct TYPE_8__ {int drv; int name; } ;


 struct component_match* FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct component_match**,int ,int *) ;
 int FUNC_3 (int *,char*,int ) ;
 TYPE_4__* FUNC_4 (int *,int ,int ,struct vimc_platform_data*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static struct component_match *FUNC_7(struct vimc_device *VAR_2)
{
 struct component_match *VAR_3 = ((void*)0);
 struct vimc_platform_data VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->pipe_cfg->num_ents; VAR_5++) {
  FUNC_3(&VAR_2->pdev.dev, "new pdev for %s\n",
   VAR_2->pipe_cfg->ents[VAR_5].drv);

  FUNC_6(VAR_4.entity_name, VAR_2->pipe_cfg->ents[VAR_5].name,
   sizeof(VAR_4.entity_name));

  VAR_2->subdevs[VAR_5] = FUNC_4(&VAR_2->pdev.dev,
      VAR_2->pipe_cfg->ents[VAR_5].drv,
      VAR_0,
      &VAR_4,
      sizeof(VAR_4));
  if (FUNC_1(VAR_2->subdevs[VAR_5])) {
   VAR_3 = FUNC_0(VAR_2->subdevs[VAR_5]);
   while (--VAR_5 >= 0)
    FUNC_5(VAR_2->subdevs[VAR_5]);

   return VAR_3;
  }

  FUNC_2(&VAR_2->pdev.dev, &VAR_3, VAR_1,
        &VAR_2->subdevs[VAR_5]->dev);
 }

 return VAR_3;
}
