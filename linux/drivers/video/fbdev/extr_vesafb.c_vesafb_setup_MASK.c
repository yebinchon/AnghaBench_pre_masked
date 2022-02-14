
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char**,char*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(char *VAR_6)
{
 char *VAR_7;

 if (!VAR_6 || !*VAR_6)
  return 0;

 while ((VAR_7 = FUNC_3(&VAR_6, ",")) != ((void*)0)) {
  if (!*VAR_7) continue;

  if (! FUNC_1(VAR_7, "inverse"))
   VAR_0=1;
  else if (! FUNC_1(VAR_7, "redraw"))
   VAR_5=0;
  else if (! FUNC_1(VAR_7, "ypan"))
   VAR_5=1;
  else if (! FUNC_1(VAR_7, "ywrap"))
   VAR_5=2;
  else if (! FUNC_1(VAR_7, "vgapal"))
   VAR_2=0;
  else if (! FUNC_1(VAR_7, "pmipal"))
   VAR_2=1;
  else if (! FUNC_2(VAR_7, "mtrr:", 5))
   VAR_1 = FUNC_0(VAR_7+5, ((void*)0), 0);
  else if (! FUNC_1(VAR_7, "nomtrr"))
   VAR_1=0;
  else if (! FUNC_2(VAR_7, "vtotal:", 7))
   VAR_4 = FUNC_0(VAR_7+7, ((void*)0), 0);
  else if (! FUNC_2(VAR_7, "vremap:", 7))
   VAR_3 = FUNC_0(VAR_7+7, ((void*)0), 0);
 }
 return 0;
}
