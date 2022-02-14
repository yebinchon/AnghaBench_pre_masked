
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static inline void FUNC_0(u32 *VAR_0, u8 VAR_1, u8 VAR_2,
          unsigned int VAR_3,
          unsigned char VAR_4)
{
 const u8 VAR_5 = 0;

 *VAR_0 = ((VAR_1 & 1) << 31) |
        ((VAR_5 & 0x7) << 28) |
        ((VAR_2 & 1) << 27) |
        (1 << 26) |
        ((VAR_3 & 0x1FFFF) << 9) |
        (1 << 8) |
        (VAR_4 & 0xFF);
}
