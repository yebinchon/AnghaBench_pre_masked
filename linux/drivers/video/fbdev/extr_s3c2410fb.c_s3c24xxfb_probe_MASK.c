
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct s3c2410fb_mach_info {int default_display; int num_displays; struct s3c2410fb_display* displays; } ;
struct s3c2410fb_info {int drv_type; int * io; int clk; int clk_rate; int * palette_buffer; int pseudo_pal; int * irq_base; int * mem; int * dev; } ;
struct s3c2410fb_display {unsigned long xres; unsigned long yres; unsigned long bpp; } ;
struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_3__ {unsigned long smem_len; int id; int accel; scalar_t__ ywrapstep; scalar_t__ ypanstep; scalar_t__ xpanstep; scalar_t__ type_aux; int type; } ;
struct TYPE_4__ {unsigned long xres; unsigned long yres; unsigned long bits_per_pixel; int vmode; scalar_t__ accel_flags; int activate; scalar_t__ nonstd; } ;
struct fb_info {TYPE_1__ fix; int node; TYPE_2__ var; int * pseudo_palette; int flags; int * fbops; struct s3c2410fb_info* par; } ;
typedef enum s3c_drv_type { ____Placeholder_s3c_drv_type } s3c_drv_type ;


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
 scalar_t__ FUNC_0 (int ) ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_17 ;
 int FUNC_7 (int *,char*,...) ;
 struct s3c2410fb_mach_info* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int ,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (char*) ;
 int VAR_18 ;
 struct fb_info* FUNC_12 (int,int *) ;
 int FUNC_13 (struct fb_info*) ;
 int FUNC_14 (int,struct s3c2410fb_info*) ;
 int * FUNC_15 (int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct fb_info*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct fb_info*) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int,int ,int ,int ,struct s3c2410fb_info*) ;
 int * FUNC_24 (int ,int,int ) ;
 int FUNC_25 (struct resource*) ;
 int FUNC_26 (TYPE_2__*,struct fb_info*) ;
 int FUNC_27 (struct s3c2410fb_info*) ;
 int FUNC_28 (struct s3c2410fb_info*) ;
 int FUNC_29 (struct fb_info*) ;
 int VAR_19 ;
 int FUNC_30 (struct fb_info*) ;
 int VAR_20 ;
 int FUNC_31 (struct fb_info*) ;
 int FUNC_32 (int ,int ) ;
 int FUNC_33 (int,int) ;
 int FUNC_34 (int,int *) ;

__attribute__((used)) static int FUNC_35(struct platform_device *VAR_21,
      enum s3c_drv_type VAR_22)
{
 struct s3c2410fb_info *VAR_23;
 struct s3c2410fb_display *VAR_24;
 struct fb_info *VAR_25;
 struct s3c2410fb_mach_info *VAR_26;
 struct resource *VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 u32 VAR_32;

 VAR_26 = FUNC_8(&VAR_21->dev);
 if (VAR_26 == ((void*)0)) {
  FUNC_7(&VAR_21->dev,
   "no platform data for lcd, cannot attach\n");
  return -VAR_2;
 }

 if (VAR_26->default_display >= VAR_26->num_displays) {
  FUNC_7(&VAR_21->dev, "default is %d but only %d displays\n",
   VAR_26->default_display, VAR_26->num_displays);
  return -VAR_2;
 }

 VAR_24 = VAR_26->displays + VAR_26->default_display;

 VAR_29 = FUNC_17(VAR_21, 0);
 if (VAR_29 < 0) {
  FUNC_7(&VAR_21->dev, "no irq for device\n");
  return -VAR_3;
 }

 VAR_25 = FUNC_12(sizeof(struct s3c2410fb_info), &VAR_21->dev);
 if (!VAR_25)
  return -VAR_4;

 FUNC_19(VAR_21, VAR_25);

 VAR_23 = VAR_25->par;
 VAR_23->dev = &VAR_21->dev;
 VAR_23->drv_type = VAR_22;

 VAR_27 = FUNC_18(VAR_21, VAR_11, 0);
 if (VAR_27 == ((void*)0)) {
  FUNC_7(&VAR_21->dev, "failed to get memory registers\n");
  VAR_28 = -VAR_5;
  goto dealloc_fb;
 }

 VAR_31 = FUNC_25(VAR_27);
 VAR_23->mem = FUNC_24(VAR_27->start, VAR_31, VAR_21->name);
 if (VAR_23->mem == ((void*)0)) {
  FUNC_7(&VAR_21->dev, "failed to get memory region\n");
  VAR_28 = -VAR_3;
  goto dealloc_fb;
 }

 VAR_23->io = FUNC_15(VAR_27->start, VAR_31);
 if (VAR_23->io == ((void*)0)) {
  FUNC_7(&VAR_21->dev, "ioremap() of registers failed\n");
  VAR_28 = -VAR_5;
  goto release_mem;
 }

 if (VAR_22 == VAR_0)
  VAR_23->irq_base = VAR_23->io + VAR_16;
 else
  VAR_23->irq_base = VAR_23->io + VAR_15;

 FUNC_11("devinit\n");

 FUNC_32(VAR_25->fix.id, VAR_18);


 VAR_32 = FUNC_20(VAR_23->io + VAR_13);
 FUNC_34(VAR_32 & ~VAR_14, VAR_23->io + VAR_13);

 VAR_25->fix.type = VAR_9;
 VAR_25->fix.type_aux = 0;
 VAR_25->fix.xpanstep = 0;
 VAR_25->fix.ypanstep = 0;
 VAR_25->fix.ywrapstep = 0;
 VAR_25->fix.accel = VAR_7;

 VAR_25->var.nonstd = 0;
 VAR_25->var.activate = VAR_8;
 VAR_25->var.accel_flags = 0;
 VAR_25->var.vmode = VAR_10;

 VAR_25->fbops = &VAR_20;
 VAR_25->flags = VAR_6;
 VAR_25->pseudo_palette = &VAR_23->pseudo_pal;

 for (VAR_30 = 0; VAR_30 < 256; VAR_30++)
  VAR_23->palette_buffer[VAR_30] = VAR_12;

 VAR_28 = FUNC_23(VAR_29, VAR_19, 0, VAR_21->name, VAR_23);
 if (VAR_28) {
  FUNC_7(&VAR_21->dev, "cannot get irq %d - err %d\n", VAR_29, VAR_28);
  VAR_28 = -VAR_1;
  goto release_regs;
 }

 VAR_23->clk = FUNC_3(((void*)0), "lcd");
 if (FUNC_0(VAR_23->clk)) {
  FUNC_7(&VAR_21->dev, "failed to get lcd clock source\n");
  VAR_28 = FUNC_1(VAR_23->clk);
  goto release_irq;
 }

 FUNC_5(VAR_23->clk);
 FUNC_11("got and enabled clock\n");

 FUNC_33(1000, 1100);

 VAR_23->clk_rate = FUNC_4(VAR_23->clk);


 for (VAR_30 = 0; VAR_30 < VAR_26->num_displays; VAR_30++) {
  unsigned long VAR_33 = VAR_26->displays[VAR_30].xres;

  VAR_33 *= VAR_26->displays[VAR_30].yres;
  VAR_33 *= VAR_26->displays[VAR_30].bpp;
  VAR_33 >>= 3;
  if (VAR_25->fix.smem_len < VAR_33)
   VAR_25->fix.smem_len = VAR_33;
 }


 VAR_28 = FUNC_30(VAR_25);
 if (VAR_28) {
  FUNC_7(&VAR_21->dev, "Failed to allocate video RAM: %d\n", VAR_28);
  VAR_28 = -VAR_4;
  goto release_clock;
 }

 FUNC_11("got video memory\n");

 VAR_25->var.xres = VAR_24->xres;
 VAR_25->var.yres = VAR_24->yres;
 VAR_25->var.bits_per_pixel = VAR_24->bpp;

 FUNC_29(VAR_25);

 FUNC_26(&VAR_25->var, VAR_25);

 VAR_28 = FUNC_28(VAR_23);
 if (VAR_28 < 0) {
  FUNC_7(&VAR_21->dev, "Failed to register cpufreq\n");
  goto free_video_memory;
 }

 VAR_28 = FUNC_21(VAR_25);
 if (VAR_28 < 0) {
  FUNC_7(&VAR_21->dev, "Failed to register framebuffer device: %d\n",
   VAR_28);
  goto free_cpufreq;
 }


 VAR_28 = FUNC_10(&VAR_21->dev, &VAR_17);
 if (VAR_28)
  FUNC_7(&VAR_21->dev, "failed to add debug attribute\n");

 FUNC_9(&VAR_21->dev, "fb%d: %s frame buffer device\n",
  VAR_25->node, VAR_25->fix.id);

 return 0;

 free_cpufreq:
 FUNC_27(VAR_23);
free_video_memory:
 FUNC_31(VAR_25);
release_clock:
 FUNC_2(VAR_23->clk);
 FUNC_6(VAR_23->clk);
release_irq:
 FUNC_14(VAR_29, VAR_23);
release_regs:
 FUNC_16(VAR_23->io);
release_mem:
 FUNC_22(VAR_27->start, VAR_31);
dealloc_fb:
 FUNC_13(VAR_25);
 return VAR_28;
}
