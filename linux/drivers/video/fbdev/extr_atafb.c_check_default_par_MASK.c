
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int xres_virtual; int yres_virtual; int bits_per_pixel; void* activate; } ;


 void* VAR_0 ;
 struct fb_var_screeninfo* VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fb_var_screeninfo*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_4)
{
 char VAR_5[10];
 int VAR_6;
 struct fb_var_screeninfo VAR_7;
 unsigned long VAR_8;


 if (VAR_3) {
  VAR_7 = VAR_1[VAR_3 - 1];
  VAR_7.activate = VAR_0;
  if (FUNC_0(&VAR_7, 1))
   VAR_3 = 0;
 }

 if (!VAR_3) {
  VAR_7 = VAR_1[VAR_4 - 1];
  VAR_7.activate = VAR_0;
  if (!FUNC_0(&VAR_7, 1))
   VAR_3 = VAR_4;
 }

 if (!VAR_3) {

  for (VAR_6 = 1; VAR_6 < 10; VAR_6++) {
   FUNC_3(VAR_5,"default%d", VAR_6);
   VAR_3 = FUNC_1(VAR_5);
   if (!VAR_3)
    FUNC_2("can't set default video mode");
   VAR_7 = VAR_1[VAR_3 - 1];
   VAR_7.activate = VAR_0;
   if (!FUNC_0(&VAR_7,1))
    break;
  }
 }
 VAR_8 = VAR_7.xres_virtual * VAR_7.yres_virtual * VAR_7.bits_per_pixel / 8;
 if (VAR_2 < VAR_8)
  VAR_2 = VAR_8;
}
