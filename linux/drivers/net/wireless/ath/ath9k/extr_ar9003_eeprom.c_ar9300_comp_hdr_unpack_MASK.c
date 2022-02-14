
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, int *VAR_1, int *VAR_2,
       int *VAR_3, int *VAR_4, int *VAR_5)
{
 unsigned long VAR_6[4];

 VAR_6[0] = VAR_0[0];
 VAR_6[1] = VAR_0[1];
 VAR_6[2] = VAR_0[2];
 VAR_6[3] = VAR_0[3];
 *VAR_1 = ((VAR_6[0] >> 5) & 0x0007);
 *VAR_2 = (VAR_6[0] & 0x001f) | ((VAR_6[1] >> 2) & 0x0020);
 *VAR_3 = ((VAR_6[1] << 4) & 0x07f0) | ((VAR_6[2] >> 4) & 0x000f);
 *VAR_4 = (VAR_6[2] & 0x000f);
 *VAR_5 = (VAR_6[3] & 0x00ff);
}
