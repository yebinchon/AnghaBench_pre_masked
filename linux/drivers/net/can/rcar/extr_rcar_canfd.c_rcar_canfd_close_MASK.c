
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_canfd_global {int can_clk; } ;
struct rcar_canfd_channel {int napi; struct rcar_canfd_global* gpriv; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 struct rcar_canfd_channel* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct rcar_canfd_channel *VAR_2 = FUNC_4(VAR_1);
 struct rcar_canfd_global *VAR_3 = VAR_2->gpriv;

 FUNC_5(VAR_1);
 FUNC_6(VAR_1);
 FUNC_3(&VAR_2->napi);
 FUNC_1(VAR_3->can_clk);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1, VAR_0);
 return 0;
}
