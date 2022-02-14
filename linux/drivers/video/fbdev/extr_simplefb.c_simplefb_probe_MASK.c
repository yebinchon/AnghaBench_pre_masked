
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct simplefb_params {TYPE_2__* format; int height; int width; int stride; } ;
struct simplefb_par {int palette; } ;
struct resource {int start; } ;
struct TYPE_14__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_13__ {int line_length; int smem_len; int smem_start; } ;
struct TYPE_12__ {int bits_per_pixel; int yres; int xres; int transp; int blue; int green; int red; int yres_virtual; int xres_virtual; } ;
struct fb_info {int flags; int screen_base; int node; TYPE_4__ fix; TYPE_3__ var; int pseudo_palette; int * fbops; TYPE_9__* apertures; struct simplefb_par* par; } ;
struct TYPE_15__ {TYPE_1__* ranges; } ;
struct TYPE_11__ {int name; int transp; int blue; int green; int red; int bits_per_pixel; } ;
struct TYPE_10__ {int size; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_9__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,char*,int ,...) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 struct fb_info* FUNC_5 (int,TYPE_5__*) ;
 int FUNC_6 (struct fb_info*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct fb_info*) ;
 int FUNC_11 (struct fb_info*) ;
 int FUNC_12 (struct resource*) ;
 int FUNC_13 (struct simplefb_par*) ;
 int FUNC_14 (struct simplefb_par*,struct platform_device*) ;
 int FUNC_15 (struct simplefb_par*,struct platform_device*) ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (struct platform_device*,struct simplefb_params*) ;
 int FUNC_17 (struct platform_device*,struct simplefb_params*) ;
 int FUNC_18 (struct simplefb_par*) ;
 int FUNC_19 (struct simplefb_par*,struct platform_device*) ;
 int FUNC_20 (struct simplefb_par*,struct platform_device*) ;
 TYPE_3__ VAR_8 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_9)
{
 int VAR_10;
 struct simplefb_params VAR_11;
 struct fb_info *VAR_12;
 struct simplefb_par *VAR_13;
 struct resource *VAR_14;

 if (FUNC_4("simplefb", ((void*)0)))
  return -VAR_1;

 VAR_10 = -VAR_1;
 if (FUNC_2(&VAR_9->dev))
  VAR_10 = FUNC_17(VAR_9, &VAR_11);
 else if (VAR_9->dev.of_node)
  VAR_10 = FUNC_16(VAR_9, &VAR_11);

 if (VAR_10)
  return VAR_10;

 VAR_14 = FUNC_9(VAR_9, VAR_5, 0);
 if (!VAR_14) {
  FUNC_1(&VAR_9->dev, "No memory resource\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_5(sizeof(struct simplefb_par), &VAR_9->dev);
 if (!VAR_12)
  return -VAR_2;
 FUNC_10(VAR_9, VAR_12);

 VAR_13 = VAR_12->par;

 VAR_12->fix = VAR_6;
 VAR_12->fix.smem_start = VAR_14->start;
 VAR_12->fix.smem_len = FUNC_12(VAR_14);
 VAR_12->fix.line_length = VAR_11.stride;

 VAR_12->var = VAR_8;
 VAR_12->var.xres = VAR_11.width;
 VAR_12->var.yres = VAR_11.height;
 VAR_12->var.xres_virtual = VAR_11.width;
 VAR_12->var.yres_virtual = VAR_11.height;
 VAR_12->var.bits_per_pixel = VAR_11.format->bits_per_pixel;
 VAR_12->var.red = VAR_11.format->red;
 VAR_12->var.green = VAR_11.format->green;
 VAR_12->var.blue = VAR_11.format->blue;
 VAR_12->var.transp = VAR_11.format->transp;

 VAR_12->apertures = FUNC_0(1);
 if (!VAR_12->apertures) {
  VAR_10 = -VAR_2;
  goto error_fb_release;
 }
 VAR_12->apertures->ranges[0].base = VAR_12->fix.smem_start;
 VAR_12->apertures->ranges[0].size = VAR_12->fix.smem_len;

 VAR_12->fbops = &VAR_7;
 VAR_12->flags = VAR_3 | VAR_4;
 VAR_12->screen_base = FUNC_7(VAR_12->fix.smem_start,
           VAR_12->fix.smem_len);
 if (!VAR_12->screen_base) {
  VAR_10 = -VAR_2;
  goto error_fb_release;
 }
 VAR_12->pseudo_palette = VAR_13->palette;

 VAR_10 = FUNC_15(VAR_13, VAR_9);
 if (VAR_10 < 0)
  goto error_unmap;

 VAR_10 = FUNC_20(VAR_13, VAR_9);
 if (VAR_10 < 0)
  goto error_clocks;

 FUNC_14(VAR_13, VAR_9);
 FUNC_19(VAR_13, VAR_9);

 FUNC_3(&VAR_9->dev, "framebuffer at 0x%lx, 0x%x bytes, mapped to 0x%p\n",
        VAR_12->fix.smem_start, VAR_12->fix.smem_len,
        VAR_12->screen_base);
 FUNC_3(&VAR_9->dev, "format=%s, mode=%dx%dx%d, linelength=%d\n",
        VAR_11.format->name,
        VAR_12->var.xres, VAR_12->var.yres,
        VAR_12->var.bits_per_pixel, VAR_12->fix.line_length);

 VAR_10 = FUNC_11(VAR_12);
 if (VAR_10 < 0) {
  FUNC_1(&VAR_9->dev, "Unable to register simplefb: %d\n", VAR_10);
  goto error_regulators;
 }

 FUNC_3(&VAR_9->dev, "fb%d: simplefb registered!\n", VAR_12->node);

 return 0;

error_regulators:
 FUNC_18(VAR_13);
error_clocks:
 FUNC_13(VAR_13);
error_unmap:
 FUNC_8(VAR_12->screen_base);
error_fb_release:
 FUNC_6(VAR_12);
 return VAR_10;
}
