
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 char* VAR_3 ;
 void* FUNC_1 (char*,int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char**,char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(char *VAR_6)
{
 char *VAR_7;

 if (!VAR_6 || !*VAR_6)
  return 0;

 while ((VAR_7 = FUNC_4(&VAR_6, ",")) != ((void*)0)) {
  if (!*VAR_7) continue;

  FUNC_0("option %s\n", VAR_7);

  if (!FUNC_2(VAR_7, "vganopass"))
   VAR_5 = 0;
  else if (!FUNC_2(VAR_7, "vgapass"))
   VAR_5 = 1;
  else if (!FUNC_2(VAR_7, "clipping"))
          VAR_0 = 1;
  else if (!FUNC_2(VAR_7, "noclipping"))
          VAR_0 = 0;
  else if (!FUNC_2(VAR_7, "fastpci"))
          VAR_4 = 0;
  else if (!FUNC_2(VAR_7, "slowpci"))
          VAR_4 = 1;
  else if (!FUNC_3(VAR_7, "mem:",4))
   VAR_2 = FUNC_1 (VAR_7+4, ((void*)0), 0);
  else if (!FUNC_3(VAR_7, "gfxclk:",7))
   VAR_1 = FUNC_1 (VAR_7+7, ((void*)0), 0);
  else
   VAR_3 = VAR_7;
 }
 return 0;
}
