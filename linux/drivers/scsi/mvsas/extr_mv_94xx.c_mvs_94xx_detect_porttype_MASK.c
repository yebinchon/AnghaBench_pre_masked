
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvs_phy {int phy_type; } ;
struct mvs_info {struct mvs_phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mvs_info*,int) ;
 int FUNC_1 (struct mvs_info*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct mvs_info *VAR_3, int VAR_4)
{
 u32 VAR_5;
 struct mvs_phy *VAR_6 = &VAR_3->phy[VAR_4];
 u32 VAR_7;

 FUNC_1(VAR_3, VAR_4, VAR_2);
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 VAR_7 = ((VAR_5 & 0x3f0000) >> 16) & 0xff;
 VAR_6->phy_type &= ~(VAR_0 | VAR_1);
 switch (VAR_7) {
 case 0x10:
  VAR_6->phy_type |= VAR_0;
  break;
 case 0x1d:
 default:
  VAR_6->phy_type |= VAR_1;
  break;
 }
}
