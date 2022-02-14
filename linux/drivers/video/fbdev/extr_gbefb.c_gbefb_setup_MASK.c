
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,char**) ;
 char* VAR_10 ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char**,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_11)
{
 char *VAR_12;

 if (!VAR_11 || !*VAR_11)
  return 0;

 while ((VAR_12 = FUNC_2(&VAR_11, ",")) != ((void*)0)) {
  if (!FUNC_1(VAR_12, "monitor:", 8)) {
   if (!FUNC_1(VAR_12 + 8, "crt", 3)) {
    VAR_8 = 0;
    VAR_5 = &VAR_6;
    VAR_2 = &VAR_3;
   } else if (!FUNC_1(VAR_12 + 8, "1600sw", 6) ||
       !FUNC_1(VAR_12 + 8, "lcd", 3)) {
    VAR_8 = 1;
    VAR_5 = &VAR_7;
    VAR_2 = &VAR_4;
   }
  } else if (!FUNC_1(VAR_12, "mem:", 4)) {
   VAR_9 = FUNC_0(VAR_12 + 4, &VAR_12);
   if (VAR_9 > VAR_0 * 1024 * 1024)
    VAR_9 = VAR_0 * 1024 * 1024;
   if (VAR_9 < VAR_1)
    VAR_9 = VAR_1;
  } else
   VAR_10 = VAR_12;
 }
 return 0;
}
