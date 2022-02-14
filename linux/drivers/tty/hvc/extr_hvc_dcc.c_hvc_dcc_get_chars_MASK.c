
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 char FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
  if (FUNC_1() & VAR_0)
   VAR_2[VAR_4] = FUNC_0();
  else
   break;

 return VAR_4;
}
