
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;
struct au1100fb_regs {int dummy; } ;
struct TYPE_9__ {scalar_t__ len; } ;
struct TYPE_10__ {int bits_per_pixel; int xres; int xres_virtual; int yres; int yres_virtual; } ;
struct TYPE_11__ {int smem_len; int smem_start; int mmio_start; int mmio_len; } ;
struct TYPE_8__ {TYPE_3__ cmap; TYPE_5__ var; int pseudo_palette; TYPE_6__ fix; int * fbops; int screen_base; } ;
struct au1100fb_device {int regs_len; int fb_len; TYPE_2__ info; struct clk* lcdclk; int fb_mem; TYPE_1__* panel; int fb_phys; int regs_phys; struct au1100fb_regs* regs; int * dev; } ;
struct TYPE_7__ {int xres; int yres; int bpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct clk*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 TYPE_6__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct au1100fb_device*) ;
 scalar_t__ FUNC_4 (struct au1100fb_device*) ;
 TYPE_5__ VAR_11 ;
 int FUNC_5 (struct clk*) ;
 struct clk* FUNC_6 (int *,char*) ;
 int FUNC_7 (struct clk*) ;
 int FUNC_8 (struct clk*) ;
 int FUNC_9 (struct clk*,int) ;
 int FUNC_10 (int *,int,int,int ) ;
 struct au1100fb_device* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int ,int ,int ) ;
 int FUNC_13 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_14 (TYPE_3__*,int ,int ) ;
 int FUNC_15 (TYPE_3__*) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,void*) ;
 int FUNC_18 (char*,int ,...) ;
 int FUNC_19 (char*,...) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (struct resource*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_12)
{
 struct au1100fb_device *VAR_13;
 struct resource *VAR_14;
 struct clk *VAR_15;


 VAR_13 = FUNC_11(&VAR_12->dev, sizeof(*VAR_13), VAR_7);
 if (!VAR_13)
  return -VAR_6;

 if (FUNC_4(VAR_13))
  goto failed;

 FUNC_17(VAR_12, (void *)VAR_13);
 VAR_13->dev = &VAR_12->dev;


 VAR_14 = FUNC_16(VAR_12, VAR_8, 0);
 if (!VAR_14) {
  FUNC_19("fail to retrieve registers resource");
  return -VAR_4;
 }

 VAR_9.mmio_start = VAR_14->start;
 VAR_9.mmio_len = FUNC_21(VAR_14);

 if (!FUNC_12(&VAR_12->dev,
         VAR_9.mmio_start,
         VAR_9.mmio_len,
         VAR_2)) {
  FUNC_19("fail to lock memory region at 0x%08lx",
    VAR_9.mmio_start);
  return -VAR_3;
 }

 VAR_13->regs = (struct au1100fb_regs*)FUNC_1(VAR_9.mmio_start);

 FUNC_18("Register memory map at %p", VAR_13->regs);
 FUNC_18("phys=0x%08x, size=%d", VAR_13->regs_phys, VAR_13->regs_len);

 VAR_15 = FUNC_6(((void*)0), "lcd_intclk");
 if (!FUNC_0(VAR_15)) {
  VAR_13->lcdclk = VAR_15;
  FUNC_9(VAR_15, 48000000);
  FUNC_7(VAR_15);
 }


 VAR_13->fb_len = VAR_13->panel->xres * VAR_13->panel->yres *
     (VAR_13->panel->bpp >> 3) * VAR_0;

 VAR_13->fb_mem = FUNC_13(&VAR_12->dev,
         FUNC_2(VAR_13->fb_len),
         &VAR_13->fb_phys, VAR_7);
 if (!VAR_13->fb_mem) {
  FUNC_19("fail to allocate framebuffer (size: %dK))",
     VAR_13->fb_len / 1024);
  return -VAR_6;
 }

 VAR_9.smem_start = VAR_13->fb_phys;
 VAR_9.smem_len = VAR_13->fb_len;

 FUNC_18("Framebuffer memory map at %p", VAR_13->fb_mem);
 FUNC_18("phys=0x%08x, size=%dK", VAR_13->fb_phys, VAR_13->fb_len / 1024);


 VAR_11.bits_per_pixel = VAR_13->panel->bpp;
 VAR_11.xres = VAR_13->panel->xres;
 VAR_11.xres_virtual = VAR_11.xres;
 VAR_11.yres = VAR_13->panel->yres;
 VAR_11.yres_virtual = VAR_11.yres;

 VAR_13->info.screen_base = VAR_13->fb_mem;
 VAR_13->info.fbops = &VAR_10;
 VAR_13->info.fix = VAR_9;

 VAR_13->info.pseudo_palette =
  FUNC_10(&VAR_12->dev, 16, sizeof(u32), VAR_7);
 if (!VAR_13->info.pseudo_palette)
  return -VAR_6;

 if (FUNC_14(&VAR_13->info.cmap, VAR_1, 0) < 0) {
  FUNC_19("Fail to allocate colormap (%d entries)",
      VAR_1);
  return -VAR_4;
 }

 VAR_13->info.var = VAR_11;


 FUNC_3(VAR_13);


 if (FUNC_20(&VAR_13->info) < 0) {
  FUNC_19("cannot register new framebuffer");
  goto failed;
 }

 return 0;

failed:
 if (VAR_13->lcdclk) {
  FUNC_5(VAR_13->lcdclk);
  FUNC_8(VAR_13->lcdclk);
 }
 if (VAR_13->info.cmap.len != 0) {
  FUNC_15(&VAR_13->info.cmap);
 }

 return -VAR_5;
}
