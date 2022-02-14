
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u16 FUNC_2(u16 VAR_0)
{
 if (FUNC_0(!FUNC_1(VAR_0)))
  return 0xff;

 if (1 <= VAR_0 && VAR_0 <= 14)
  return 0;
 if (36 <= VAR_0 && VAR_0 <= 64)
  return 1;
 if (100 <= VAR_0 && VAR_0 <= 140)
  return 2;
 return 3;
}
