
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_can_priv {int clk; TYPE_1__* regs; } ;
struct net_device {int dummy; } ;
struct can_berr_counter {void* rxerr; void* txerr; } ;
struct TYPE_2__ {int recr; int tecr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct rcar_can_priv* FUNC_2 (struct net_device const*) ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const struct net_device *VAR_0,
         struct can_berr_counter *VAR_1)
{
 struct rcar_can_priv *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->clk);
 if (VAR_3)
  return VAR_3;
 VAR_1->txerr = FUNC_3(&VAR_2->regs->tecr);
 VAR_1->rxerr = FUNC_3(&VAR_2->regs->recr);
 FUNC_0(VAR_2->clk);
 return 0;
}
