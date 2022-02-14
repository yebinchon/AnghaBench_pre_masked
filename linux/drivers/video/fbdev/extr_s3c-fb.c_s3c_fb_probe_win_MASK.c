
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct s3c_fb_win_variant {int palette_sz; scalar_t__ palette_16bpp; } ;
struct TYPE_12__ {int length; scalar_t__ offset; } ;
struct TYPE_11__ {int offset; int length; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_13__ {TYPE_5__ b; TYPE_4__ g; TYPE_3__ r; } ;
struct s3c_fb_win {unsigned int index; struct s3c_fb_win_variant variant; int pseudo_palette; TYPE_6__ palette; int * palette_buffer; struct s3c_fb_pd_win* windata; struct s3c_fb* parent; struct fb_info* fbinfo; } ;
struct s3c_fb_pd_win {scalar_t__ max_bpp; scalar_t__ xres; scalar_t__ yres; int default_bpp; } ;
struct TYPE_8__ {int wait; } ;
struct s3c_fb {int dev; TYPE_2__* pdata; TYPE_1__ vsync_info; } ;
struct fb_videomode {scalar_t__ xres; scalar_t__ yres; } ;
struct fb_var_screeninfo {int bits_per_pixel; int vmode; int activate; } ;
struct TYPE_14__ {int id; int accel; int type; } ;
struct fb_info {TYPE_7__ fix; int cmap; struct fb_var_screeninfo var; int * pseudo_palette; int flags; int * fbops; struct s3c_fb_win* par; } ;
struct TYPE_9__ {struct fb_videomode* vtiming; struct s3c_fb_pd_win** win; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,unsigned int,int ) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,struct fb_info*) ;
 int FUNC_6 (struct fb_var_screeninfo*,struct fb_videomode*) ;
 struct fb_info* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct fb_info*) ;
 int FUNC_10 (struct s3c_fb*,struct s3c_fb_win*) ;
 int FUNC_11 (struct fb_var_screeninfo*,struct fb_info*) ;
 int VAR_6 ;
 int FUNC_12 (struct fb_info*) ;

__attribute__((used)) static int FUNC_13(struct s3c_fb *VAR_7, unsigned int VAR_8,
       struct s3c_fb_win_variant *VAR_9,
       struct s3c_fb_win **VAR_10)
{
 struct fb_var_screeninfo *VAR_11;
 struct fb_videomode VAR_12;
 struct s3c_fb_pd_win *VAR_13;
 struct s3c_fb_win *VAR_14;
 struct fb_info *VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_1(VAR_7->dev, "probing window %d, variant %p\n", VAR_8, VAR_9);

 FUNC_8(&VAR_7->vsync_info.wait);

 VAR_16 = VAR_9->palette_sz * 4;

 VAR_15 = FUNC_7(sizeof(struct s3c_fb_win) +
       VAR_16 * sizeof(u32), VAR_7->dev);
 if (!VAR_15)
  return -VAR_0;

 VAR_13 = VAR_7->pdata->win[VAR_8];
 VAR_12 = *VAR_7->pdata->vtiming;

 FUNC_0(VAR_13->max_bpp == 0);
 FUNC_0(VAR_13->xres == 0);
 FUNC_0(VAR_13->yres == 0);

 VAR_14 = VAR_15->par;
 *VAR_10 = VAR_14;
 VAR_11 = &VAR_15->var;
 VAR_14->variant = *VAR_9;
 VAR_14->fbinfo = VAR_15;
 VAR_14->parent = VAR_7;
 VAR_14->windata = VAR_13;
 VAR_14->index = VAR_8;
 VAR_14->palette_buffer = (u32 *)(VAR_14 + 1);

 VAR_17 = FUNC_10(VAR_7, VAR_14);
 if (VAR_17) {
  FUNC_2(VAR_7->dev, "failed to allocate display memory\n");
  return VAR_17;
 }


 if (VAR_14->variant.palette_16bpp) {

  VAR_14->palette.r.offset = 11;
  VAR_14->palette.r.length = 5;
  VAR_14->palette.g.offset = 5;
  VAR_14->palette.g.length = 6;
  VAR_14->palette.b.offset = 0;
  VAR_14->palette.b.length = 5;

 } else {

  VAR_14->palette.r.offset = 16;
  VAR_14->palette.r.length = 8;
  VAR_14->palette.g.offset = 8;
  VAR_14->palette.g.length = 8;
  VAR_14->palette.b.offset = 0;
  VAR_14->palette.b.length = 8;
 }


 VAR_12.xres = VAR_13->xres;
 VAR_12.yres = VAR_13->yres;
 FUNC_6(&VAR_15->var, &VAR_12);

 VAR_15->fix.type = VAR_4;
 VAR_15->fix.accel = VAR_2;
 VAR_15->var.activate = VAR_3;
 VAR_15->var.vmode = VAR_5;
 VAR_15->var.bits_per_pixel = VAR_13->default_bpp;
 VAR_15->fbops = &VAR_6;
 VAR_15->flags = VAR_1;
 VAR_15->pseudo_palette = &VAR_14->pseudo_palette;



 VAR_17 = FUNC_11(&VAR_15->var, VAR_15);
 if (VAR_17 < 0) {
  FUNC_2(VAR_7->dev, "check_var failed on initial video params\n");
  return VAR_17;
 }



 VAR_17 = FUNC_4(&VAR_15->cmap, VAR_14->variant.palette_sz, 1);
 if (VAR_17 == 0)
  FUNC_5(&VAR_15->cmap, VAR_15);
 else
  FUNC_2(VAR_7->dev, "failed to allocate fb cmap\n");

 FUNC_12(VAR_15);

 FUNC_1(VAR_7->dev, "about to register framebuffer\n");



 VAR_17 = FUNC_9(VAR_15);
 if (VAR_17 < 0) {
  FUNC_2(VAR_7->dev, "failed to register framebuffer\n");
  return VAR_17;
 }

 FUNC_3(VAR_7->dev, "window %d: fb %s\n", VAR_8, VAR_15->fix.id);

 return 0;
}
