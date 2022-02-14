
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r820t_sect_type {int phase_y; int gain_x; int value; } ;
struct r820t_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct r820t_priv*) ;
 int FUNC_1 (struct r820t_priv*,int,int) ;

__attribute__((used)) static int FUNC_2(struct r820t_priv *VAR_1,
        struct r820t_sect_type VAR_2[3], u8 VAR_3)
{
 int VAR_4;
 struct r820t_sect_type VAR_5;
 VAR_5.phase_y = VAR_2[0].phase_y;
 VAR_5.gain_x = VAR_2[0].gain_x;

 while (((VAR_5.gain_x & 0x1f) < VAR_0) &&
       ((VAR_5.phase_y & 0x1f) < VAR_0)) {
  if (VAR_3 == 0x08)
   VAR_5.gain_x++;
  else
   VAR_5.phase_y++;

  VAR_4 = FUNC_1(VAR_1, 0x08, VAR_5.gain_x);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_4 = FUNC_1(VAR_1, 0x09, VAR_5.phase_y);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 < 0)
   return VAR_4;
  VAR_5.value = VAR_4;

  if (VAR_5.value <= VAR_2[0].value) {
   VAR_2[0].gain_x = VAR_5.gain_x;
   VAR_2[0].phase_y = VAR_5.phase_y;
   VAR_2[0].value = VAR_5.value;
  } else {
   return 0;
  }

 }

 return 0;
}
