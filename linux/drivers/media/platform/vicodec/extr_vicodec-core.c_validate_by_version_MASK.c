
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static bool FUNC_0(unsigned int VAR_4, unsigned int VAR_5)
{
 if (!VAR_5 || VAR_5 > VAR_3)
  return 0;

 if (VAR_5 >= 2) {
  unsigned int VAR_6 = 1 +
   ((VAR_4 & VAR_0) >>
    VAR_1);
  unsigned int VAR_7 = VAR_4 & VAR_2;

  if (VAR_6 == 0 || VAR_6 > 4 || !VAR_7)
   return 0;
 }
 return 1;
}
