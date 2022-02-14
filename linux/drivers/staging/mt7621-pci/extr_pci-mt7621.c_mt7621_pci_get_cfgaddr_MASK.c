
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;



__attribute__((used)) static inline u32 FUNC_0(unsigned int VAR_0, unsigned int VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{
 return (((VAR_3 & 0xF00) >> 8) << 24) | (VAR_0 << 16) | (VAR_1 << 11) |
  (VAR_2 << 8) | (VAR_3 & 0xfc) | 0x80000000;
}
