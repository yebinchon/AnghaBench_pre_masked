
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int physical; } ;
struct i810fb_par {int mmio_start_phys; int pitch; TYPE_1__ fb; } ;
struct TYPE_4__ {int bits_per_pixel; int nonstd; } ;
struct fb_info {TYPE_2__ var; int mm_lock; struct i810fb_par* par; } ;
struct fb_fix_screeninfo {int xpanstep; int ypanstep; int accel; int mmio_len; int mmio_start; int line_length; scalar_t__ ywrapstep; int visual; scalar_t__ type_aux; int type; int smem_len; int smem_start; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fb_fix_screeninfo*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct fb_fix_screeninfo *VAR_7, struct fb_info *VAR_8)
{
 struct i810fb_par *VAR_9 = VAR_8->par;

     FUNC_0(VAR_7, 0, sizeof(struct fb_fix_screeninfo));

     FUNC_3(VAR_7->id, "I810");
 FUNC_1(&VAR_8->mm_lock);
     VAR_7->smem_start = VAR_9->fb.physical;
     VAR_7->smem_len = VAR_9->fb.size;
 FUNC_2(&VAR_8->mm_lock);
     VAR_7->type = VAR_2;
     VAR_7->type_aux = 0;
 VAR_7->xpanstep = 8;
 VAR_7->ypanstep = 1;

     switch (VAR_8->var.bits_per_pixel) {
 case 8:
      VAR_7->visual = VAR_4;
      break;
 case 16:
 case 24:
 case 32:
  if (VAR_8->var.nonstd)
   VAR_7->visual = VAR_3;
  else
   VAR_7->visual = VAR_5;
      break;
 default:
  return -VAR_0;
 }
     VAR_7->ywrapstep = 0;
 VAR_7->line_length = VAR_9->pitch;
 VAR_7->mmio_start = VAR_9->mmio_start_phys;
 VAR_7->mmio_len = VAR_6;
 VAR_7->accel = VAR_1;

 return 0;
}
