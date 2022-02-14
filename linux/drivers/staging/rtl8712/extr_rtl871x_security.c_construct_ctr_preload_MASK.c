
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int sint ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0,
      sint VAR_1, sint VAR_2,
      u8 *VAR_3, u8 *VAR_4, sint VAR_5)
{
 sint VAR_6;

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++)
  VAR_0[VAR_6] = 0x00;
 VAR_6 = 0;
 VAR_0[0] = 0x01;
 if (VAR_2 && VAR_1)
  VAR_0[1] = VAR_3[30] & 0x0f;
 if (VAR_2 && !VAR_1)
  VAR_0[1] = VAR_3[24] & 0x0f;
 for (VAR_6 = 2; VAR_6 < 8; VAR_6++)
  VAR_0[VAR_6] = VAR_3[VAR_6 + 8];
 for (VAR_6 = 8; VAR_6 < 14; VAR_6++)
  VAR_0[VAR_6] = VAR_4[13 - VAR_6];
 VAR_0[14] = (unsigned char) (VAR_5 / 256);
 VAR_0[15] = (unsigned char) (VAR_5 % 256);
}
