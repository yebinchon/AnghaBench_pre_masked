
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {scalar_t__ phy_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct xgene_enet_pdata*,int ,int) ;
 int FUNC_1 (struct xgene_enet_pdata*) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_pdata *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->phy_speed == VAR_3)
  return;

 VAR_5 = FUNC_0(VAR_4, VAR_0,
       VAR_2 >> 2);
 if (!(VAR_5 & VAR_1))
  FUNC_1(VAR_4);
}
