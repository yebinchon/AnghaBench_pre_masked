
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(u8 VAR_0, u8 VAR_1)
{
 u8 VAR_2 = VAR_1 & 0xf;

 if ((VAR_1 & FUNC_0(4)) && VAR_2 >= VAR_0)
  return 1;
 else if (VAR_2 == VAR_0)
  return 1;

 return 0;
}
