
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emac_sgmii {scalar_t__ base; } ;
struct emac_adapter {struct emac_sgmii phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct emac_adapter *VAR_4)
{
 struct emac_sgmii *VAR_5 = &VAR_4->phy;
 u32 VAR_6;




 VAR_6 = FUNC_0(VAR_5->base + VAR_1);
 VAR_6 &= ~(VAR_2 | VAR_3);
 VAR_6 |= VAR_0;
 FUNC_1(VAR_6, VAR_5->base + VAR_1);
}
