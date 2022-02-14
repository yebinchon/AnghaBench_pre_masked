
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_can_priv {int clk; int can_clk; int napi; } ;
struct net_device {int irq; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*,int,...) ;
 struct rcar_can_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_2)
{
 struct rcar_can_priv *VAR_3 = FUNC_7(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->clk);
 if (VAR_4) {
  FUNC_6(VAR_2,
      "failed to enable peripheral clock, error %d\n",
      VAR_4);
  goto out;
 }
 VAR_4 = FUNC_2(VAR_3->can_clk);
 if (VAR_4) {
  FUNC_6(VAR_2, "failed to enable CAN clock, error %d\n",
      VAR_4);
  goto out_clock;
 }
 VAR_4 = FUNC_9(VAR_2);
 if (VAR_4) {
  FUNC_6(VAR_2, "open_candev() failed, error %d\n", VAR_4);
  goto out_can_clock;
 }
 FUNC_5(&VAR_3->napi);
 VAR_4 = FUNC_11(VAR_2->irq, VAR_1, 0, VAR_2->name, VAR_2);
 if (VAR_4) {
  FUNC_6(VAR_2, "request_irq(%d) failed, error %d\n",
      VAR_2->irq, VAR_4);
  goto out_close;
 }
 FUNC_0(VAR_2, VAR_0);
 FUNC_10(VAR_2);
 FUNC_8(VAR_2);
 return 0;
out_close:
 FUNC_4(&VAR_3->napi);
 FUNC_3(VAR_2);
out_can_clock:
 FUNC_1(VAR_3->can_clk);
out_clock:
 FUNC_1(VAR_3->clk);
out:
 return VAR_4;
}
