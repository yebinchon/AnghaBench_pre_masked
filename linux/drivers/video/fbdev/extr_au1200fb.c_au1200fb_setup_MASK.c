
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct au1200fb_platdata {int (* panel_index ) () ;} ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char**) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,char*) ;
 void* FUNC_3 (char*,char**,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 () ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_8(struct au1200fb_platdata *VAR_9)
{
 char *VAR_10 = ((void*)0);
 char *VAR_11, *VAR_12;
 int VAR_13 = FUNC_0(VAR_4);
 int VAR_14 = -1;

 FUNC_1(VAR_1, &VAR_10);

 if (!VAR_10)
  goto out;

 while ((VAR_11 = FUNC_6(&VAR_10, ",")) != ((void*)0)) {


  if (!FUNC_5(VAR_11, "panel:", 6)) {
   int VAR_15;
   long int VAR_16;
   char *VAR_17;
   VAR_11 += 6;


   VAR_16 = FUNC_3(VAR_11, &VAR_17, 0);
   if (*VAR_17 == '\0')
    VAR_14 = (int)VAR_16;
   else if (FUNC_4(VAR_11, "bs") == 0)
    VAR_14 = VAR_9->panel_index();
   else {
    for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
     if (!FUNC_4(VAR_11,
          VAR_4[VAR_15].name)) {
      VAR_14 = VAR_15;
      break;
     }
    }
   }
   if ((VAR_14 < 0) || (VAR_14 >= VAR_13))
    FUNC_2("Panel %s not supported!", VAR_11);
   else
    VAR_6 = VAR_14;

  } else if (FUNC_5(VAR_11, "nohwcursor", 10) == 0)
   VAR_5 = 1;
  else if (FUNC_5(VAR_11, "devices:", 8) == 0) {
   VAR_11 += 8;
   VAR_3 = FUNC_3(VAR_11, &VAR_12, 0);
   if ((VAR_3 < 0) ||
       (VAR_3 > VAR_2))
    VAR_3 = VAR_2;
  } else if (FUNC_5(VAR_11, "wincfg:", 7) == 0) {
   VAR_11 += 7;
   VAR_7 = FUNC_3(VAR_11, &VAR_12, 0);
   if ((VAR_7 < 0) ||
       (VAR_7 >= FUNC_0(VAR_8)))
    VAR_7 = VAR_0;
  } else if (FUNC_5(VAR_11, "off", 3) == 0)
   return 1;
  else
   FUNC_2("Unsupported option \"%s\"", VAR_11);
 }

out:
 return 0;
}
