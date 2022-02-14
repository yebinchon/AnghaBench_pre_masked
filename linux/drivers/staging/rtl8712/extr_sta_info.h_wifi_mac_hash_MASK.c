
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(u8 *VAR_1)
{
 u32 VAR_2;

 VAR_2 = VAR_1[0];
 VAR_2 = (VAR_2 << 2) ^ VAR_1[1];
 VAR_2 = (VAR_2 << 2) ^ VAR_1[2];
 VAR_2 = (VAR_2 << 2) ^ VAR_1[3];
 VAR_2 = (VAR_2 << 2) ^ VAR_1[4];
 VAR_2 = (VAR_2 << 2) ^ VAR_1[5];
 VAR_2 ^= VAR_2 >> 8;
 VAR_2 = VAR_2 & (VAR_0 - 1);
 return VAR_2;
}
