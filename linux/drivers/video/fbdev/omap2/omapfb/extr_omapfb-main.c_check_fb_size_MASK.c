
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_info {scalar_t__ rotation_type; TYPE_1__* region; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; unsigned long yres_virtual; } ;
struct TYPE_2__ {unsigned long size; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (unsigned long,struct fb_var_screeninfo*) ;
 unsigned long FUNC_2 (unsigned long,int,int) ;
 int FUNC_3 (unsigned long,struct fb_var_screeninfo*) ;
 int FUNC_4 (unsigned long,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_5(const struct omapfb_info *VAR_2,
  struct fb_var_screeninfo *VAR_3)
{
 unsigned long VAR_4 = VAR_2->region->size;
 int VAR_5 = VAR_3->bits_per_pixel >> 3;
 unsigned long VAR_6 = VAR_3->xres_virtual * VAR_5;

 if (VAR_2->rotation_type == VAR_1) {

  if (FUNC_1(VAR_4, VAR_3))
   FUNC_3(FUNC_2(
    VAR_4, VAR_3->xres_virtual, VAR_5) *
    VAR_6, VAR_3);

  if (FUNC_1(VAR_4, VAR_3)) {
   FUNC_0("cannot fit FB to memory\n");
   return -VAR_0;
  }

  return 0;
 }

 FUNC_0("max frame size %lu, line size %lu\n", VAR_4, VAR_6);

 if (VAR_6 * VAR_3->yres_virtual > VAR_4)
  FUNC_3(VAR_4, VAR_3);

 if (VAR_6 * VAR_3->yres_virtual > VAR_4) {
  FUNC_4(VAR_4, VAR_3);
  VAR_6 = VAR_3->xres_virtual * VAR_5;
 }

 if (VAR_6 * VAR_3->yres_virtual > VAR_4) {
  FUNC_0("cannot fit FB to memory\n");
  return -VAR_0;
 }

 return 0;
}
