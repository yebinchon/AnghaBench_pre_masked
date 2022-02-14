
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 (*VAR_0)[256], u8 VAR_1, u8 VAR_2)
{
 VAR_0[VAR_1][VAR_2] = (VAR_0[VAR_1 - 1][VAR_2] >> 8) ^ VAR_0[0][VAR_0[VAR_1 - 1][VAR_2] & 0xff];
}
