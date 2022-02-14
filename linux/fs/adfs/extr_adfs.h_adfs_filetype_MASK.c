
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static inline u16 FUNC_0(u32 VAR_1)
{
 return (VAR_1 & 0xfff00000) == 0xfff00000 ?
        (VAR_1 >> 8) & 0xfff : VAR_0;
}
