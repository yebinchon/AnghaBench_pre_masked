
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static inline void FUNC_0(u32 *VAR_0, u8 VAR_1, u8 VAR_2,
          u8 VAR_3, u8 VAR_4, u32 VAR_5,
          u16 VAR_6)
{
 *VAR_0 = (((VAR_1 & 1) << 31) |
  ((VAR_2 & 0x7) << 28) |
  ((VAR_3 & 1) << 27) |
  ((VAR_4 & 1) << 26) |
  ((VAR_5 & 0x1FFFF) << 9) |
  (VAR_6 & 0x1FF));
}
