
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int *,int ) ;
 int VAR_6 ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_7)
{
 char *VAR_8;

 FUNC_0();
 if (!VAR_7 || !*VAR_7)
  return 0;

 while ((VAR_8 = FUNC_4(&VAR_7, ",")) != ((void*)0)) {
  if (!FUNC_3(VAR_8, "forceCRTC", 9)) {
   char *VAR_9;

   VAR_9 = VAR_8 + 9;
   if (!*VAR_9 || !*(++VAR_9)) continue;
   VAR_2 = *VAR_9 - '0';
   if (VAR_2 < 0 || VAR_2 > 1)
    VAR_2 = -1;
  } else if (!FUNC_3(VAR_8, "flatpanel", 9)) {
   VAR_1 = 1;
  } else if (!FUNC_3(VAR_8, "backlight:", 10)) {
   VAR_0 = FUNC_2(VAR_8+10, ((void*)0), 0);
  } else if (!FUNC_3(VAR_8, "nomtrr", 6)) {
   VAR_5 = 1;
  } else if (!FUNC_3(VAR_8, "strictmode", 10)) {
   VAR_6 = 1;
  } else if (!FUNC_3(VAR_8, "noaccel", 7)) {
   VAR_4 = 1;
  } else
   VAR_3 = VAR_8;
 }
 FUNC_1();
 return 0;
}
