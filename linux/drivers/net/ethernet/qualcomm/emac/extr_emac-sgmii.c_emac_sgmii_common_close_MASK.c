
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_sgmii {int irq; scalar_t__ base; } ;
struct emac_adapter {struct emac_sgmii phy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct emac_adapter*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct emac_adapter *VAR_1)
{
 struct emac_sgmii *VAR_2 = &VAR_1->phy;


 FUNC_1(0, VAR_2->base + VAR_0);
 FUNC_0(VAR_2->irq, VAR_1);
}
