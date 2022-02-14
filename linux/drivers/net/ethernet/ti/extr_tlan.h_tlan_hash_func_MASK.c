
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(const u8 *VAR_0)
{
 u8 VAR_1;

 VAR_1 = (VAR_0[0]^VAR_0[3]);
 VAR_1 ^= ((VAR_0[0]^VAR_0[3])>>6);
 VAR_1 ^= ((VAR_0[1]^VAR_0[4])<<2);
 VAR_1 ^= ((VAR_0[1]^VAR_0[4])>>4);
 VAR_1 ^= ((VAR_0[2]^VAR_0[5])<<4);
 VAR_1 ^= ((VAR_0[2]^VAR_0[5])>>2);

 return VAR_1 & 077;
}
