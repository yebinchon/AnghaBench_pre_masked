
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lfb_base; int lfb_linelength; int lfb_height; int lfb_width; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*,int *,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char**,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(char *VAR_4)
{
 char *VAR_5;

 if (VAR_4 && *VAR_4) {
  while ((VAR_5 = FUNC_4(&VAR_4, ",")) != ((void*)0)) {
   if (!*VAR_5) continue;

   FUNC_0(&VAR_2, VAR_5);

   if (!FUNC_3(VAR_5, "base:", 5))
    VAR_2.lfb_base = FUNC_1(VAR_5+5, ((void*)0), 0);
   else if (!FUNC_3(VAR_5, "stride:", 7))
    VAR_2.lfb_linelength = FUNC_1(VAR_5+7, ((void*)0), 0) * 4;
   else if (!FUNC_3(VAR_5, "height:", 7))
    VAR_2.lfb_height = FUNC_1(VAR_5+7, ((void*)0), 0);
   else if (!FUNC_3(VAR_5, "width:", 6))
    VAR_2.lfb_width = FUNC_1(VAR_5+6, ((void*)0), 0);
   else if (!FUNC_2(VAR_5, "nowc"))
    VAR_1 &= ~VAR_0;
   else if (!FUNC_2(VAR_5, "nobgrt"))
    VAR_3 = 0;
  }
 }

 return 0;
}
