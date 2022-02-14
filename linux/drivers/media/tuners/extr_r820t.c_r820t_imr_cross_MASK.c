
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r820t_sect_type {int gain_x; int phase_y; int value; } ;
struct r820t_priv {int dummy; } ;


 int FUNC_0 (struct r820t_priv*) ;
 int FUNC_1 (struct r820t_priv*,int) ;
 int FUNC_2 (struct r820t_priv*,int,int) ;

__attribute__((used)) static int FUNC_3(struct r820t_priv *VAR_0,
      struct r820t_sect_type VAR_1[3],
      u8 *VAR_2)
{
 struct r820t_sect_type VAR_3[5];
 struct r820t_sect_type VAR_4;
 int VAR_5, VAR_6;
 u8 VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_0, 8) & 0xc0;
 VAR_8 = FUNC_1(VAR_0, 9) & 0xc0;

 VAR_4.gain_x = 0;
 VAR_4.phase_y = 0;
 VAR_4.value = 255;

 for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
  switch (VAR_5) {
  case 0:
   VAR_3[VAR_5].gain_x = VAR_7;
   VAR_3[VAR_5].phase_y = VAR_8;
   break;
  case 1:
   VAR_3[VAR_5].gain_x = VAR_7;
   VAR_3[VAR_5].phase_y = VAR_8 + 1;
   break;
  case 2:
   VAR_3[VAR_5].gain_x = VAR_7;
   VAR_3[VAR_5].phase_y = (VAR_8 | 0x20) + 1;
   break;
  case 3:
   VAR_3[VAR_5].gain_x = VAR_7 + 1;
   VAR_3[VAR_5].phase_y = VAR_8;
   break;
  default:
   VAR_3[VAR_5].gain_x = (VAR_7 | 0x20) + 1;
   VAR_3[VAR_5].phase_y = VAR_8;
  }

  VAR_6 = FUNC_2(VAR_0, 0x08, VAR_3[VAR_5].gain_x);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_2(VAR_0, 0x09, VAR_3[VAR_5].phase_y);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_0(VAR_0);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_3[VAR_5].value = VAR_6;

  if (VAR_3[VAR_5].value < VAR_4.value)
   VAR_4 = VAR_3[VAR_5];
 }

 if ((VAR_4.phase_y & 0x1f) == 1) {
  *VAR_2 = 0;

  VAR_1[0] = VAR_3[0];
  VAR_1[1] = VAR_3[1];
  VAR_1[2] = VAR_3[2];
 } else {
  *VAR_2 = 1;

  VAR_1[0] = VAR_3[0];
  VAR_1[1] = VAR_3[3];
  VAR_1[2] = VAR_3[4];
 }
 return 0;
}
