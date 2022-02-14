
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_phy_linkrates {int minimum_linkrate; int maximum_linkrate; } ;
struct mvs_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvs_info*,int,int ) ;
 int FUNC_1 (struct mvs_info*,int) ;
 int FUNC_2 (struct mvs_info*,int,int) ;

__attribute__((used)) static void FUNC_3(struct mvs_info *VAR_1, u32 VAR_2,
   struct sas_phy_linkrates *VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 VAR_4 = (VAR_3->minimum_linkrate << 8);
 VAR_5 = (VAR_3->maximum_linkrate << 12);

 if (VAR_4) {
  VAR_6 &= ~(0xf << 8);
  VAR_6 |= VAR_4;
 }
 if (VAR_5) {
  VAR_6 &= ~(0xf << 12);
  VAR_6 |= VAR_5;
 }
 FUNC_2(VAR_1, VAR_2, VAR_6);
 FUNC_0(VAR_1, VAR_2, VAR_0);
}
