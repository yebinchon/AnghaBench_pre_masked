
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



void FUNC_0(u8 *VAR_0, u32 VAR_1, u8 *VAR_2, u32 VAR_3, u32 VAR_4,
    u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 u8 VAR_8 = (u8) (0xfff << VAR_5), VAR_9;
 int VAR_10, VAR_11;

 for (VAR_10 = VAR_4; VAR_10--; ) {
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   VAR_9 = VAR_0[VAR_11];
   VAR_9 &= VAR_8;
   VAR_9 |= *VAR_2 >> VAR_6;
   VAR_0[VAR_11] = VAR_9;
   VAR_9 = *VAR_2 << VAR_5;
   VAR_0[VAR_11+1] = VAR_9;
   VAR_2++;
  }
  VAR_9 = VAR_0[VAR_3];
  VAR_9 &= VAR_8;
  VAR_9 |= *VAR_2 >> VAR_6;
  VAR_0[VAR_3] = VAR_9;
  if (VAR_5 < VAR_7) {
   VAR_9 = *VAR_2 << VAR_5;
   VAR_0[VAR_3+1] = VAR_9;
  }
  VAR_2++;
  VAR_0 += VAR_1;
 }
}
