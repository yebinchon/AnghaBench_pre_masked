
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


struct sh_mobile_lcdc_format_info {int bpp; int yuv; } ;
struct TYPE_9__ {int height; int width; } ;
struct sh_mobile_lcdc_chan_cfg {scalar_t__ fourcc; unsigned int num_modes; TYPE_7__* tx_dev; TYPE_2__ panel_cfg; struct fb_videomode* lcd_modes; } ;
struct fb_videomode {unsigned int yres; unsigned int xres; } ;
struct TYPE_10__ {struct fb_videomode mode; int height; int width; } ;
struct sh_mobile_lcdc_chan {unsigned int xres; unsigned int xres_virtual; int yres; int yres_virtual; int pitch; unsigned int fb_size; TYPE_6__* tx_dev; int * fb_mem; int dma_handle; TYPE_3__ display; int colorspace; struct sh_mobile_lcdc_format_info const* format; TYPE_1__* lcdc; struct sh_mobile_lcdc_chan_cfg* cfg; } ;
struct device {int dummy; } ;
struct TYPE_12__ {TYPE_4__* driver; } ;
struct TYPE_14__ {TYPE_5__ dev; } ;
struct TYPE_13__ {struct fb_videomode def_mode; struct sh_mobile_lcdc_chan* lcdc; } ;
struct TYPE_11__ {int owner; } ;
struct TYPE_8__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct fb_videomode VAR_9 ;
 int FUNC_0 (struct device*,char*,unsigned int,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 int * FUNC_3 (struct device*,unsigned int,int *,int ) ;
 TYPE_6__* FUNC_4 (TYPE_7__*) ;
 struct sh_mobile_lcdc_format_info* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct sh_mobile_lcdc_chan*,struct fb_videomode const*,unsigned int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct sh_mobile_lcdc_chan *VAR_10)
{
 const struct sh_mobile_lcdc_format_info *VAR_11;
 const struct sh_mobile_lcdc_chan_cfg *VAR_12 = VAR_10->cfg;
 struct device *VAR_13 = VAR_10->lcdc->dev;
 const struct fb_videomode *VAR_14;
 const struct fb_videomode *VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;


 VAR_11 = FUNC_5(VAR_12->fourcc);
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_13, "Invalid FOURCC %08x.\n", VAR_12->fourcc);
  return -VAR_0;
 }




 VAR_14 = ((void*)0);
 VAR_17 = 0;

 for (VAR_18 = 0, VAR_15 = VAR_12->lcd_modes; VAR_18 < VAR_12->num_modes; VAR_18++, VAR_15++) {
  unsigned int VAR_19 = VAR_15->yres * VAR_15->xres;


  if ((VAR_12->fourcc == VAR_7 ||
       VAR_12->fourcc == VAR_8) && (VAR_15->yres & 0x1)) {
   FUNC_1(VAR_13, "yres must be multiple of 2 for "
    "YCbCr420 mode.\n");
   return -VAR_0;
  }

  if (VAR_19 > VAR_17) {
   VAR_14 = VAR_15;
   VAR_17 = VAR_19;
  }
 }

 if (!VAR_17)
  VAR_17 = VAR_3 * VAR_4;
 else
  FUNC_0(VAR_13, "Found largest videomode %ux%u\n",
   VAR_14->xres, VAR_14->yres);

 if (VAR_12->lcd_modes == ((void*)0)) {
  VAR_15 = &VAR_9;
  VAR_16 = 1;
 } else {
  VAR_15 = VAR_12->lcd_modes;
  VAR_16 = VAR_12->num_modes;
 }




 VAR_10->format = VAR_11;
 VAR_10->xres = VAR_15->xres;
 VAR_10->xres_virtual = VAR_15->xres;
 VAR_10->yres = VAR_15->yres;
 VAR_10->yres_virtual = VAR_15->yres * 2;

 if (!VAR_11->yuv) {
  VAR_10->colorspace = VAR_6;
  VAR_10->pitch = VAR_10->xres_virtual * VAR_11->bpp / 8;
 } else {
  VAR_10->colorspace = VAR_5;
  VAR_10->pitch = VAR_10->xres_virtual;
 }

 VAR_10->display.width = VAR_12->panel_cfg.width;
 VAR_10->display.height = VAR_12->panel_cfg.height;
 VAR_10->display.mode = *VAR_15;


 VAR_10->fb_size = VAR_17 * VAR_11->bpp / 8 * 2;
 VAR_10->fb_mem = FUNC_3(VAR_13, VAR_10->fb_size, &VAR_10->dma_handle,
     VAR_2);
 if (VAR_10->fb_mem == ((void*)0)) {
  FUNC_1(VAR_13, "unable to allocate buffer\n");
  return -VAR_1;
 }


 if (VAR_12->tx_dev) {
  if (!VAR_12->tx_dev->dev.driver ||
      !FUNC_7(VAR_12->tx_dev->dev.driver->owner)) {
   FUNC_2(VAR_13, "unable to get transmitter device\n");
   return -VAR_0;
  }
  VAR_10->tx_dev = FUNC_4(VAR_12->tx_dev);
  VAR_10->tx_dev->lcdc = VAR_10;
  VAR_10->tx_dev->def_mode = *VAR_15;
 }

 return FUNC_6(VAR_10, VAR_15, VAR_16);
}
