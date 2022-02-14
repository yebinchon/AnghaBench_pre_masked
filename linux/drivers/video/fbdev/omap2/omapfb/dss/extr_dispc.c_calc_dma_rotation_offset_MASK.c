
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u16 ;
typedef int s32 ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int,unsigned int,unsigned int,unsigned int) ;




 int VAR_0 ;
 int VAR_1 ;




 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(u8 VAR_2, bool VAR_3,
  u16 VAR_4,
  u16 VAR_5, u16 VAR_6,
  enum omap_color_mode VAR_7, bool VAR_8,
  unsigned int VAR_9,
  unsigned *VAR_10, unsigned *VAR_11,
  s32 *VAR_12, s32 *VAR_13, int VAR_14, int VAR_15)
{
 u8 VAR_16;
 u16 VAR_17, VAR_18;


 switch (VAR_7) {
 case 135:
 case 134:
 case 133:
 case 132:
  FUNC_0();
  return;
 default:
  VAR_16 = FUNC_2(VAR_7) / 8;
  break;
 }

 FUNC_1("calc_rot(%d): scrw %d, %dx%d\n", VAR_2, VAR_4,
   VAR_5, VAR_6);



 if (VAR_2 == 131 || VAR_2 == 130) {
  VAR_17 = VAR_5;
  VAR_18 = VAR_6;
 } else {
  VAR_17 = VAR_6;
  VAR_18 = VAR_5;
 }





 switch (VAR_2 + VAR_3 * 4) {
 case 131:
  *VAR_11 = 0;
  if (VAR_9)
   *VAR_10 = *VAR_11 + VAR_9 * VAR_4 * VAR_16;
  else
   *VAR_10 = *VAR_11;
  *VAR_12 = FUNC_3(1 +
   (VAR_15 * VAR_4 - VAR_17 * VAR_14) +
   (VAR_8 ? VAR_4 : 0), VAR_16);
  if (VAR_7 == VAR_1 ||
   VAR_7 == VAR_0)
   *VAR_13 = FUNC_3(VAR_14, 2 * VAR_16);
  else
   *VAR_13 = FUNC_3(VAR_14, VAR_16);
  break;
 case 128:
  *VAR_11 = VAR_4 * (VAR_18 - 1) * VAR_16;
  if (VAR_9)
   *VAR_10 = *VAR_11 + VAR_9 * VAR_16;
  else
   *VAR_10 = *VAR_11;
  *VAR_12 = FUNC_3(VAR_4 * (VAR_18 * VAR_14 - 1) +
    VAR_15 + (VAR_8 ? 1 : 0), VAR_16);
  *VAR_13 = FUNC_3(-VAR_14 * VAR_4, VAR_16);
  break;
 case 130:
  *VAR_11 = (VAR_4 * (VAR_18 - 1) + VAR_17 - 1) * VAR_16;
  if (VAR_9)
   *VAR_10 = *VAR_11 - VAR_9 * VAR_4 * VAR_16;
  else
   *VAR_10 = *VAR_11;
  *VAR_12 = FUNC_3(-1 -
   (VAR_15 * VAR_4 - VAR_17 * VAR_14) -
   (VAR_8 ? VAR_4 : 0), VAR_16);
  if (VAR_7 == VAR_1 ||
   VAR_7 == VAR_0)
   *VAR_13 = FUNC_3(-VAR_14, 2 * VAR_16);
  else
   *VAR_13 = FUNC_3(-VAR_14, VAR_16);
  break;
 case 129:
  *VAR_11 = (VAR_17 - 1) * VAR_16;
  if (VAR_9)
   *VAR_10 = *VAR_11 - VAR_9 * VAR_16;
  else
   *VAR_10 = *VAR_11;
  *VAR_12 = FUNC_3(-VAR_4 * (VAR_18 * VAR_14 - 1) -
    VAR_15 - (VAR_8 ? 1 : 0), VAR_16);
  *VAR_13 = FUNC_3(VAR_14 * VAR_4, VAR_16);
  break;


 case 131 + 4:
  *VAR_11 = (VAR_17 - 1) * VAR_16;
  if (VAR_9)
   *VAR_10 = *VAR_11 + VAR_9 * VAR_4 * VAR_16;
  else
   *VAR_10 = *VAR_11;
  *VAR_12 = FUNC_3(VAR_15 * VAR_4 * 2 - 1 +
    (VAR_8 ? VAR_4 : 0),
    VAR_16);
  if (VAR_7 == VAR_1 ||
   VAR_7 == VAR_0)
   *VAR_13 = FUNC_3(-VAR_14, 2 * VAR_16);
  else
   *VAR_13 = FUNC_3(-VAR_14, VAR_16);
  break;

 case 128 + 4:
  *VAR_11 = 0;
  if (VAR_9)
   *VAR_10 = *VAR_11 + VAR_9 * VAR_16;
  else
   *VAR_10 = *VAR_11;
  *VAR_12 = FUNC_3(-VAR_4 * (VAR_18 * VAR_14 - 1) +
    VAR_15 + (VAR_8 ? 1 : 0),
    VAR_16);
  *VAR_13 = FUNC_3(VAR_14 * VAR_4, VAR_16);
  break;

 case 130 + 4:
  *VAR_11 = VAR_4 * (VAR_18 - 1) * VAR_16;
  if (VAR_9)
   *VAR_10 = *VAR_11 - VAR_9 * VAR_4 * VAR_16;
  else
   *VAR_10 = *VAR_11;
  *VAR_12 = FUNC_3(1 - VAR_15 * VAR_4 * 2 -
    (VAR_8 ? VAR_4 : 0),
    VAR_16);
  if (VAR_7 == VAR_1 ||
   VAR_7 == VAR_0)
   *VAR_13 = FUNC_3(VAR_14, 2 * VAR_16);
  else
   *VAR_13 = FUNC_3(VAR_14, VAR_16);
  break;

 case 129 + 4:
  *VAR_11 = (VAR_4 * (VAR_18 - 1) + VAR_17 - 1) * VAR_16;
  if (VAR_9)
   *VAR_10 = *VAR_11 - VAR_9 * VAR_16;
  else
   *VAR_10 = *VAR_11;
  *VAR_12 = FUNC_3(VAR_4 * (VAR_18 * VAR_14 - 1) -
    VAR_15 - (VAR_8 ? 1 : 0),
    VAR_16);
  *VAR_13 = FUNC_3(-VAR_14 * VAR_4, VAR_16);
  break;

 default:
  FUNC_0();
  return;
 }
}
