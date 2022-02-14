
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t FUNC_0 (char const*) ;
 char FUNC_1 (char const) ;

__attribute__((used)) static void FUNC_2(char *VAR_1, const char *VAR_2)
{
 size_t VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_0(VAR_2);

 if ((VAR_3 > 0) && (VAR_2[VAR_3 - 1] == '\n'))
  VAR_3--;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_4 < VAR_3)
   VAR_1[VAR_4] = FUNC_1(VAR_2[VAR_4]);
  else
   VAR_1[VAR_4] = ' ';
 }
}
