
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_gen2_phy {struct rcar_gen2_channel* channel; } ;
struct rcar_gen2_channel {int selected_phy; TYPE_1__* drv; } ;
struct phy {int dummy; } ;
struct TYPE_2__ {int clk; } ;


 int FUNC_0 (int ) ;
 struct rcar_gen2_phy* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct rcar_gen2_phy *VAR_1 = FUNC_1(VAR_0);
 struct rcar_gen2_channel *VAR_2 = VAR_1->channel;

 FUNC_0(VAR_2->drv->clk);

 VAR_2->selected_phy = -1;

 return 0;
}
