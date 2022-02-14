
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct au1100fb_device {int panel_idx; TYPE_1__* panel; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char**) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static int FUNC_8(struct au1100fb_device *VAR_3)
{
 char *VAR_4, *VAR_5;
 int VAR_6 = FUNC_0(VAR_2);

 if (VAR_6 <= 0) {
  FUNC_2("No LCD panels supported by driver!");
  return -VAR_1;
 }

 if (FUNC_1(VAR_0, &VAR_5))
  return -VAR_1;
 if (!VAR_5)
  return -VAR_1;

 while ((VAR_4 = FUNC_7(&VAR_5, ",")) != ((void*)0)) {

  if (!FUNC_6(VAR_4, "panel:", 6)) {
   int VAR_7;
   VAR_4 += 6;
   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
    if (!FUNC_6(VAR_4, VAR_2[VAR_7].name,
          FUNC_5(VAR_4))) {
     VAR_3->panel = &VAR_2[VAR_7];
     VAR_3->panel_idx = VAR_7;
     break;
    }
   }
   if (VAR_7 >= VAR_6) {
    FUNC_4("Panel '%s' not supported!", VAR_4);
    return -VAR_1;
   }
  }

  else
   FUNC_4("Unsupported option \"%s\"", VAR_4);
 }

 FUNC_3("Panel=%s", VAR_3->panel->name);

 return 0;
}
