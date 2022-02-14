
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static inline int FUNC_1(const wchar_t *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (FUNC_0(VAR_1[VAR_3]))
   return -VAR_0;

 if (VAR_1[VAR_3 - 1] == ' ')
  return -VAR_0;

 return 0;
}
