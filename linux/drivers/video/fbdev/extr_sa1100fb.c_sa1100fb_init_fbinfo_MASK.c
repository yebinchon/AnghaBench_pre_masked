
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct sa1100fb_mach_info {int lccr3; scalar_t__ pixclock; int xres; int yres; int bpp; int ** rgb; int cmap_greyscale; int sync; int lower_margin; int upper_margin; int vsync_len; int right_margin; int left_margin; int hsync_len; } ;
struct TYPE_5__ {int smem_len; int accel; scalar_t__ ywrapstep; scalar_t__ ypanstep; scalar_t__ xpanstep; scalar_t__ type_aux; int type; int id; } ;
struct TYPE_4__ {int height; int width; int xres; int xres_virtual; int yres; int yres_virtual; int bits_per_pixel; scalar_t__ pixclock; int grayscale; int sync; int lower_margin; int upper_margin; int vsync_len; int right_margin; int left_margin; int hsync_len; int vmode; scalar_t__ accel_flags; int activate; scalar_t__ nonstd; } ;
struct TYPE_6__ {TYPE_2__ fix; TYPE_1__ var; int pseudo_palette; int monspecs; int flags; int * fbops; } ;
struct sa1100fb_info {int ctrlr_lock; int task; int ctrlr_wait; int ** rgb; struct sa1100fb_mach_info* inf; TYPE_3__ fb; scalar_t__ task_state; int state; int pseudo_palette; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct sa1100fb_mach_info* FUNC_1 (struct device*) ;
 struct sa1100fb_info* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_15 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static struct sa1100fb_info *FUNC_7(struct device *VAR_20)
{
 struct sa1100fb_mach_info *VAR_21 = FUNC_1(VAR_20);
 struct sa1100fb_info *VAR_22;
 unsigned VAR_23;

 VAR_22 = FUNC_2(VAR_20, sizeof(struct sa1100fb_info), VAR_6);
 if (!VAR_22)
  return ((void*)0);

 VAR_22->dev = VAR_20;

 FUNC_6(VAR_22->fb.fix.id, VAR_13);

 VAR_22->fb.fix.type = VAR_4;
 VAR_22->fb.fix.type_aux = 0;
 VAR_22->fb.fix.xpanstep = 0;
 VAR_22->fb.fix.ypanstep = 0;
 VAR_22->fb.fix.ywrapstep = 0;
 VAR_22->fb.fix.accel = VAR_2;

 VAR_22->fb.var.nonstd = 0;
 VAR_22->fb.var.activate = VAR_3;
 VAR_22->fb.var.height = -1;
 VAR_22->fb.var.width = -1;
 VAR_22->fb.var.accel_flags = 0;
 VAR_22->fb.var.vmode = VAR_5;

 VAR_22->fb.fbops = &VAR_18;
 VAR_22->fb.flags = VAR_1;
 VAR_22->fb.monspecs = VAR_15;
 VAR_22->fb.pseudo_palette = VAR_22->pseudo_palette;

 VAR_22->rgb[VAR_11] = &VAR_16;
 VAR_22->rgb[VAR_12] = &VAR_17;
 VAR_22->rgb[VAR_10] = &VAR_14;






 if (VAR_21->lccr3 & (VAR_8|VAR_7|0xff) ||
     VAR_21->pixclock == 0)
  FUNC_5("sa1100fb error: invalid LCCR3 fields set or zero "
   "pixclock.");

 VAR_22->fb.var.xres = VAR_21->xres;
 VAR_22->fb.var.xres_virtual = VAR_21->xres;
 VAR_22->fb.var.yres = VAR_21->yres;
 VAR_22->fb.var.yres_virtual = VAR_21->yres;
 VAR_22->fb.var.bits_per_pixel = VAR_21->bpp;
 VAR_22->fb.var.pixclock = VAR_21->pixclock;
 VAR_22->fb.var.hsync_len = VAR_21->hsync_len;
 VAR_22->fb.var.left_margin = VAR_21->left_margin;
 VAR_22->fb.var.right_margin = VAR_21->right_margin;
 VAR_22->fb.var.vsync_len = VAR_21->vsync_len;
 VAR_22->fb.var.upper_margin = VAR_21->upper_margin;
 VAR_22->fb.var.lower_margin = VAR_21->lower_margin;
 VAR_22->fb.var.sync = VAR_21->sync;
 VAR_22->fb.var.grayscale = VAR_21->cmap_greyscale;
 VAR_22->state = VAR_0;
 VAR_22->task_state = (u_char)-1;
 VAR_22->fb.fix.smem_len = VAR_21->xres * VAR_21->yres *
       VAR_21->bpp / 8;
 VAR_22->inf = VAR_21;


 for (VAR_23 = 0; VAR_23 < VAR_9; VAR_23++)
  if (VAR_21->rgb[VAR_23])
   VAR_22->rgb[VAR_23] = VAR_21->rgb[VAR_23];

 FUNC_3(&VAR_22->ctrlr_wait);
 FUNC_0(&VAR_22->task, VAR_19);
 FUNC_4(&VAR_22->ctrlr_lock);

 return VAR_22;
}
