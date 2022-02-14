
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int height; int width; } ;
struct vc_data {TYPE_1__ vc_font; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(u8 *VAR_3, u8 *VAR_4, int VAR_5,
      struct vc_data *VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = (VAR_6->vc_font.height < 10) ? 1 : 2;
 int VAR_10 = (VAR_6->vc_font.height + 7) >> 3;
 int VAR_11 = VAR_6->vc_font.height % 8;
 u8 VAR_12, VAR_13 = ~(0xff << VAR_9), VAR_14 = 0;

 if (VAR_11)
  VAR_13 <<= (8 - VAR_11);

 if (VAR_9 > VAR_11)
  VAR_14 |= 0x01;

 for (VAR_7 = 0; VAR_7 < VAR_6->vc_font.width; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
   VAR_12 = *VAR_4;

   if (VAR_5 & VAR_2) {
    if (VAR_8 == VAR_10 - 1)
     VAR_12 |= VAR_13;

    if (VAR_14 && VAR_8 == VAR_10 - 2)
     VAR_12 |= VAR_14;
   }

   if (VAR_5 & VAR_0 && VAR_7)
    *(VAR_3 - VAR_10) |= VAR_12;

   if (VAR_5 & VAR_1)
    VAR_12 = ~VAR_12;
   VAR_4++;
   *VAR_3++ = VAR_12;
  }
 }
}
