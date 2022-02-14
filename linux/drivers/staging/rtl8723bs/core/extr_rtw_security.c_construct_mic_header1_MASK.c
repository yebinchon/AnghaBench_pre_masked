
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
typedef int sint ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(
 u8 *VAR_1,
 sint VAR_2,
 u8 *VAR_3,
 uint VAR_4
)
{
  VAR_1[0] = (u8)((VAR_2 - 2) / 256);
  VAR_1[1] = (u8)((VAR_2 - 2) % 256);


  if (VAR_4 == VAR_0)
   VAR_1[2] = VAR_3[0];
  else
   VAR_1[2] = VAR_3[0] & 0xcf;

  VAR_1[3] = VAR_3[1] & 0xc7;
  VAR_1[4] = VAR_3[4];
  VAR_1[5] = VAR_3[5];
  VAR_1[6] = VAR_3[6];
  VAR_1[7] = VAR_3[7];
  VAR_1[8] = VAR_3[8];
  VAR_1[9] = VAR_3[9];
  VAR_1[10] = VAR_3[10];
  VAR_1[11] = VAR_3[11];
  VAR_1[12] = VAR_3[12];
  VAR_1[13] = VAR_3[13];
  VAR_1[14] = VAR_3[14];
  VAR_1[15] = VAR_3[15];
}
