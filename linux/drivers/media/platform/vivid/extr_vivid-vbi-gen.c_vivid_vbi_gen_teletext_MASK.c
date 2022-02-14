
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int* VAR_0 ;
 int FUNC_1 (unsigned int*,char*,int) ;
 int FUNC_2 (unsigned int*,int,int) ;

__attribute__((used)) static void FUNC_3(u8 *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4 = 2;
 unsigned VAR_5;

 VAR_1[0] = VAR_0[1 + ((VAR_2 & 1) << 3)];
 VAR_1[1] = VAR_0[VAR_2 >> 1];
 FUNC_2(VAR_1 + 2, 0x20, 40);
 if (VAR_2 == 0) {

  VAR_1[2] = VAR_0[VAR_3 % 10];
  VAR_1[3] = VAR_0[VAR_3 / 10];
  VAR_1[4] = VAR_0[0];
  VAR_1[5] = VAR_0[0];
  VAR_1[6] = VAR_0[0];
  VAR_1[7] = VAR_0[0];
  VAR_1[8] = VAR_0[0];
  VAR_1[9] = VAR_0[1];
  VAR_4 = 10;
 }
 VAR_1 += VAR_4;
 FUNC_1(VAR_1, "Page: 100 Row: 10", 17);
 VAR_1[7] = '0' + VAR_3 / 10;
 VAR_1[8] = '0' + VAR_3 % 10;
 VAR_1[15] = '0' + VAR_2 / 10;
 VAR_1[16] = '0' + VAR_2 % 10;
 for (VAR_5 = 0; VAR_5 < 42 - VAR_4; VAR_5++)
  VAR_1[VAR_5] = FUNC_0(VAR_1[VAR_5]);
}
