
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
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 struct rcar_canfd_channel* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_1)
{
 struct rcar_canfd_channel *VAR_2 = FUNC_7(VAR_1);
 struct rcar_canfd_global *VAR_3 = VAR_2->gpriv;
 int VAR_4;


 VAR_4 = FUNC_2(VAR_3->can_clk);
 if (VAR_4) {
  FUNC_6(VAR_1, "failed to enable CAN clock, error %d\n", VAR_4);
  goto out_clock;
 }

 VAR_4 = FUNC_9(VAR_1);
 if (VAR_4) {
  FUNC_6(VAR_1, "open_candev() failed, error %d\n", VAR_4);
  goto out_can_clock;
 }

 FUNC_5(&VAR_2->napi);
 VAR_4 = FUNC_10(VAR_1);
 if (VAR_4)
  goto out_close;
 FUNC_8(VAR_1);
 FUNC_0(VAR_1, VAR_0);
 return 0;
out_close:
 FUNC_4(&VAR_2->napi);
 FUNC_3(VAR_1);
out_can_clock:
 FUNC_1(VAR_3->can_clk);
out_clock:
 return VAR_4;
}
