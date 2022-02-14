
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sw; int sh; int dw; int dh; scalar_t__ dy; scalar_t__ dx; scalar_t__ sy; scalar_t__ sx; } ;
struct mb862xxfb_par {int mapped_vram; unsigned long refclk; int cap_buf; int cap_len; int l1_stride; TYPE_1__ l1_cfg; int dev; int mmio_len; scalar_t__ mmio_base_phys; scalar_t__ fb_base_phys; int fb_base; int pseudo_palette; struct mb862xx_gc_mode* gc_mode; } ;
struct mb862xx_gc_mode {int def_bpp; } ;
struct fb_videomode {int dummy; } ;
struct TYPE_9__ {unsigned long pixclock; int xres; unsigned long yres; int xres_virtual; unsigned long yres_virtual; int bits_per_pixel; unsigned long hsync_len; unsigned long vsync_len; int right_margin; unsigned long left_margin; unsigned long lower_margin; unsigned long upper_margin; int height; int width; int activate; int vmode; scalar_t__ accel_flags; scalar_t__ nonstd; scalar_t__ grayscale; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct TYPE_8__ {unsigned long smem_start; unsigned long mmio_start; int xpanstep; int ypanstep; int line_length; int smem_len; int visual; scalar_t__ ywrapstep; scalar_t__ type_aux; int type; int accel; int mmio_len; int id; } ;
struct fb_info {int screen_size; int flags; TYPE_3__ var; TYPE_2__ fix; TYPE_4__* fbops; int screen_base; int pseudo_palette; struct mb862xxfb_par* par; } ;
struct TYPE_10__ {scalar_t__ (* fb_check_var ) (TYPE_3__*,struct fb_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned long VAR_24 ;
 int VAR_25 ;
 unsigned long VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_31 ;
 int FUNC_2 (TYPE_3__*,struct fb_info*,char*,int *,int ,int *,int) ;
 int FUNC_3 (TYPE_3__*,struct fb_videomode*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_4__ VAR_32 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,struct fb_info*) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_33)
{
 struct mb862xxfb_par *VAR_34 = VAR_33->par;
 struct mb862xx_gc_mode *VAR_35 = VAR_34->gc_mode;
 unsigned long VAR_36;
 int VAR_37;

 VAR_33->fbops = &VAR_32;
 VAR_33->pseudo_palette = VAR_34->pseudo_palette;
 VAR_33->screen_base = VAR_34->fb_base;
 VAR_33->screen_size = VAR_34->mapped_vram;

 FUNC_6(VAR_33->fix.id, VAR_0);
 VAR_33->fix.smem_start = (unsigned long)VAR_34->fb_base_phys;
 VAR_33->fix.mmio_start = (unsigned long)VAR_34->mmio_base_phys;
 VAR_33->fix.mmio_len = VAR_34->mmio_len;
 VAR_33->fix.accel = VAR_6;
 VAR_33->fix.type = VAR_8;
 VAR_33->fix.type_aux = 0;
 VAR_33->fix.xpanstep = 1;
 VAR_33->fix.ypanstep = 1;
 VAR_33->fix.ywrapstep = 0;

 VAR_36 = FUNC_4(VAR_31, VAR_20);
 if (VAR_36 & VAR_17 && VAR_36 & VAR_18) {

  unsigned long VAR_38 = ((VAR_36 & VAR_19) >> 8) + 1;
  unsigned long VAR_39, VAR_40, VAR_41, VAR_42;

  FUNC_0(VAR_34->dev, "using bootloader's disp. mode\n");
  VAR_33->var.pixclock = (VAR_38 * 1000000) / VAR_34->refclk;
  VAR_33->var.xres = (FUNC_4(VAR_31, VAR_21) & 0x0fff) + 1;
  VAR_36 = FUNC_4(VAR_31, VAR_27);
  VAR_33->var.yres = ((VAR_36 >> 16) & 0x0fff) + 1;
  VAR_40 = (VAR_36 & 0x0fff) + 1;
  VAR_33->var.xres_virtual = VAR_33->var.xres;
  VAR_33->var.yres_virtual = VAR_33->var.yres;
  VAR_36 = FUNC_4(VAR_31, VAR_23);
  if (VAR_36 & VAR_24) {
   VAR_33->var.bits_per_pixel = 32;
  } else {
   VAR_36 = FUNC_4(VAR_31, VAR_25);
   if (VAR_36 & VAR_26)
    VAR_33->var.bits_per_pixel = 16;
   else
    VAR_33->var.bits_per_pixel = 8;
  }
  VAR_36 = FUNC_4(VAR_31, VAR_28);
  VAR_33->var.hsync_len = ((VAR_36 & 0xff0000) >> 16) + 1;
  VAR_33->var.vsync_len = ((VAR_36 & 0x3f000000) >> 24) + 1;
  VAR_39 = (VAR_36 & 0xffff) + 1;
  VAR_41 = ((FUNC_4(VAR_31, VAR_22) & 0xfff0000) >> 16) + 1;
  VAR_33->var.right_margin = VAR_39 - VAR_33->var.xres;
  VAR_33->var.left_margin = VAR_41 - VAR_39 - VAR_33->var.hsync_len;
  VAR_42 = ((FUNC_4(VAR_31, VAR_29) & 0xfff0000) >> 16) + 1;
  VAR_33->var.lower_margin = VAR_40 - VAR_33->var.yres;
  VAR_33->var.upper_margin = VAR_42 - VAR_40 - VAR_33->var.vsync_len;
 } else if (VAR_35) {
  FUNC_0(VAR_34->dev, "using supplied mode\n");
  FUNC_3(&VAR_33->var, (struct fb_videomode *)VAR_35);
  VAR_33->var.bits_per_pixel = VAR_35->def_bpp ? VAR_35->def_bpp : 8;
 } else {
  int VAR_43;

  VAR_43 = FUNC_2(&VAR_33->var, VAR_33, "640x480-16@60",
       ((void*)0), 0, ((void*)0), 16);
  if (VAR_43 == 0 || VAR_43 == 4) {
   FUNC_1(VAR_34->dev,
    "failed to get initial mode\n");
   return -VAR_1;
  }
 }

 VAR_33->var.xoffset = 0;
 VAR_33->var.yoffset = 0;
 VAR_33->var.grayscale = 0;
 VAR_33->var.nonstd = 0;
 VAR_33->var.height = -1;
 VAR_33->var.width = -1;
 VAR_33->var.accel_flags = 0;
 VAR_33->var.vmode = VAR_11;
 VAR_33->var.activate = VAR_7;
 VAR_33->flags = VAR_2 |



       VAR_4 |
       VAR_5;


 if ((VAR_33->fbops->fb_check_var)(&VAR_33->var, VAR_33))
  FUNC_1(VAR_34->dev, "check_var() failed on initial setup?\n");

 VAR_33->fix.visual = VAR_33->var.bits_per_pixel == 8 ?
    VAR_9 : VAR_10;
 VAR_33->fix.line_length = (VAR_33->var.xres_virtual *
    VAR_33->var.bits_per_pixel) / 8;
 VAR_33->fix.smem_len = VAR_33->fix.line_length * VAR_33->var.yres_virtual;





 VAR_34->cap_buf = VAR_34->mapped_vram - 0x1bd800 - 0x10000;
 VAR_34->cap_len = 0x1bd800;
 VAR_34->l1_cfg.sx = 0;
 VAR_34->l1_cfg.sy = 0;
 VAR_34->l1_cfg.sw = 720;
 VAR_34->l1_cfg.sh = 576;
 VAR_34->l1_cfg.dx = 0;
 VAR_34->l1_cfg.dy = 0;
 VAR_34->l1_cfg.dw = 720;
 VAR_34->l1_cfg.dh = 576;
 VAR_37 = VAR_34->l1_cfg.sw * (VAR_33->var.bits_per_pixel / 8);
 VAR_34->l1_stride = VAR_37 / 64 + ((VAR_37 % 64) ? 1 : 0);
 FUNC_5(VAR_30, VAR_13, VAR_16 | VAR_15 |
    (VAR_34->l1_stride << 16));
 FUNC_5(VAR_30, VAR_14, VAR_34->cap_buf);
 FUNC_5(VAR_30, VAR_12, VAR_34->cap_buf + VAR_34->cap_len);
 return 0;
}
