
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u64 *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 *VAR_0 &= ~((0xff << 0) | (0xff << 8) | (0x3 << 24));
 *VAR_0 |= (VAR_1 << 0) | (VAR_2 << 8) | (VAR_3 << 24);
}
