
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {scalar_t__ phy_wreg; int d11core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(struct brcms_phy *VAR_2, u16 VAR_3, u16 VAR_4, u16 VAR_5)
{
 VAR_5 &= VAR_4;
 FUNC_2(VAR_2->d11core, FUNC_0(VAR_0), VAR_3);
 FUNC_1(VAR_2->d11core, FUNC_0(VAR_1), ~VAR_4, VAR_5);
 VAR_2->phy_wreg = 0;
}
