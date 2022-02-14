
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
typedef int s32 ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;


 int FUNC_0 () ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,unsigned int) ;

__attribute__((used)) static void FUNC_4(u16 VAR_2, u16 VAR_3,
  enum omap_color_mode VAR_4, bool VAR_5,
  unsigned int VAR_6, unsigned *VAR_7, unsigned *VAR_8,
  s32 *VAR_9, s32 *VAR_10, int VAR_11, int VAR_12)
{
 u8 VAR_13;

 switch (VAR_4) {
 case 131:
 case 130:
 case 129:
 case 128:
  FUNC_0();
  return;
 default:
  VAR_13 = FUNC_2(VAR_4) / 8;
  break;
 }

 FUNC_1("scrw %d, width %d\n", VAR_2, VAR_3);





 *VAR_8 = 0;
 if (VAR_6)
  *VAR_7 = *VAR_8 + VAR_6 * VAR_2 * VAR_13;
 else
  *VAR_7 = *VAR_8;
 *VAR_9 = FUNC_3(1 + (VAR_12 * VAR_2 - VAR_3 * VAR_11) +
   (VAR_5 ? VAR_2 : 0), VAR_13);
 if (VAR_4 == VAR_1 ||
  VAR_4 == VAR_0)
  *VAR_10 = FUNC_3(VAR_11, 2 * VAR_13);
 else
  *VAR_10 = FUNC_3(VAR_11, VAR_13);
}
