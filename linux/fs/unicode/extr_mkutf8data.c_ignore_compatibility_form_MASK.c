
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_0)
{
 int VAR_1;
 char *VAR_2[] = {"font", "noBreak", "initial", "medial",
     "final", "isolated", "circle", "super",
     "sub", "vertical", "wide", "narrow",
     "small", "square", "fraction", "compat"};

 for (VAR_1 = 0 ; VAR_1 < FUNC_0(VAR_2); VAR_1++)
  if (FUNC_1(VAR_0, VAR_2[VAR_1]) == 0)
   return 1;
 return 0;
}
