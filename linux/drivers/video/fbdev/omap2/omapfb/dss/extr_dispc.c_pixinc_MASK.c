
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s32 ;


 int FUNC_0 () ;

__attribute__((used)) static s32 FUNC_1(int VAR_0, u8 VAR_1)
{
 if (VAR_0 == 1)
  return 1;
 else if (VAR_0 > 1)
  return 1 + (VAR_0 - 1) * VAR_1;
 else if (VAR_0 < 0)
  return 1 - (-VAR_0 + 1) * VAR_1;
 else
  FUNC_0();
 return 0;
}
