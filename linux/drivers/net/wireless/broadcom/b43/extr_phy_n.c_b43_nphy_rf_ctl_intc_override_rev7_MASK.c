
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_wldev {int wl; } ;
typedef enum n_intc_override { ____Placeholder_n_intc_override } n_intc_override ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_4,
            enum n_intc_override VAR_5,
            u16 VAR_6, u8 VAR_7)
{
 u16 VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;



 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  if ((VAR_7 == 1 && VAR_12 != 0) ||
      (VAR_7 == 2 && VAR_12 != 1))
   continue;

  VAR_8 = (VAR_12 == 0) ? VAR_0 : VAR_1;

  switch (VAR_5) {
  case 130:
   FUNC_5(VAR_4, VAR_8, 0);
   FUNC_2(VAR_4, 0x2ff, ~0x2000);
   FUNC_1(VAR_4, VAR_2);
   break;
  case 128:
   FUNC_3(VAR_4, VAR_8, ~0xC0, VAR_6 << 6);
   FUNC_4(VAR_4, VAR_8, 0x400);

   FUNC_2(VAR_4, 0x2ff, ~0xC000 & 0xFFFF);
   FUNC_4(VAR_4, 0x2ff, 0x2000);
   FUNC_4(VAR_4, 0x2ff, 0x0001);
   break;
  case 129:
   VAR_9 = 0x0030;
   if (FUNC_0(VAR_4->wl) == VAR_3)
    VAR_11 = VAR_6 << 5;
   else
    VAR_11 = VAR_6 << 4;
   FUNC_3(VAR_4, VAR_8, ~VAR_9, VAR_11);
   FUNC_4(VAR_4, VAR_8, 0x1000);
   break;
  case 131:
   if (FUNC_0(VAR_4->wl) == VAR_3) {
    VAR_9 = 0x0001;
    VAR_10 = 0x0004;
    VAR_11 = VAR_6;
   } else {
    VAR_9 = 0x0004;
    VAR_10 = 0x0001;
    VAR_11 = VAR_6 << 2;
   }
   FUNC_3(VAR_4, VAR_8, ~VAR_9, VAR_11);
   FUNC_2(VAR_4, VAR_8, ~VAR_10);
   break;
  case 132:
   if (FUNC_0(VAR_4->wl) == VAR_3) {
    VAR_9 = 0x0002;
    VAR_10 = 0x0008;
    VAR_11 = VAR_6 << 1;
   } else {
    VAR_9 = 0x0008;
    VAR_10 = 0x0002;
    VAR_11 = VAR_6 << 3;
   }
   FUNC_3(VAR_4, VAR_8, ~VAR_9, VAR_11);
   FUNC_2(VAR_4, VAR_8, ~VAR_10);
   break;
  }
 }
}
