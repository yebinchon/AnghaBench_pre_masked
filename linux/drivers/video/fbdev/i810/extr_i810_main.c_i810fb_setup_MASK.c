
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (char*,char**,int ) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char**,char*) ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;

__attribute__((used)) static int FUNC_3(char *VAR_17)
{
 char *VAR_18, *VAR_19 = ((void*)0);

 if (!VAR_17 || !*VAR_17)
  return 0;

 while ((VAR_18 = FUNC_2(&VAR_17, ",")) != ((void*)0)) {
  if (!FUNC_1(VAR_18, "mtrr", 4))
   VAR_8 = 1;
  else if (!FUNC_1(VAR_18, "accel", 5))
   VAR_0 = 1;
  else if (!FUNC_1(VAR_18, "extvga", 6))
   VAR_4 = 1;
  else if (!FUNC_1(VAR_18, "sync", 4))
   VAR_9 = 1;
  else if (!FUNC_1(VAR_18, "vram:", 5))
   VAR_11 = (FUNC_0(VAR_18+5, ((void*)0), 0));
  else if (!FUNC_1(VAR_18, "voffset:", 8))
   VAR_10 = (FUNC_0(VAR_18+8, ((void*)0), 0));
  else if (!FUNC_1(VAR_18, "xres:", 5))
   VAR_15 = FUNC_0(VAR_18+5, ((void*)0), 0);
  else if (!FUNC_1(VAR_18, "yres:", 5))
   VAR_16 = FUNC_0(VAR_18+5, ((void*)0), 0);
  else if (!FUNC_1(VAR_18, "vyres:", 6))
   VAR_14 = FUNC_0(VAR_18+6, ((void*)0), 0);
  else if (!FUNC_1(VAR_18, "bpp:", 4))
   VAR_1 = FUNC_0(VAR_18+4, ((void*)0), 0);
  else if (!FUNC_1(VAR_18, "hsync1:", 7)) {
   VAR_5 = FUNC_0(VAR_18+7, &VAR_19, 0);
   if (FUNC_1(VAR_19, "H", 1))
    VAR_5 *= 1000;
  } else if (!FUNC_1(VAR_18, "hsync2:", 7)) {
   VAR_6 = FUNC_0(VAR_18+7, &VAR_19, 0);
   if (FUNC_1(VAR_19, "H", 1))
    VAR_6 *= 1000;
  } else if (!FUNC_1(VAR_18, "vsync1:", 7))
   VAR_12 = FUNC_0(VAR_18+7, ((void*)0), 0);
  else if (!FUNC_1(VAR_18, "vsync2:", 7))
   VAR_13 = FUNC_0(VAR_18+7, ((void*)0), 0);
  else if (!FUNC_1(VAR_18, "dcolor", 6))
   VAR_2 = 1;
  else if (!FUNC_1(VAR_18, "ddc3", 4))
   VAR_3 = 1;
  else
   VAR_7 = VAR_18;
 }
 return 0;
}
