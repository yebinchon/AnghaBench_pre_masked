
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static bool FUNC_1(u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_1 == VAR_0[VAR_2])
   return 1;
 return 0;
}
