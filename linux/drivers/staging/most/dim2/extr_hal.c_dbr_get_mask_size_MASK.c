
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u16 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
  if (VAR_1 <= (VAR_0 << VAR_2))
   return 1 << VAR_2;
 return 0;
}
