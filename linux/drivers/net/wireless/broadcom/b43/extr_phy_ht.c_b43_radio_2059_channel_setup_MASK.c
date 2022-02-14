
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;
struct b43_phy_ht_channeltab_e_radio2059 {int radio_rxtx98; int radio_rxtx92; int radio_rxtx6e; int radio_rxtx6d; int radio_rxtx6a; int radio_rxtx5a; int radio_rxtx58; int radio_rxtx4a; int radio_syn47; int radio_syn43; int radio_syn41; int radio_syn37; int radio_syn2d; int radio_syn2c; int radio_syn29; int radio_syn28; int radio_syn27; int radio_syn25; int radio_syn22; int radio_syn17; int radio_syn16; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_2,
   const struct b43_phy_ht_channeltab_e_radio2059 *VAR_3)
{
 static const u16 VAR_4[] = { 130, 129, 128, };
 u16 VAR_5;
 int VAR_6;

 FUNC_2(VAR_2, 0x16, VAR_3->radio_syn16);
 FUNC_2(VAR_2, 0x17, VAR_3->radio_syn17);
 FUNC_2(VAR_2, 0x22, VAR_3->radio_syn22);
 FUNC_2(VAR_2, 0x25, VAR_3->radio_syn25);
 FUNC_2(VAR_2, 0x27, VAR_3->radio_syn27);
 FUNC_2(VAR_2, 0x28, VAR_3->radio_syn28);
 FUNC_2(VAR_2, 0x29, VAR_3->radio_syn29);
 FUNC_2(VAR_2, 0x2c, VAR_3->radio_syn2c);
 FUNC_2(VAR_2, 0x2d, VAR_3->radio_syn2d);
 FUNC_2(VAR_2, 0x37, VAR_3->radio_syn37);
 FUNC_2(VAR_2, 0x41, VAR_3->radio_syn41);
 FUNC_2(VAR_2, 0x43, VAR_3->radio_syn43);
 FUNC_2(VAR_2, 0x47, VAR_3->radio_syn47);

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  VAR_5 = VAR_4[VAR_6];
  FUNC_2(VAR_2, VAR_5 | 0x4a, VAR_3->radio_rxtx4a);
  FUNC_2(VAR_2, VAR_5 | 0x58, VAR_3->radio_rxtx58);
  FUNC_2(VAR_2, VAR_5 | 0x5a, VAR_3->radio_rxtx5a);
  FUNC_2(VAR_2, VAR_5 | 0x6a, VAR_3->radio_rxtx6a);
  FUNC_2(VAR_2, VAR_5 | 0x6d, VAR_3->radio_rxtx6d);
  FUNC_2(VAR_2, VAR_5 | 0x6e, VAR_3->radio_rxtx6e);
  FUNC_2(VAR_2, VAR_5 | 0x92, VAR_3->radio_rxtx92);
  FUNC_2(VAR_2, VAR_5 | 0x98, VAR_3->radio_rxtx98);
 }

 FUNC_3(50);


 FUNC_0(VAR_2, VAR_1, ~0x1);
 FUNC_0(VAR_2, VAR_0, ~0x4);
 FUNC_1(VAR_2, VAR_0, 0x4);
 FUNC_1(VAR_2, VAR_1, 0x1);

 FUNC_3(300);
}
