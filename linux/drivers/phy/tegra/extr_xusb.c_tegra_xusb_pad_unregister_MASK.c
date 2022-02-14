
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb_pad {int dev; int * lanes; int provider; TYPE_1__* soc; } ;
struct TYPE_2__ {unsigned int num_lanes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct tegra_xusb_pad *VAR_0)
{
 unsigned int VAR_1 = VAR_0->soc->num_lanes;

 FUNC_1(VAR_0->provider);

 while (VAR_1--)
  FUNC_2(VAR_0->lanes[VAR_1]);

 FUNC_0(&VAR_0->dev);
}
