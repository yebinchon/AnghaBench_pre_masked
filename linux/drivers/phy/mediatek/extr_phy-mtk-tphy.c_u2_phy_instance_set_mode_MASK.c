
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct u2phy_banks {scalar_t__ com; } ;
struct mtk_tphy {int dummy; } ;
struct mtk_phy_instance {struct u2phy_banks u2_banks; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mtk_tphy *VAR_3,
         struct mtk_phy_instance *VAR_4,
         enum phy_mode VAR_5)
{
 struct u2phy_banks *VAR_6 = &VAR_4->u2_banks;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->com + VAR_2);
 switch (VAR_5) {
 case 130:
  VAR_7 |= VAR_0 | VAR_1;
  break;
 case 129:
  VAR_7 |= VAR_0;
  VAR_7 &= ~VAR_1;
  break;
 case 128:
  VAR_7 &= ~(VAR_0 | VAR_1);
  break;
 default:
  return;
 }
 FUNC_1(VAR_7, VAR_6->com + VAR_2);
}
