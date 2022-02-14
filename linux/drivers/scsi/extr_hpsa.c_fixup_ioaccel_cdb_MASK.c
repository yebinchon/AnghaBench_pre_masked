
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int FUNC_1 (int*) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_3, int *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;
 u32 VAR_7;


 switch (VAR_3[0]) {
 case 128:
 case 129:
  VAR_5 = 1;

 case 130:
 case 131:
  if (*VAR_4 == 6) {
   VAR_6 = (((VAR_3[1] & 0x1F) << 16) |
    (VAR_3[2] << 8) |
    VAR_3[3]);
   VAR_7 = VAR_3[4];
   if (VAR_7 == 0)
    VAR_7 = 256;
  } else {
   FUNC_0(*VAR_4 != 12);
   VAR_6 = FUNC_1(&VAR_3[2]);
   VAR_7 = FUNC_1(&VAR_3[6]);
  }
  if (VAR_7 > 0xffff)
   return VAR_0;

  VAR_3[0] = VAR_5 ? VAR_2 : VAR_1;
  VAR_3[1] = 0;
  VAR_3[2] = (u8) (VAR_6 >> 24);
  VAR_3[3] = (u8) (VAR_6 >> 16);
  VAR_3[4] = (u8) (VAR_6 >> 8);
  VAR_3[5] = (u8) (VAR_6);
  VAR_3[6] = 0;
  VAR_3[7] = (u8) (VAR_7 >> 8);
  VAR_3[8] = (u8) (VAR_7);
  VAR_3[9] = 0;
  *VAR_4 = 10;
  break;
 }
 return 0;
}
