
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int sint ;


 int FUNC_0 (int*,int*,int*) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_0, u8 *VAR_1)
{
 sint VAR_2;
 u8 VAR_3[4];
 u8 VAR_4[4];
 u8 VAR_5[4];
 u8 VAR_6[4];
 u8 VAR_7[4];
 u8 VAR_8[4];
 u8 VAR_9[4];
 u8 VAR_10[4];

 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  if ((VAR_0[VAR_2] & 0x80) == 0x80)
   VAR_3[VAR_2] = 0x1b;
  else
   VAR_3[VAR_2] = 0x00;
 }
 VAR_6[0] = VAR_0[2];
 VAR_6[1] = VAR_0[3];
 VAR_6[2] = VAR_0[0];
 VAR_6[3] = VAR_0[1];
 VAR_5[0] = VAR_0[3];
 VAR_5[1] = VAR_0[0];
 VAR_5[2] = VAR_0[1];
 VAR_5[3] = VAR_0[2];
 VAR_7[0] = VAR_0[0] & 0x7f;
 VAR_7[1] = VAR_0[1] & 0x7f;
 VAR_7[2] = VAR_0[2] & 0x7f;
 VAR_7[3] = VAR_0[3] & 0x7f;
 for (VAR_2 = 3; VAR_2 > 0; VAR_2--) {
  VAR_7[VAR_2] = VAR_7[VAR_2] << 1;
  if ((VAR_7[VAR_2 - 1] & 0x80) == 0x80)
   VAR_7[VAR_2] = (VAR_7[VAR_2] | 0x01);
 }
 VAR_7[0] = VAR_7[0] << 1;
 VAR_7[0] = VAR_7[0] & 0xfe;
 FUNC_0(VAR_3, VAR_7, VAR_4);
 FUNC_0(VAR_0, VAR_4, VAR_8);
 VAR_9[0] = VAR_8[0];
 VAR_8[0] = VAR_8[1];
 VAR_8[1] = VAR_8[2];
 VAR_8[2] = VAR_8[3];
 VAR_8[3] = VAR_9[0];
 FUNC_0(VAR_4, VAR_8, VAR_9);
 FUNC_0(VAR_6, VAR_5, VAR_10);
 FUNC_0(VAR_9, VAR_10, VAR_1);
}
