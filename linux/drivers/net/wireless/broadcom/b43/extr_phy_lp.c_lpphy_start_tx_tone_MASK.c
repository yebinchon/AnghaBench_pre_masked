
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct cordic_iq {int i; int q; } ;
struct TYPE_2__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_lp {int tx_tone_freq; } ;
typedef int s32 ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct b43_wldev*,int ,int,int*) ;
 struct cordic_iq FUNC_6 (int ) ;
 int FUNC_7 (struct b43_wldev*,int,int,int ) ;

__attribute__((used)) static void FUNC_8(struct b43_wldev *VAR_0, s32 VAR_1, u16 VAR_2)
{
 struct b43_phy_lp *VAR_3 = VAR_0->phy.lp;
 u16 VAR_4[64];
 int VAR_5, VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = (((36 * VAR_1) / 20) << 16) / 100;
 struct cordic_iq VAR_9;

 VAR_3->tx_tone_freq = VAR_1;

 if (VAR_1) {

  for (VAR_5 = 1; VAR_6 * FUNC_4(VAR_1) != 20000 * VAR_5; VAR_5++) {
   VAR_6 = (20000 * VAR_5) / FUNC_4(VAR_1);
   if(FUNC_1(VAR_6 > 63))
    return;
  }
 } else {
  VAR_6 = 2;
 }

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_9 = FUNC_6(FUNC_2(VAR_7));
  VAR_7 += VAR_8;
  VAR_4[VAR_5] = FUNC_3((VAR_9.i * VAR_2) & 0xFF) << 8;
  VAR_4[VAR_5] |= FUNC_3((VAR_9.q * VAR_2) & 0xFF);
 }

 FUNC_5(VAR_0, FUNC_0(5, 0), VAR_6, VAR_4);

 FUNC_7(VAR_0, VAR_6, 0xFFFF, 0);
}
