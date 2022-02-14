
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u64 VAR_0)
{
 u64 VAR_1, VAR_2;
 u32 VAR_3 = 0;
 u8 VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  VAR_1 = VAR_0 & (u64)0x01;
  VAR_0 >>= 1;

  for (VAR_5 = 0; VAR_5 < 7; VAR_5++) {
   VAR_2 = VAR_0 & (u64)0x01;
   VAR_1 ^= VAR_2;
   VAR_0 >>= 1;
  }

  VAR_3 |= (VAR_1 << (5 - VAR_4));
 }

 return VAR_3;
}
