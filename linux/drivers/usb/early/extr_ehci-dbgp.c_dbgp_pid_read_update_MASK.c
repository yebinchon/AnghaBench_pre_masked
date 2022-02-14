
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(u32 VAR_1, u32 VAR_2)
{
 return (VAR_1 & 0xffff0000) | (VAR_0 << 8) | (VAR_2 & 0xff);
}
