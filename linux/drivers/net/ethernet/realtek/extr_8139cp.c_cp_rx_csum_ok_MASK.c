
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline unsigned int FUNC_0 (u32 VAR_4)
{
 unsigned int VAR_5 = (VAR_4 >> 16) & 0x3;

 if (((VAR_5 == VAR_0) && !(VAR_4 & VAR_2)) ||
     ((VAR_5 == VAR_1) && !(VAR_4 & VAR_3)))
  return 1;
 else
  return 0;
}
