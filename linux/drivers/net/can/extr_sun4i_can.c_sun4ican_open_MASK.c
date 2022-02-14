
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4ican_priv {int clk; } ;
struct net_device {int irq; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,struct net_device*) ;
 int FUNC_5 (struct net_device*,char*,...) ;
 struct sun4ican_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int ,int ,int ,struct net_device*) ;
 int VAR_1 ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2)
{
 struct sun4ican_priv *VAR_3 = FUNC_6(VAR_2);
 int VAR_4;


 VAR_4 = FUNC_8(VAR_2);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_9(VAR_2->irq, VAR_1, 0, VAR_2->name, VAR_2);
 if (VAR_4) {
  FUNC_5(VAR_2, "request_irq err: %d\n", VAR_4);
  goto exit_irq;
 }


 VAR_4 = FUNC_2(VAR_3->clk);
 if (VAR_4) {
  FUNC_5(VAR_2, "could not enable CAN peripheral clock\n");
  goto exit_clock;
 }

 VAR_4 = FUNC_10(VAR_2);
 if (VAR_4) {
  FUNC_5(VAR_2, "could not start CAN peripheral\n");
  goto exit_can_start;
 }

 FUNC_0(VAR_2, VAR_0);
 FUNC_7(VAR_2);

 return 0;

exit_can_start:
 FUNC_1(VAR_3->clk);
exit_clock:
 FUNC_4(VAR_2->irq, VAR_2);
exit_irq:
 FUNC_3(VAR_2);
 return VAR_4;
}
