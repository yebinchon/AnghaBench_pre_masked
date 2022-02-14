
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int*) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_0, int VAR_1)
{
 u8 VAR_2;
 u8 VAR_3[4];
 u8 VAR_4[12] = {
  0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80,
  0x1b, 0x36, 0x36, 0x36
 };

 VAR_3[0] = FUNC_0(VAR_0[13]);
 VAR_3[1] = FUNC_0(VAR_0[14]);
 VAR_3[2] = FUNC_0(VAR_0[15]);
 VAR_3[3] = FUNC_0(VAR_0[12]);

 VAR_2 = VAR_4[VAR_1];

 FUNC_1(&VAR_0[0], VAR_3, &VAR_0[0]);
 VAR_0[0] = VAR_0[0] ^ VAR_2;

 FUNC_1(&VAR_0[4], &VAR_0[0], &VAR_0[4]);
 FUNC_1(&VAR_0[8], &VAR_0[4], &VAR_0[8]);
 FUNC_1(&VAR_0[12], &VAR_0[8], &VAR_0[12]);
}
