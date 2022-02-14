
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int vmode; int activate; void* bits_per_pixel; void* upper_margin; void* vsync_len; void* lower_margin; void* yres_virtual; void* yres; void* left_margin; void* hsync_len; void* right_margin; void* xres_virtual; void* xres; void* pixclock; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,int *,int ) ;
 char* FUNC_1 (char**,char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_2,
         struct fb_var_screeninfo *VAR_3)
{
 char *VAR_4;
 int VAR_5 = 0;
 if (!VAR_2 || !*VAR_2)
  return -1;

 while ((VAR_4 = FUNC_1(&VAR_2, " ")) != ((void*)0)) {
  if (!*VAR_4)
   continue;

  switch (VAR_5) {
  case 0:
   VAR_3->pixclock = FUNC_0(VAR_4, ((void*)0), 0);
   VAR_5++;
   break;
  case 1:
   VAR_3->xres = VAR_3->xres_virtual = FUNC_0(VAR_4, ((void*)0), 0);
   VAR_5++;
   break;
  case 2:
   VAR_3->right_margin = FUNC_0(VAR_4, ((void*)0), 0);
   VAR_5++;
   break;
  case 3:
   VAR_3->hsync_len = FUNC_0(VAR_4, ((void*)0), 0);
   VAR_5++;
   break;
  case 4:
   VAR_3->left_margin = FUNC_0(VAR_4, ((void*)0), 0);
   VAR_5++;
   break;
  case 5:
   VAR_3->yres = VAR_3->yres_virtual = FUNC_0(VAR_4, ((void*)0), 0);
   VAR_5++;
   break;
  case 6:
   VAR_3->lower_margin = FUNC_0(VAR_4, ((void*)0), 0);
   VAR_5++;
   break;
  case 7:
   VAR_3->vsync_len = FUNC_0(VAR_4, ((void*)0), 0);
   VAR_5++;
   break;
  case 8:
   VAR_3->upper_margin = FUNC_0(VAR_4, ((void*)0), 0);
   VAR_5++;
   break;
  case 9:
   VAR_3->bits_per_pixel = FUNC_0(VAR_4, ((void*)0), 0);
   VAR_5++;
   break;
  default:
   return -1;
  }
 }
 VAR_3->activate = VAR_0;
 VAR_3->vmode = VAR_1;
 return 0;
}
