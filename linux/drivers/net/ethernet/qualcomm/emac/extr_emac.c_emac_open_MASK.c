
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct emac_irq {int irq; } ;
struct emac_adapter {int netdev; struct emac_irq irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct emac_adapter*) ;
 int FUNC_1 (struct emac_adapter*) ;
 int FUNC_2 (struct emac_adapter*) ;
 int FUNC_3 (struct emac_adapter*) ;
 int FUNC_4 (struct emac_adapter*) ;
 int FUNC_5 (int ,struct emac_irq*) ;
 int FUNC_6 (int ,char*) ;
 struct emac_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,int ,char*,struct emac_irq*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1)
{
 struct emac_adapter *VAR_2 = FUNC_7(VAR_1);
 struct emac_irq *VAR_3 = &VAR_2->irq;
 int VAR_4;

 VAR_4 = FUNC_8(VAR_3->irq, VAR_0, 0, "emac-core0", VAR_3);
 if (VAR_4) {
  FUNC_6(VAR_2->netdev, "could not request emac-core0 irq\n");
  return VAR_4;
 }


 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  FUNC_6(VAR_2->netdev, "error allocating rx/tx rings\n");
  FUNC_5(VAR_3->irq, VAR_3);
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_2);
  FUNC_5(VAR_3->irq, VAR_3);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_2);
  FUNC_5(VAR_3->irq, VAR_3);
  FUNC_3(VAR_2);
  return VAR_4;
 }

 return 0;
}
