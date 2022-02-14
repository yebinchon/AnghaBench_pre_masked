
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_sgmii {scalar_t__ irq; scalar_t__ base; } ;
struct emac_adapter {int netdev; struct emac_sgmii phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct emac_adapter*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,int ,int ,char*,struct emac_adapter*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct emac_adapter *VAR_2)
{
 struct emac_sgmii *VAR_3 = &VAR_2->phy;
 int VAR_4;

 if (VAR_3->irq) {

  VAR_4 = FUNC_0(VAR_2, 0xff);
  if (VAR_4)
   return VAR_4;
  FUNC_3(0, VAR_3->base + VAR_0);

  VAR_4 = FUNC_2(VAR_3->irq, VAR_1, 0,
      "emac-sgmii", VAR_2);
  if (VAR_4) {
   FUNC_1(VAR_2->netdev,
       "could not register handler for internal PHY\n");
   return VAR_4;
  }
 }

 return 0;
}
