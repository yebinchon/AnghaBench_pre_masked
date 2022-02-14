
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_phy {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_n {int bb_mult_save; int lpf_bw_overrode_for_sample_play; scalar_t__ hang_avoid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct b43_wldev*,int,int ,int ,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int ,int ,int,int) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int) ;
 int FUNC_6 (struct b43_wldev*,int ) ;
 int FUNC_7 (struct b43_wldev*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct b43_wldev *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_4->phy;
 struct b43_phy_n *VAR_6 = VAR_4->phy.n;
 u16 VAR_7;

 if (VAR_6->hang_avoid)
  FUNC_3(VAR_4, 1);

 VAR_7 = FUNC_6(VAR_4, VAR_3);
 if (VAR_7 & 0x1)
  FUNC_7(VAR_4, VAR_1, VAR_2);
 else if (VAR_7 & 0x2)
  FUNC_5(VAR_4, VAR_0, 0x7FFF);

 FUNC_5(VAR_4, VAR_1, ~0x0004);

 if (VAR_6->bb_mult_save & 0x80000000) {
  VAR_7 = VAR_6->bb_mult_save & 0xFFFF;
  FUNC_4(VAR_4, FUNC_0(15, 87), VAR_7);
  VAR_6->bb_mult_save = 0;
 }

 if (VAR_5->rev >= 7 && VAR_6->lpf_bw_overrode_for_sample_play) {
  if (VAR_5->rev >= 19)
   FUNC_1(VAR_4, 0x80, 0, 0, 1,
             1);
  else
   FUNC_2(VAR_4, 0x80, 0, 0, 1, 1);
  VAR_6->lpf_bw_overrode_for_sample_play = 0;
 }

 if (VAR_6->hang_avoid)
  FUNC_3(VAR_4, 0);
}
