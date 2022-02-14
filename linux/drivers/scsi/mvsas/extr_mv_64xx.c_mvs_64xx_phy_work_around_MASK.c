
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvs_phy {int phy_status; } ;
struct mvs_info {struct mvs_phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mvs_info*,int) ;
 int FUNC_1 (struct mvs_info*,int,int ) ;
 int FUNC_2 (struct mvs_info*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct mvs_info *VAR_5, int VAR_6)
{
 u32 VAR_7;
 struct mvs_phy *VAR_8 = &VAR_5->phy[VAR_6];
 FUNC_1(VAR_5, VAR_6, VAR_4);
 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (((VAR_8->phy_status & VAR_1) >>
      VAR_2) ==
  VAR_3)
  VAR_7 &= ~VAR_0;
 else
  VAR_7 |= VAR_0;
 FUNC_2(VAR_5, VAR_6, VAR_7);
}
