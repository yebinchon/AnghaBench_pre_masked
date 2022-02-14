
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emac_sgmii {scalar_t__ base; } ;
struct emac_adapter {struct emac_sgmii phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct emac_adapter *VAR_2)
{
 struct emac_sgmii *VAR_3 = &VAR_2->phy;
 u32 VAR_4;


 VAR_4 = FUNC_1(VAR_3->base + VAR_0);
 FUNC_2(((VAR_4 & ~VAR_1) | VAR_1), VAR_3->base +
        VAR_0);

 FUNC_0(50);
 VAR_4 = FUNC_1(VAR_3->base + VAR_0);
 FUNC_2((VAR_4 & ~VAR_1), VAR_3->base + VAR_0);



 FUNC_0(50);
}
