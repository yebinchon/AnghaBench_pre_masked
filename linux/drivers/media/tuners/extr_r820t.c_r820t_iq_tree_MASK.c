
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r820t_sect_type {int value; int gain_x; int phase_y; } ;
struct r820t_priv {int dummy; } ;


 int FUNC_0 (struct r820t_priv*) ;
 int FUNC_1 (struct r820t_priv*,int,int) ;

__attribute__((used)) static int FUNC_2(struct r820t_priv *VAR_0,
    struct r820t_sect_type VAR_1[3],
    u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5, VAR_6;
 u8 VAR_7, VAR_8;







 if (VAR_4 == 0x08)
  VAR_8 = 0x09;
 else
  VAR_8 = 0x08;

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_1(VAR_0, VAR_8, VAR_3);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_0);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_1[VAR_6].value = VAR_5;

  if (VAR_4 == 0x08) {
   VAR_1[VAR_6].gain_x = VAR_2;
   VAR_1[VAR_6].phase_y = VAR_3;
  } else {
   VAR_1[VAR_6].phase_y = VAR_2;
   VAR_1[VAR_6].gain_x = VAR_3;
  }

  if (VAR_6 == 0) {
   VAR_3++;
  } else if (VAR_6 == 1) {

   if ((VAR_3 & 0x1f) < 0x02) {
    VAR_7 = 2 - (VAR_3 & 0x1f);


    if (VAR_3 & 0x20) {
     VAR_3 &= 0xc0;
     VAR_3 |= VAR_7;
    } else {
     VAR_3 |= 0x20 | VAR_7;
    }
   } else {
    VAR_3 -= 2;
   }
  }
 }

 return 0;
}
