
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geodefb_par {int panel_x; int panel_y; } ;
struct fb_info {struct geodefb_par* par; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char**,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_2)
{
 struct geodefb_par *VAR_3 = VAR_2->par;

 if (FUNC_1(VAR_1, "") != 0) {
  int VAR_4, VAR_5;
  char *VAR_6;
  VAR_4 = FUNC_0(VAR_1, &VAR_6, 10);
  if (!VAR_4)
   return -VAR_0;
  VAR_5 = FUNC_0(VAR_6 + 1, ((void*)0), 10);
  if (!VAR_5)
   return -VAR_0;
  VAR_3->panel_x = VAR_4;
  VAR_3->panel_y = VAR_5;
 }
 return 0;
}
