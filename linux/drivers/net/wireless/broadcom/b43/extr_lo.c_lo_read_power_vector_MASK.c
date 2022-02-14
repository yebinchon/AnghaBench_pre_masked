
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct b43_phy {struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_txpower_lo_control {int power_vector; int pwr_vec_read_time; } ;
struct b43_phy_g {struct b43_txpower_lo_control* lo_control; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_2)
{
 struct b43_phy *VAR_3 = &VAR_2->phy;
 struct b43_phy_g *VAR_4 = VAR_3->g;
 struct b43_txpower_lo_control *VAR_5 = VAR_4->lo_control;
 int VAR_6;
 u64 VAR_7;
 u64 VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < 8; VAR_6 += 2) {
  VAR_7 = FUNC_0(VAR_2, VAR_0, 0x310 + VAR_6);
  VAR_8 |= (VAR_7 << (VAR_6 * 8));

  FUNC_1(VAR_2, VAR_0, 0x310 + VAR_6, 0);
 }
 if (VAR_8)
  VAR_5->power_vector = VAR_8;
 VAR_5->pwr_vec_read_time = VAR_1;
}
