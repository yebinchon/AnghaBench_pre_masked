
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vimc_device {int * subdevs; TYPE_1__* pipe_cfg; } ;
struct TYPE_2__ {unsigned int num_ents; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct vimc_device *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->pipe_cfg->num_ents; VAR_1++)
  FUNC_0(VAR_0->subdevs[VAR_1]);
}
