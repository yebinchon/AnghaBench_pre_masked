
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;



__attribute__((used)) static inline void FUNC_0(u32 VAR_0[], unsigned int VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, u32 VAR_4)
{
 u32 VAR_5 = (VAR_0[VAR_1] ^ (VAR_0[VAR_2] >> VAR_3)) & VAR_4;

 VAR_0[VAR_1] ^= VAR_5;
 VAR_0[VAR_2] ^= VAR_5 << VAR_3;
}
