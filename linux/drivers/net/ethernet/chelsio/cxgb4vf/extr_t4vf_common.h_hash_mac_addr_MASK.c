
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static inline int FUNC_0(const u8 *VAR_0)
{
 u32 VAR_1 = ((u32)VAR_0[0] << 16) | ((u32)VAR_0[1] << 8) | VAR_0[2];
 u32 VAR_2 = ((u32)VAR_0[3] << 16) | ((u32)VAR_0[4] << 8) | VAR_0[5];

 VAR_1 ^= VAR_2;
 VAR_1 ^= (VAR_1 >> 12);
 VAR_1 ^= (VAR_1 >> 6);
 return VAR_1 & 0x3f;
}
