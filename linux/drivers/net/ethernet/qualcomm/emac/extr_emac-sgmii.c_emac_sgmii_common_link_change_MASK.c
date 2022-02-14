
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_sgmii {int irq; scalar_t__ base; } ;
struct emac_adapter {struct emac_sgmii phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct emac_adapter*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct emac_adapter *VAR_2, bool VAR_3)
{
 struct emac_sgmii *VAR_4 = &VAR_2->phy;
 int VAR_5;

 if (VAR_3) {

  VAR_5 = FUNC_0(VAR_2, 0xff);
  if (VAR_5)
   return VAR_5;

  FUNC_2(VAR_1,
         VAR_4->base + VAR_0);
 } else {

  FUNC_2(0, VAR_4->base + VAR_0);
  FUNC_1(VAR_4->irq);
 }

 return 0;
}
