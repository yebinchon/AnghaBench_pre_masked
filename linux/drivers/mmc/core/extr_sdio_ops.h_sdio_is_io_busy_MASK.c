
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline bool FUNC_0(u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;

 VAR_6 = (VAR_5 >> 9) & 0x1FFFF;

 return (VAR_4 == VAR_3 ||
  (VAR_4 == VAR_2 &&
  !(VAR_6 == VAR_0 || VAR_6 == VAR_1)));
}
