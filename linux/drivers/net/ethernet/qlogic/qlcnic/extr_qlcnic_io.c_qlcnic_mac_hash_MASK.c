
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;



__attribute__((used)) static inline u8 FUNC_0(u64 VAR_0, u16 VAR_1)
{
 return (u8)((VAR_0 & 0xff) ^ ((VAR_0 >> 40) & 0xff) ^ (VAR_1 & 0xff));
}
