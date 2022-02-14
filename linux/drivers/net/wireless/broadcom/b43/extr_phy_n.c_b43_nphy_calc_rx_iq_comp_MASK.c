
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nphy_iq_est {int iq0_prod; int i0_pwr; int q0_pwr; int iq1_prod; int i1_pwr; int q1_pwr; } ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;
struct b43_phy_n_iq_comp {int a0; int b0; int a1; int b1; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int,struct b43_phy_n_iq_comp*) ;
 int FUNC_2 (struct b43_wldev*,struct nphy_iq_est*,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_0, u8 VAR_1)
{
 int VAR_2;
 s32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 u16 VAR_10, VAR_11, VAR_12;

 struct nphy_iq_est VAR_13;
 struct b43_phy_n_iq_comp VAR_14;
 struct b43_phy_n_iq_comp VAR_15 = { };
 bool VAR_16 = 0;

 if (VAR_1 == 0)
  return;

 FUNC_1(VAR_0, 0, &VAR_14);
 FUNC_1(VAR_0, 1, &VAR_15);
 FUNC_2(VAR_0, &VAR_13, 0x4000, 32, 0);
 VAR_15 = VAR_14;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_2 == 0 && (VAR_1 & 1)) {
   VAR_3 = VAR_13.iq0_prod;
   VAR_4 = VAR_13.i0_pwr;
   VAR_5 = VAR_13.q0_pwr;
  } else if (VAR_2 == 1 && (VAR_1 & 2)) {
   VAR_3 = VAR_13.iq1_prod;
   VAR_4 = VAR_13.i1_pwr;
   VAR_5 = VAR_13.q1_pwr;
  } else {
   continue;
  }

  if (VAR_4 + VAR_5 < 2) {
   VAR_16 = 1;
   break;
  }

  VAR_6 = FUNC_3(FUNC_0(VAR_3));
  VAR_7 = FUNC_3(VAR_5);

  VAR_8 = VAR_6 - 20;
  if (VAR_8 >= 0) {
   VAR_11 = -((VAR_3 << (30 - VAR_6)) + (VAR_4 >> (1 + VAR_8)));
   VAR_10 = VAR_4 >> VAR_8;
  } else {
   VAR_11 = -((VAR_3 << (30 - VAR_6)) + (VAR_4 << (-1 - VAR_8)));
   VAR_10 = VAR_4 << -VAR_8;
  }
  if (VAR_10 == 0) {
   VAR_16 = 1;
   break;
  }
  VAR_11 /= VAR_10;

  VAR_9 = VAR_7 - 11;
  if (VAR_9 >= 0) {
   VAR_12 = (VAR_5 << (31 - VAR_7));
   VAR_10 = VAR_4 >> VAR_9;
  } else {
   VAR_12 = (VAR_5 << (31 - VAR_7));
   VAR_10 = VAR_4 << -VAR_9;
  }
  if (VAR_10 == 0) {
   VAR_16 = 1;
   break;
  }
  VAR_12 = FUNC_4(VAR_12 / VAR_10 - VAR_11 * VAR_11) - (1 << 10);

  if (VAR_2 == 0 && (VAR_1 & 0x1)) {
   if (VAR_0->phy.rev >= 3) {
    VAR_15.a0 = VAR_11 & 0x3FF;
    VAR_15.b0 = VAR_12 & 0x3FF;
   } else {
    VAR_15.a0 = VAR_12 & 0x3FF;
    VAR_15.b0 = VAR_11 & 0x3FF;
   }
  } else if (VAR_2 == 1 && (VAR_1 & 0x2)) {
   if (VAR_0->phy.rev >= 3) {
    VAR_15.a1 = VAR_11 & 0x3FF;
    VAR_15.b1 = VAR_12 & 0x3FF;
   } else {
    VAR_15.a1 = VAR_12 & 0x3FF;
    VAR_15.b1 = VAR_11 & 0x3FF;
   }
  }
 }

 if (VAR_16)
  VAR_15 = VAR_14;

 FUNC_1(VAR_0, 1, &VAR_15);
}
