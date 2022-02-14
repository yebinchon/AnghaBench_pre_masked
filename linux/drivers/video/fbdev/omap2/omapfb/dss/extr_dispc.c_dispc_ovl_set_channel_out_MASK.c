
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(enum omap_plane VAR_2, enum omap_channel VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 int VAR_6 = 0, VAR_7 = 0;

 switch (VAR_2) {
 case 131:
  VAR_4 = 8;
  break;
 case 130:
 case 129:
 case 128:
  VAR_4 = 16;
  break;
 default:
  FUNC_0();
  return;
 }

 VAR_5 = FUNC_3(FUNC_1(VAR_2));
 if (FUNC_5(VAR_0)) {
  switch (VAR_3) {
  case 135:
   VAR_6 = 0;
   VAR_7 = 0;
   break;
  case 136:
   VAR_6 = 1;
   VAR_7 = 0;
   break;
  case 134:
   VAR_6 = 0;
   VAR_7 = 1;
   break;
  case 133:
   if (FUNC_5(VAR_1)) {
    VAR_6 = 0;
    VAR_7 = 2;
   } else {
    FUNC_0();
    return;
   }
   break;
  case 132:
   VAR_6 = 0;
   VAR_7 = 3;
   break;
  default:
   FUNC_0();
   return;
  }

  VAR_5 = FUNC_2(VAR_5, VAR_6, VAR_4, VAR_4);
  VAR_5 = FUNC_2(VAR_5, VAR_7, 31, 30);
 } else {
  VAR_5 = FUNC_2(VAR_5, VAR_3, VAR_4, VAR_4);
 }
 FUNC_4(FUNC_1(VAR_2), VAR_5);
}
