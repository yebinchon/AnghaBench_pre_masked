
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
typedef int u8 ;



__attribute__((used)) static inline u8 FUNC_0(u8 VAR_0)
{
 return (((VAR_0) & 0x01) << 3) | (((VAR_0) & 0x02) << 1)
     | (((VAR_0) & 0x04) >> 1) | (((VAR_0) & 0x08) >> 3)
     | (((VAR_0) & 0x10) << 3) | (((VAR_0) & 0x20) << 1)
     | (((VAR_0) & 0x40) >> 1) | (((VAR_0) & 0x80) >> 3);
}
