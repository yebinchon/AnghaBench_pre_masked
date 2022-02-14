
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
typedef enum n_intc_override { ____Placeholder_n_intc_override } n_intc_override ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;





 int FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int,int) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct b43_wldev *VAR_9,
       enum n_intc_override VAR_10,
       u16 VAR_11, u8 VAR_12)
{
 u8 VAR_13, VAR_14;
 u16 VAR_15, VAR_16, VAR_17;

 if (VAR_9->phy.rev >= 7) {
  FUNC_3(VAR_9, VAR_10, VAR_11,
         VAR_12);
  return;
 }

 FUNC_0(VAR_9->phy.rev < 3);

 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  if ((VAR_12 == 1 && VAR_13 == 1) || (VAR_12 == 2 && !VAR_13))
   continue;

  VAR_15 = (VAR_13 == 0) ?
   VAR_3 : VAR_4;
  FUNC_7(VAR_9, VAR_15, 0x400);

  switch (VAR_10) {
  case 130:
   FUNC_8(VAR_9, VAR_15, 0);
   FUNC_2(VAR_9, VAR_7);
   break;
  case 128:
   if (!VAR_13) {
    FUNC_5(VAR_9, VAR_3,
      0xFC3F, (VAR_11 << 6));
    FUNC_5(VAR_9, VAR_6,
      0xFFFE, 1);
    FUNC_7(VAR_9, VAR_0,
      VAR_2);
    for (VAR_14 = 0; VAR_14 < 100; VAR_14++) {
     if (!(FUNC_6(VAR_9, VAR_0) & VAR_2)) {
      VAR_14 = 0;
      break;
     }
     FUNC_10(10);
    }
    if (VAR_14)
     FUNC_9(VAR_9->wl,
      "intc override timeout\n");
    FUNC_4(VAR_9, VAR_6,
      0xFFFE);
   } else {
    FUNC_5(VAR_9, VAR_4,
      0xFC3F, (VAR_11 << 6));
    FUNC_5(VAR_9, VAR_5,
      0xFFFE, 1);
    FUNC_7(VAR_9, VAR_0,
      VAR_1);
    for (VAR_14 = 0; VAR_14 < 100; VAR_14++) {
     if (!(FUNC_6(VAR_9, VAR_0) & VAR_1)) {
      VAR_14 = 0;
      break;
     }
     FUNC_10(10);
    }
    if (VAR_14)
     FUNC_9(VAR_9->wl,
      "intc override timeout\n");
    FUNC_4(VAR_9, VAR_5,
      0xFFFE);
   }
   break;
  case 129:
   if (FUNC_1(VAR_9->wl) == VAR_8) {
    VAR_16 = 0x0020;
    VAR_17 = VAR_11 << 5;
   } else {
    VAR_16 = 0x0010;
    VAR_17 = VAR_11 << 4;
   }
   FUNC_5(VAR_9, VAR_15, ~VAR_16, VAR_17);
   break;
  case 131:
   if (FUNC_1(VAR_9->wl) == VAR_8) {
    VAR_16 = 0x0001;
    VAR_17 = VAR_11;
   } else {
    VAR_16 = 0x0004;
    VAR_17 = VAR_11 << 2;
   }
   FUNC_5(VAR_9, VAR_15, ~VAR_16, VAR_17);
   break;
  case 132:
   if (FUNC_1(VAR_9->wl) == VAR_8) {
    VAR_16 = 0x0002;
    VAR_17 = VAR_11 << 1;
   } else {
    VAR_16 = 0x0008;
    VAR_17 = VAR_11 << 3;
   }
   FUNC_5(VAR_9, VAR_15, ~VAR_16, VAR_17);
   break;
  }
 }
}
