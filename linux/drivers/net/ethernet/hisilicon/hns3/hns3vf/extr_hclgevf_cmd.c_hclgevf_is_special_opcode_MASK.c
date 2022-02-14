
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static bool FUNC_1(u16 VAR_0)
{
 static const u16 VAR_1[] = {0x30, 0x31, 0x32};
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  if (VAR_1[VAR_2] == VAR_0)
   return 1;
 }

 return 0;
}
