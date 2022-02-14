
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
typedef int sint ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(
 u8 *VAR_1,
 sint VAR_2,
 sint VAR_3,
 u8 *VAR_4,
 u8 *VAR_5,
 sint VAR_6,
 uint VAR_7
)
{
 sint VAR_8 = 0;

 for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
  VAR_1[VAR_8] = 0x00;
 VAR_8 = 0;

 VAR_1[0] = 0x01;
 if (VAR_3 && VAR_2)
  VAR_1[1] = VAR_4[30] & 0x0f;
 if (VAR_3 && !VAR_2)
  VAR_1[1] = VAR_4[24] & 0x0f;


 if (VAR_7 == VAR_0)
  VAR_1[1] |= FUNC_0(4);

 for (VAR_8 = 2; VAR_8 < 8; VAR_8++)
  VAR_1[VAR_8] = VAR_4[VAR_8 + 8];




 for (VAR_8 = 8; VAR_8 < 14; VAR_8++)
  VAR_1[VAR_8] = VAR_5[13 - VAR_8];

 VAR_1[14] = (unsigned char) (VAR_6 / 256);
 VAR_1[15] = (unsigned char) (VAR_6 % 256);
}
