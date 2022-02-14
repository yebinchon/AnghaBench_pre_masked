
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {int phy_speed; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct xgene_enet_pdata*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct xgene_enet_pdata *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_0,
      VAR_4 >> 2);

 if (FUNC_0(VAR_9) == VAR_3)
  VAR_8->phy_speed = VAR_7;
 else if (FUNC_0(VAR_9) == VAR_2)
  VAR_8->phy_speed = VAR_6;
 else
  VAR_8->phy_speed = VAR_5;

 return VAR_9 & VAR_1;
}
