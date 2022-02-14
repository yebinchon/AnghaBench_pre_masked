
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cordic_iq {int q; int i; } ;
struct b43_wldev {int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,struct cordic_iq*,int) ;
 int FUNC_4 (struct b43_wldev*,int ) ;
 int FUNC_5 (int ,char*) ;
 struct cordic_iq FUNC_6 (int ) ;
 struct cordic_iq* FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct cordic_iq*) ;

__attribute__((used)) static u16 FUNC_9(struct b43_wldev *VAR_3, u32 VAR_4, u16 VAR_5,
     bool VAR_6)
{
 int VAR_7;
 u16 VAR_8, VAR_9, VAR_10, VAR_11;
 struct cordic_iq *VAR_12;

 VAR_8 = FUNC_2(VAR_3) ? 40 : 20;
 VAR_9 = VAR_8 << 3;

 if (VAR_6) {
  if (FUNC_4(VAR_3, VAR_0) & VAR_1)
   VAR_8 = 82;
  else
   VAR_8 = 80;

  if (FUNC_2(VAR_3))
   VAR_8 <<= 1;

  VAR_9 = VAR_8 << 1;
 }

 VAR_12 = FUNC_7(VAR_9, sizeof(struct cordic_iq), VAR_2);
 if (!VAR_12) {
  FUNC_5(VAR_3->wl, "allocation for samples generation failed\n");
  return 0;
 }
 VAR_10 = (((VAR_4 * 36) / VAR_8) << 16) / 100;
 VAR_11 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_12[VAR_7] = FUNC_6(FUNC_0(VAR_11));
  VAR_11 += VAR_10;
  VAR_12[VAR_7].q = FUNC_1(VAR_12[VAR_7].q * VAR_5);
  VAR_12[VAR_7].i = FUNC_1(VAR_12[VAR_7].i * VAR_5);
 }

 VAR_7 = FUNC_3(VAR_3, VAR_12, VAR_9);
 FUNC_8(VAR_12);
 return (VAR_7 < 0) ? 0 : VAR_9;
}
