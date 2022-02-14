
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (char*,int *,int ) ;
 void* FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char**,char*) ;
 void* VAR_12 ;

__attribute__((used)) static int FUNC_6(char *VAR_13)
{
 char *VAR_14;

 FUNC_0();
 if (!VAR_13 || !*VAR_13)
  return 0;

 while ((VAR_14 = FUNC_5(&VAR_13, ",")) != ((void*)0)) {
  if (!FUNC_4(VAR_14, "forceCRTC", 9)) {
   char *VAR_15;

   VAR_15 = VAR_14 + 9;
   if (!*VAR_15 || !*(++VAR_15))
    continue;
   VAR_3 = *VAR_15 - '0';
   if (VAR_3 < 0 || VAR_3 > 1)
    VAR_3 = -1;
  } else if (!FUNC_4(VAR_14, "flatpanel", 9)) {
   VAR_2 = 1;
  } else if (!FUNC_4(VAR_14, "hwcur", 5)) {
   VAR_5 = 1;
  } else if (!FUNC_4(VAR_14, "noaccel", 6)) {
   VAR_7 = 1;
  } else if (!FUNC_4(VAR_14, "noscale", 7)) {
   VAR_9 = 1;
  } else if (!FUNC_4(VAR_14, "reverse_i2c", 11)) {
   VAR_11 = 1;
  } else if (!FUNC_4(VAR_14, "paneltweak:", 11)) {
   VAR_10 = FUNC_3(VAR_14+11, ((void*)0), 0);
  } else if (!FUNC_4(VAR_14, "vram:", 5)) {
   VAR_12 = FUNC_3(VAR_14+5, ((void*)0), 0);
  } else if (!FUNC_4(VAR_14, "backlight:", 10)) {
   VAR_0 = FUNC_3(VAR_14+10, ((void*)0), 0);
  } else if (!FUNC_4(VAR_14, "nomtrr", 6)) {
   VAR_8 = 1;
  } else if (!FUNC_4(VAR_14, "fpdither:", 9)) {
   VAR_4 = FUNC_2(VAR_14+9, ((void*)0), 0);
  } else if (!FUNC_4(VAR_14, "bpp:", 4)) {
   VAR_1 = FUNC_3(VAR_14+4, ((void*)0), 0);
  } else
   VAR_6 = VAR_14;
 }
 FUNC_1();
 return 0;
}
