
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int s32 ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(u8 VAR_0, bool VAR_1,
  u16 VAR_2,
  u16 VAR_3, u16 VAR_4,
  enum omap_color_mode VAR_5, bool VAR_6,
  unsigned int VAR_7,
  unsigned *VAR_8, unsigned *VAR_9,
  s32 *VAR_10, s32 *VAR_11, int VAR_12, int VAR_13)
{
 u8 VAR_14;


 switch (VAR_5) {
 case 137:
 case 136:
 case 135:
 case 134:
  FUNC_0();
  return;
 case 132:
 case 133:
  VAR_14 = 4;
  break;
 default:
  VAR_14 = FUNC_2(VAR_5) / 8;
  break;
 }

 FUNC_1("calc_rot(%d): scrw %d, %dx%d\n", VAR_0, VAR_2,
   VAR_3, VAR_4);





 switch (VAR_0 + VAR_1 * 4) {
 case 131:
 case 130:




  if (VAR_5 == 132 ||
   VAR_5 == 133)
   VAR_3 = VAR_3 >> 1;

 case 128:
 case 129:
  *VAR_9 = 0;
  if (VAR_7)
   *VAR_8 = VAR_7 * VAR_2 * VAR_14;
  else
   *VAR_8 = 0;

  *VAR_10 = FUNC_3(1 +
   (VAR_13 * VAR_2 - VAR_12 * VAR_3) +
   (VAR_6 ? VAR_2 : 0), VAR_14);
  *VAR_11 = FUNC_3(VAR_12, VAR_14);
  break;

 case 131 + 4:
 case 130 + 4:



  if (VAR_5 == 132 ||
   VAR_5 == 133)
   VAR_3 = VAR_3 >> 1;

 case 128 + 4:
 case 129 + 4:
  *VAR_9 = 0;
  if (VAR_7)
   *VAR_8 = VAR_7 * VAR_2 * VAR_14;
  else
   *VAR_8 = 0;
  *VAR_10 = FUNC_3(1 -
   (VAR_13 * VAR_2 + VAR_12 * VAR_3) -
   (VAR_6 ? VAR_2 : 0), VAR_14);
  *VAR_11 = FUNC_3(VAR_12, VAR_14);
  break;

 default:
  FUNC_0();
  return;
 }
}
