
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_14__ {unsigned int width; unsigned int height; scalar_t__ regwidth; scalar_t__ buswidth; scalar_t__ backlight; scalar_t__ debug; int * init_sequence; } ;
struct fbtft_platform_data {int fps; int txbuflen; char* gamma; int rotate; int startbyte; int bgr; TYPE_1__ display; } ;
struct TYPE_13__ {int register_backlight; int update_display; int mkdirty; int reset; int set_addr_win; int write_register; int write_vmem; int read; int write; } ;
struct TYPE_12__ {int len; void* buf; } ;
struct TYPE_22__ {int num_curves; int num_values; int * curves; int lock; } ;
struct fbtft_par {TYPE_11__ fbtftops; TYPE_10__ txbuf; struct fb_info* info; TYPE_9__ gamma; int pseudo_palette; int const* init_sequence; int startbyte; int bgr; int dirty_lock; void* buf; scalar_t__ debug; struct fbtft_platform_data* pdata; } ;
struct fbtft_display {int txbuflen; unsigned int bpp; unsigned int fps; char* gamma; int gamma_num; int gamma_len; unsigned int width; unsigned int height; int fbtftops; scalar_t__ backlight; scalar_t__ debug; scalar_t__ regwidth; scalar_t__ buswidth; int * init_sequence; } ;
struct fb_ops {int fb_blank; int fb_setcolreg; int fb_imageblit; int fb_copyarea; int fb_fillrect; int fb_write; int fb_read; int owner; } ;
struct TYPE_20__ {scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_19__ {int length; scalar_t__ offset; } ;
struct TYPE_18__ {int offset; int length; } ;
struct TYPE_17__ {int offset; int length; } ;
struct TYPE_21__ {int rotate; unsigned int xres; unsigned int yres; unsigned int xres_virtual; unsigned int yres_virtual; unsigned int bits_per_pixel; int nonstd; TYPE_7__ transp; TYPE_6__ blue; TYPE_5__ green; TYPE_4__ red; } ;
struct TYPE_16__ {unsigned int line_length; int smem_len; int accel; scalar_t__ ywrapstep; scalar_t__ ypanstep; scalar_t__ xpanstep; int visual; int type; int id; } ;
struct fb_info {int flags; struct device* device; int pseudo_palette; struct fbtft_par* par; TYPE_8__ var; TYPE_3__ fix; struct fb_deferred_io* fbdefio; struct fb_ops* fbops; int * screen_buffer; } ;
struct fb_deferred_io {unsigned int delay; int deferred_io; } ;
struct device {TYPE_2__* driver; } ;
typedef int s16 ;
typedef int gamma_curves ;
struct TYPE_15__ {int name; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct device*,char*,...) ;
 int * FUNC_1 (struct device*,int,int,int ) ;
 void* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct fb_info*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_5 (struct fbtft_par*,int *,char*,int ) ;
 int FUNC_6 (TYPE_11__*,int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct fb_info* FUNC_7 (int,struct device*) ;
 int FUNC_8 (struct fb_info*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int) ;

struct fb_info *FUNC_15(struct fbtft_display *VAR_27,
     struct device *VAR_28,
     struct fbtft_platform_data *VAR_29)
{
 struct fb_info *VAR_30;
 struct fbtft_par *VAR_31;
 struct fb_ops *VAR_32 = ((void*)0);
 struct fb_deferred_io *VAR_33 = ((void*)0);
 u8 *VAR_34 = ((void*)0);
 void *VAR_35 = ((void*)0);
 void *VAR_36 = ((void*)0);
 unsigned int VAR_37;
 unsigned int VAR_38;
 int VAR_39 = VAR_27->txbuflen;
 unsigned int VAR_40 = VAR_27->bpp;
 unsigned int VAR_41 = VAR_27->fps;
 int VAR_42;
 const s16 *VAR_43 = VAR_27->init_sequence;
 char *VAR_44 = VAR_27->gamma;
 u32 *VAR_45 = ((void*)0);


 if (VAR_27->gamma_num * VAR_27->gamma_len >
   VAR_2) {
  FUNC_0(VAR_28, "FBTFT_GAMMA_MAX_VALUES_TOTAL=%d is exceeded\n",
   VAR_2);
  return ((void*)0);
 }


 if (!VAR_41)
  VAR_41 = 20;
 if (!VAR_40)
  VAR_40 = 16;

 if (!VAR_29) {
  FUNC_0(VAR_28, "platform data is missing\n");
  return ((void*)0);
 }


 if (VAR_29->fps)
  VAR_41 = VAR_29->fps;
 if (VAR_29->txbuflen)
  VAR_39 = VAR_29->txbuflen;
 if (VAR_29->display.init_sequence)
  VAR_43 = VAR_29->display.init_sequence;
 if (VAR_29->gamma)
  VAR_44 = VAR_29->gamma;
 if (VAR_29->display.debug)
  VAR_27->debug = VAR_29->display.debug;
 if (VAR_29->display.backlight)
  VAR_27->backlight = VAR_29->display.backlight;
 if (VAR_29->display.width)
  VAR_27->width = VAR_29->display.width;
 if (VAR_29->display.height)
  VAR_27->height = VAR_29->display.height;
 if (VAR_29->display.buswidth)
  VAR_27->buswidth = VAR_29->display.buswidth;
 if (VAR_29->display.regwidth)
  VAR_27->regwidth = VAR_29->display.regwidth;

 VAR_27->debug |= VAR_9;
 FUNC_4(&VAR_27->debug);

 switch (VAR_29->rotate) {
 case 90:
 case 270:
  VAR_37 = VAR_27->height;
  VAR_38 = VAR_27->width;
  break;
 default:
  VAR_37 = VAR_27->width;
  VAR_38 = VAR_27->height;
 }

 VAR_42 = VAR_27->width * VAR_27->height * VAR_40 / 8;
 VAR_34 = FUNC_14(VAR_42);
 if (!VAR_34)
  goto alloc_fail;

 VAR_32 = FUNC_2(VAR_28, sizeof(struct fb_ops), VAR_6);
 if (!VAR_32)
  goto alloc_fail;

 VAR_33 = FUNC_2(VAR_28, sizeof(struct fb_deferred_io), VAR_6);
 if (!VAR_33)
  goto alloc_fail;

 VAR_36 = FUNC_2(VAR_28, 128, VAR_6);
 if (!VAR_36)
  goto alloc_fail;

 if (VAR_27->gamma_num && VAR_27->gamma_len) {
  VAR_45 = FUNC_1(VAR_28,
         VAR_27->gamma_num *
         VAR_27->gamma_len,
         sizeof(VAR_45[0]),
         VAR_6);
  if (!VAR_45)
   goto alloc_fail;
 }

 VAR_30 = FUNC_7(sizeof(struct fbtft_par), VAR_28);
 if (!VAR_30)
  goto alloc_fail;

 VAR_30->screen_buffer = VAR_34;
 VAR_30->fbops = VAR_32;
 VAR_30->fbdefio = VAR_33;

 VAR_32->owner = VAR_28->driver->owner;
 VAR_32->fb_read = VAR_10;
 VAR_32->fb_write = VAR_17;
 VAR_32->fb_fillrect = VAR_14;
 VAR_32->fb_copyarea = VAR_13;
 VAR_32->fb_imageblit = VAR_15;
 VAR_32->fb_setcolreg = VAR_16;
 VAR_32->fb_blank = VAR_12;

 VAR_33->delay = VAR_7 / VAR_41;
 VAR_33->deferred_io = VAR_11;
 FUNC_3(VAR_30);

 FUNC_12(VAR_30->fix.id, VAR_28->driver->name, 16);
 VAR_30->fix.type = VAR_4;
 VAR_30->fix.visual = VAR_5;
 VAR_30->fix.xpanstep = 0;
 VAR_30->fix.ypanstep = 0;
 VAR_30->fix.ywrapstep = 0;
 VAR_30->fix.line_length = VAR_37 * VAR_40 / 8;
 VAR_30->fix.accel = VAR_3;
 VAR_30->fix.smem_len = VAR_42;

 VAR_30->var.rotate = VAR_29->rotate;
 VAR_30->var.xres = VAR_37;
 VAR_30->var.yres = VAR_38;
 VAR_30->var.xres_virtual = VAR_30->var.xres;
 VAR_30->var.yres_virtual = VAR_30->var.yres;
 VAR_30->var.bits_per_pixel = VAR_40;
 VAR_30->var.nonstd = 1;


 VAR_30->var.red.offset = 11;
 VAR_30->var.red.length = 5;
 VAR_30->var.green.offset = 5;
 VAR_30->var.green.length = 6;
 VAR_30->var.blue.offset = 0;
 VAR_30->var.blue.length = 5;
 VAR_30->var.transp.offset = 0;
 VAR_30->var.transp.length = 0;

 VAR_30->flags = VAR_0 | VAR_1;

 VAR_31 = VAR_30->par;
 VAR_31->info = VAR_30;
 VAR_31->pdata = VAR_29;
 VAR_31->debug = VAR_27->debug;
 VAR_31->buf = VAR_36;
 FUNC_10(&VAR_31->dirty_lock);
 VAR_31->bgr = VAR_29->bgr;
 VAR_31->startbyte = VAR_29->startbyte;
 VAR_31->init_sequence = VAR_43;
 VAR_31->gamma.curves = VAR_45;
 VAR_31->gamma.num_curves = VAR_27->gamma_num;
 VAR_31->gamma.num_values = VAR_27->gamma_len;
 FUNC_9(&VAR_31->gamma.lock);
 VAR_30->pseudo_palette = VAR_31->pseudo_palette;

 if (VAR_31->gamma.curves && VAR_44) {
  if (FUNC_5(VAR_31, VAR_31->gamma.curves, VAR_44,
       FUNC_11(VAR_44)))
   goto release_framebuf;
 }


 if (VAR_39 == -1)
  VAR_39 = VAR_42 + 2;
 if (VAR_39 >= VAR_42 + 2)
  VAR_39 = 0;






 if (VAR_39 > 0) {
  VAR_35 = FUNC_2(VAR_31->info->device, VAR_39, VAR_6);
  if (!VAR_35)
   goto release_framebuf;
  VAR_31->txbuf.buf = VAR_35;
  VAR_31->txbuf.len = VAR_39;
 }


 VAR_31->fbtftops.write = VAR_25;
 VAR_31->fbtftops.read = VAR_19;
 VAR_31->fbtftops.write_vmem = VAR_26;
 VAR_31->fbtftops.write_register = VAR_24;
 VAR_31->fbtftops.set_addr_win = VAR_22;
 VAR_31->fbtftops.reset = VAR_21;
 VAR_31->fbtftops.mkdirty = VAR_18;
 VAR_31->fbtftops.update_display = VAR_23;
 if (VAR_27->backlight)
  VAR_31->fbtftops.register_backlight = VAR_20;


 FUNC_6(&VAR_31->fbtftops, &VAR_27->fbtftops);

 return VAR_30;

release_framebuf:
 FUNC_8(VAR_30);

alloc_fail:
 FUNC_13(VAR_34);

 return ((void*)0);
}
