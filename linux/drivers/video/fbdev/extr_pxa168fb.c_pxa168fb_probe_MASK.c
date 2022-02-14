
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct pxa168fb_mach_info {int io_pin_allocation_mode; int num_modes; int modes; int pix_fmt; int id; int active; int panel_rbswap; } ;
struct pxa168fb_info {scalar_t__ fb_start_dma; int * dev; struct clk* clk; int * reg_base; int pseudo_palette; int active; scalar_t__ is_blanked; int panel_rbswap; struct fb_info* info; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {unsigned long smem_start; int smem_len; int id; int accel; int mmio_len; int mmio_start; scalar_t__ ywrapstep; scalar_t__ ypanstep; scalar_t__ xpanstep; scalar_t__ type_aux; int type; } ;
struct fb_info {int flags; int node; int * screen_base; TYPE_1__ fix; int cmap; int var; int modelist; int pseudo_palette; int * fbops; int * dev; struct pxa168fb_info* par; } ;
struct clk {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
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
 int FUNC_3 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (struct clk*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct clk*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (struct clk*) ;
 int FUNC_8 (struct clk*) ;
 int FUNC_9 (int *,char*,...) ;
 struct pxa168fb_mach_info* FUNC_10 (int *) ;
 struct clk* FUNC_11 (int *,char*) ;
 int * FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,int,int ,int ,int ,struct pxa168fb_info*) ;
 int * FUNC_14 (int *,int ,scalar_t__*,int ) ;
 int FUNC_15 (int *,int ,int *,scalar_t__) ;
 scalar_t__ FUNC_16 (int *,int,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ,int *) ;
 struct fb_info* FUNC_19 (int,int *) ;
 int FUNC_20 (struct fb_info*) ;
 int FUNC_21 (struct platform_device*,int ) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int ) ;
 int FUNC_23 (struct platform_device*,struct pxa168fb_info*) ;
 int FUNC_24 (int *,struct fb_info*) ;
 int VAR_21 ;
 int FUNC_25 (struct fb_info*,struct pxa168fb_mach_info*) ;
 int VAR_22 ;
 int FUNC_26 (struct fb_info*) ;
 int FUNC_27 (struct fb_info*) ;
 int FUNC_28 (struct resource*) ;
 int FUNC_29 (struct fb_info*,int ,int ) ;
 int FUNC_30 (struct pxa168fb_info*,int *,int ,int ,int) ;
 int FUNC_31 (int ,int ,int) ;
 int FUNC_32 (int,int *) ;

__attribute__((used)) static int FUNC_33(struct platform_device *VAR_23)
{
 struct pxa168fb_mach_info *VAR_24;
 struct fb_info *VAR_25 = 0;
 struct pxa168fb_info *VAR_26 = 0;
 struct resource *VAR_27;
 struct clk *VAR_28;
 int VAR_29, VAR_30;

 VAR_24 = FUNC_10(&VAR_23->dev);
 if (VAR_24 == ((void*)0)) {
  FUNC_9(&VAR_23->dev, "no platform data defined\n");
  return -VAR_1;
 }

 VAR_28 = FUNC_11(&VAR_23->dev, "LCDCLK");
 if (FUNC_4(VAR_28)) {
  FUNC_9(&VAR_23->dev, "unable to get LCDCLK");
  return FUNC_6(VAR_28);
 }

 VAR_27 = FUNC_22(VAR_23, VAR_12, 0);
 if (VAR_27 == ((void*)0)) {
  FUNC_9(&VAR_23->dev, "no IO memory defined\n");
  return -VAR_2;
 }

 VAR_29 = FUNC_21(VAR_23, 0);
 if (VAR_29 < 0) {
  FUNC_9(&VAR_23->dev, "no IRQ defined\n");
  return -VAR_2;
 }

 VAR_25 = FUNC_19(sizeof(struct pxa168fb_info), &VAR_23->dev);
 if (VAR_25 == ((void*)0)) {
  return -VAR_3;
 }


 VAR_26 = VAR_25->par;
 VAR_26->info = VAR_25;
 VAR_26->clk = VAR_28;
 VAR_26->dev = VAR_25->dev = &VAR_23->dev;
 VAR_26->panel_rbswap = VAR_24->panel_rbswap;
 VAR_26->is_blanked = 0;
 VAR_26->active = VAR_24->active;




 VAR_25->flags = VAR_5 | VAR_8 |
        VAR_6 | VAR_7;
 VAR_25->node = -1;
 FUNC_31(VAR_25->fix.id, VAR_24->id, 16);
 VAR_25->fix.type = VAR_10;
 VAR_25->fix.type_aux = 0;
 VAR_25->fix.xpanstep = 0;
 VAR_25->fix.ypanstep = 0;
 VAR_25->fix.ywrapstep = 0;
 VAR_25->fix.mmio_start = VAR_27->start;
 VAR_25->fix.mmio_len = FUNC_28(VAR_27);
 VAR_25->fix.accel = VAR_9;
 VAR_25->fbops = &VAR_22;
 VAR_25->pseudo_palette = VAR_26->pseudo_palette;




 VAR_26->reg_base = FUNC_12(&VAR_23->dev, VAR_27->start,
          FUNC_28(VAR_27));
 if (VAR_26->reg_base == ((void*)0)) {
  VAR_30 = -VAR_3;
  goto failed_free_info;
 }




 VAR_25->fix.smem_len = FUNC_5(VAR_0);

 VAR_25->screen_base = FUNC_14(VAR_26->dev, VAR_25->fix.smem_len,
      &VAR_26->fb_start_dma, VAR_11);
 if (VAR_25->screen_base == ((void*)0)) {
  VAR_30 = -VAR_3;
  goto failed_free_info;
 }

 VAR_25->fix.smem_start = (unsigned long)VAR_26->fb_start_dma;
 FUNC_29(VAR_25, 0, 0);




 FUNC_30(VAR_26, &VAR_25->var, VAR_24->modes, VAR_24->pix_fmt, 1);

 FUNC_18(VAR_24->modes, VAR_24->num_modes, &VAR_25->modelist);




 FUNC_25(VAR_25, VAR_24);




 VAR_30 = FUNC_24(&VAR_25->var, VAR_25);
 if (VAR_30)
  goto failed_free_fbmem;




 FUNC_8(VAR_26->clk);

 FUNC_26(VAR_25);




 FUNC_32(0, VAR_26->reg_base + VAR_15);
 FUNC_32(VAR_24->io_pin_allocation_mode, VAR_26->reg_base + VAR_19);
 FUNC_32(0, VAR_26->reg_base + VAR_14);
 FUNC_32(0, VAR_26->reg_base + VAR_16);
 FUNC_32(0, VAR_26->reg_base + VAR_17);
 FUNC_32(FUNC_1(0x1)|FUNC_0(0x1)|FUNC_2(0x1),
  VAR_26->reg_base + VAR_18);




 if (FUNC_16(&VAR_25->cmap, 256, 0) < 0) {
  VAR_30 = -VAR_3;
  goto failed_free_clk;
 }




 VAR_30 = FUNC_13(&VAR_23->dev, VAR_29, VAR_21,
          VAR_13, VAR_25->fix.id, VAR_26);
 if (VAR_30 < 0) {
  FUNC_9(&VAR_23->dev, "unable to request IRQ\n");
  VAR_30 = -VAR_4;
  goto failed_free_cmap;
 }




 FUNC_32(FUNC_3(0x1), VAR_26->reg_base + VAR_20);




 VAR_30 = FUNC_27(VAR_25);
 if (VAR_30 < 0) {
  FUNC_9(&VAR_23->dev, "Failed to register pxa168-fb: %d\n", VAR_30);
  VAR_30 = -VAR_4;
  goto failed_free_cmap;
 }

 FUNC_23(VAR_23, VAR_26);
 return 0;

failed_free_cmap:
 FUNC_17(&VAR_25->cmap);
failed_free_clk:
 FUNC_7(VAR_26->clk);
failed_free_fbmem:
 FUNC_15(VAR_26->dev, VAR_25->fix.smem_len,
   VAR_25->screen_base, VAR_26->fb_start_dma);
failed_free_info:
 FUNC_20(VAR_25);

 FUNC_9(&VAR_23->dev, "frame buffer device init failed with %d\n", VAR_30);
 return VAR_30;
}
