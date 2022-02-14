
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
struct i810fb_par {int dev_flags; int ddc_num; int i810fb_ops; TYPE_1__ aperture; int open_lock; } ;
struct TYPE_4__ {int xres; int yres; int yres_virtual; int bits_per_pixel; int nonstd; int accel_flags; } ;
struct fb_info {TYPE_2__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct fb_info*) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_2(struct i810fb_par *VAR_14, struct fb_info *VAR_15)
{
 FUNC_1(&VAR_14->open_lock);

 if (VAR_9)
  VAR_8 = VAR_9;
 else if (VAR_14->aperture.size > 32 * 1024 * 1024)
  VAR_8 = 16;
 else
  VAR_8 = 8;

 if (!VAR_10)
  VAR_10 = 1;

 if (VAR_2)
  VAR_14->dev_flags |= VAR_1;

 if (VAR_7)
  VAR_14->dev_flags |= VAR_0;

 VAR_14->ddc_num = (VAR_5 ? 3 : 2);

 if (VAR_3 < 8)
  VAR_3 = 8;

 VAR_14->i810fb_ops = VAR_6;

 if (VAR_12)
  VAR_15->var.xres = VAR_12;
 else
  VAR_15->var.xres = 640;

 if (VAR_13)
  VAR_15->var.yres = VAR_13;
 else
  VAR_15->var.yres = 480;

 if (!VAR_11)
  VAR_11 = (VAR_10 << 20)/(VAR_15->var.xres*VAR_3 >> 3);

 VAR_15->var.yres_virtual = VAR_11;
 VAR_15->var.bits_per_pixel = VAR_3;

 if (VAR_4)
  VAR_15->var.nonstd = 1;

 if (VAR_14->dev_flags & VAR_1)
  VAR_15->var.accel_flags = 1;

 FUNC_0(VAR_15);
}
