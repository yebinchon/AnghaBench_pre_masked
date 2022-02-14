
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(const u8 *VAR_0)
{
 return (u32)VAR_0[0] | (u32)VAR_0[1] << 8 | (u32)VAR_0[2] << 16;
}
