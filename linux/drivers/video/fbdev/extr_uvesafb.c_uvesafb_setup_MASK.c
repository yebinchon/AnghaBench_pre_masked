
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,...) ;
 void* FUNC_1 (char*,int *,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char**,char*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_5(char *VAR_13)
{
 char *VAR_14;

 if (!VAR_13 || !*VAR_13)
  return 0;

 while ((VAR_14 = FUNC_4(&VAR_13, ",")) != ((void*)0)) {
  if (!*VAR_14) continue;

  if (!FUNC_2(VAR_14, "redraw"))
   VAR_12 = 0;
  else if (!FUNC_2(VAR_14, "ypan"))
   VAR_12 = 1;
  else if (!FUNC_2(VAR_14, "ywrap"))
   VAR_12 = 2;
  else if (!FUNC_2(VAR_14, "vgapal"))
   VAR_8 = 0;
  else if (!FUNC_2(VAR_14, "pmipal"))
   VAR_8 = 1;
  else if (!FUNC_3(VAR_14, "mtrr:", 5))
   VAR_5 = FUNC_1(VAR_14+5, ((void*)0), 0);
  else if (!FUNC_2(VAR_14, "nomtrr"))
   VAR_5 = 0;
  else if (!FUNC_2(VAR_14, "nocrtc"))
   VAR_6 = 1;
  else if (!FUNC_2(VAR_14, "noedid"))
   VAR_7 = 1;
  else if (!FUNC_2(VAR_14, "noblank"))
   VAR_0 = 0;
  else if (!FUNC_3(VAR_14, "vtotal:", 7))
   VAR_11 = FUNC_1(VAR_14 + 7, ((void*)0), 0);
  else if (!FUNC_3(VAR_14, "vremap:", 7))
   VAR_10 = FUNC_1(VAR_14 + 7, ((void*)0), 0);
  else if (!FUNC_3(VAR_14, "maxhf:", 6))
   VAR_2 = FUNC_1(VAR_14 + 6, ((void*)0), 0);
  else if (!FUNC_3(VAR_14, "maxvf:", 6))
   VAR_3 = FUNC_1(VAR_14 + 6, ((void*)0), 0);
  else if (!FUNC_3(VAR_14, "maxclk:", 7))
   VAR_1 = FUNC_1(VAR_14 + 7, ((void*)0), 0);
  else if (!FUNC_3(VAR_14, "vbemode:", 8))
   VAR_9 = FUNC_1(VAR_14 + 8, ((void*)0), 0);
  else if (VAR_14[0] >= '0' && VAR_14[0] <= '9') {
   VAR_4 = VAR_14;
  } else {
   FUNC_0("unrecognized option %s\n", VAR_14);
  }
 }

 if (VAR_5 != 3 && VAR_5 != 0)
  FUNC_0("uvesafb: mtrr should be set to 0 or 3; %d is unsupported", VAR_5);

 return 0;
}
