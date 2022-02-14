
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, u8 *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  VAR_0[VAR_4] = 0x00;

 VAR_0[0] = VAR_1[16];
 VAR_0[1] = VAR_1[17];
 VAR_0[2] = VAR_1[18];
 VAR_0[3] = VAR_1[19];
 VAR_0[4] = VAR_1[20];
 VAR_0[5] = VAR_1[21];

 VAR_0[6] = 0x00;
 VAR_0[7] = 0x00;

 if (!VAR_3 && VAR_2) {
  for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
   VAR_0[8+VAR_4] = VAR_1[24+VAR_4];
 }

 if (VAR_3 && !VAR_2) {
  VAR_0[8] = VAR_1[24] & 0x0f;
  VAR_0[9] = VAR_1[25] & 0x00;
 }

 if (VAR_3 && VAR_2) {
  for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
   VAR_0[8+VAR_4] = VAR_1[24+VAR_4];

  VAR_0[14] = VAR_1[30] & 0x0f;
  VAR_0[15] = VAR_1[31] & 0x00;
 }
}
