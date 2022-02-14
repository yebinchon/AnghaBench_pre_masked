
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct lcd_device {int dummy; } ;
struct TYPE_8__ {int activate; int height; int width; int vmode; int bits_per_pixel; } ;
struct TYPE_7__ {int mmio_start; int smem_start; int id; int accel; int type; void* mmio_len; } ;
struct fb_info {int cmap; TYPE_3__ var; TYPE_2__ fix; int flags; int * fbops; struct lcd_device* screen_base; TYPE_5__* apertures; struct clps711x_fb_info* par; } ;
struct device_node {int dummy; } ;
struct clps711x_fb_info {struct lcd_device* syscon; int mode; struct lcd_device* lcd_pwr; void* buffsize; scalar_t__ base; int cmap_invert; int ac_prescale; struct lcd_device* clk; } ;
struct TYPE_9__ {TYPE_1__* ranges; } ;
struct TYPE_6__ {int base; void* size; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
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
 scalar_t__ FUNC_1 (struct lcd_device*) ;
 int VAR_16 ;
 int FUNC_2 (struct lcd_device*) ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_5__* FUNC_3 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct device*,char*) ;
 struct lcd_device* FUNC_5 (struct device*,int *) ;
 scalar_t__ FUNC_6 (struct device*,int,void*) ;
 struct lcd_device* FUNC_7 (struct device*,struct resource*) ;
 struct lcd_device* FUNC_8 (struct device*,char*,struct device*,struct clps711x_fb_info*,int *) ;
 struct lcd_device* FUNC_9 (struct device*,char*) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (struct fb_info*,TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 struct fb_info* FUNC_15 (int,struct device*) ;
 int FUNC_16 (struct fb_info*) ;
 int FUNC_17 (struct lcd_device*,int ,void*) ;
 int FUNC_18 (struct device_node*,int *,int ) ;
 int FUNC_19 (struct device_node*) ;
 struct device_node* FUNC_20 (struct device_node*,char*,int ) ;
 int FUNC_21 (struct device_node*,char*) ;
 int FUNC_22 (struct device_node*,char*,int *) ;
 struct resource* FUNC_23 (struct platform_device*,int ,int) ;
 int FUNC_24 (struct platform_device*,struct fb_info*) ;
 int FUNC_25 (scalar_t__) ;
 int FUNC_26 (struct fb_info*) ;
 int FUNC_27 (struct lcd_device*,int ,int*) ;
 int FUNC_28 (struct lcd_device*,int ,int,int ) ;
 void* FUNC_29 (struct resource*) ;
 int FUNC_30 (int ,int ,int) ;
 struct lcd_device* FUNC_31 (char*) ;
 int FUNC_32 (struct fb_info*) ;
 int FUNC_33 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_21)
{
 struct device *VAR_22 = &VAR_21->dev;
 struct device_node *VAR_23, *VAR_24 = VAR_22->of_node;
 struct clps711x_fb_info *VAR_25;
 struct lcd_device *VAR_26;
 struct fb_info *VAR_27;
 struct resource *VAR_28;
 int VAR_29 = -VAR_6;
 u32 VAR_30;

 if (FUNC_12(VAR_2, ((void*)0)))
  return -VAR_5;

 VAR_27 = FUNC_15(sizeof(*VAR_25), VAR_22);
 if (!VAR_27)
  return -VAR_7;

 VAR_25 = VAR_27->par;
 FUNC_24(VAR_21, VAR_27);

 VAR_28 = FUNC_23(VAR_21, VAR_15, 0);
 if (!VAR_28)
  goto out_fb_release;
 VAR_25->base = FUNC_6(VAR_22, VAR_28->start, FUNC_29(VAR_28));
 if (!VAR_25->base) {
  VAR_29 = -VAR_7;
  goto out_fb_release;
 }

 VAR_27->fix.mmio_start = VAR_28->start;
 VAR_27->fix.mmio_len = FUNC_29(VAR_28);

 VAR_28 = FUNC_23(VAR_21, VAR_15, 1);
 VAR_27->screen_base = FUNC_7(VAR_22, VAR_28);
 if (FUNC_1(VAR_27->screen_base)) {
  VAR_29 = FUNC_2(VAR_27->screen_base);
  goto out_fb_release;
 }


 if (VAR_28->start & 0x0fffffff) {
  VAR_29 = -VAR_3;
  goto out_fb_release;
 }

 VAR_27->apertures = FUNC_3(1);
 if (!VAR_27->apertures) {
  VAR_29 = -VAR_7;
  goto out_fb_release;
 }

 VAR_25->buffsize = FUNC_29(VAR_28);
 VAR_27->fix.smem_start = VAR_28->start;
 VAR_27->apertures->ranges[0].base = VAR_27->fix.smem_start;
 VAR_27->apertures->ranges[0].size = VAR_25->buffsize;

 VAR_25->clk = FUNC_5(VAR_22, ((void*)0));
 if (FUNC_1(VAR_25->clk)) {
  VAR_29 = FUNC_2(VAR_25->clk);
  goto out_fb_release;
 }

 VAR_25->syscon =
  FUNC_31("cirrus,ep7209-syscon1");
 if (FUNC_1(VAR_25->syscon)) {
  VAR_29 = FUNC_2(VAR_25->syscon);
  goto out_fb_release;
 }

 VAR_23 = FUNC_20(VAR_24, "display", 0);
 if (!VAR_23) {
  FUNC_4(&VAR_21->dev, "No display defined\n");
  VAR_29 = -VAR_4;
  goto out_fb_release;
 }

 VAR_29 = FUNC_18(VAR_23, &VAR_25->mode, VAR_16);
 if (VAR_29) {
  FUNC_19(VAR_23);
  goto out_fb_release;
 }

 FUNC_22(VAR_23, "ac-prescale", &VAR_25->ac_prescale);
 VAR_25->cmap_invert = FUNC_21(VAR_23, "cmap-invert");

 VAR_29 = FUNC_22(VAR_23, "bits-per-pixel",
       &VAR_27->var.bits_per_pixel);
 FUNC_19(VAR_23);
 if (VAR_29)
  goto out_fb_release;


 if (VAR_27->fix.smem_start != (FUNC_25(VAR_25->base + VAR_0) << 28))
  FUNC_28(VAR_25->syscon, VAR_18,
       VAR_17, 0);

 VAR_29 = FUNC_27(VAR_25->syscon, VAR_18, &VAR_30);
 if (VAR_29)
  goto out_fb_release;

 if (!(VAR_30 & VAR_17)) {

  FUNC_33(VAR_27->fix.smem_start >> 28, VAR_25->base + VAR_0);

  FUNC_17(VAR_27->screen_base, 0, VAR_25->buffsize);
 }

 VAR_25->lcd_pwr = FUNC_9(VAR_22, "lcd");
 if (FUNC_2(VAR_25->lcd_pwr) == -VAR_8) {
  VAR_29 = -VAR_8;
  goto out_fb_release;
 }

 VAR_27->fbops = &VAR_19;
 VAR_27->flags = VAR_9;
 VAR_27->var.activate = VAR_11 | VAR_12;
 VAR_27->var.height = -1;
 VAR_27->var.width = -1;
 VAR_27->var.vmode = VAR_14;
 VAR_27->fix.type = VAR_13;
 VAR_27->fix.accel = VAR_10;
 FUNC_30(VAR_27->fix.id, VAR_2, sizeof(VAR_27->fix.id));
 FUNC_14(&VAR_27->var, &VAR_25->mode);

 VAR_29 = FUNC_10(&VAR_27->cmap, FUNC_0(VAR_1), 0);
 if (VAR_29)
  goto out_fb_release;

 VAR_29 = FUNC_13(VAR_27, &VAR_27->var);
 if (VAR_29)
  goto out_fb_dealloc_cmap;

 VAR_29 = FUNC_26(VAR_27);
 if (VAR_29)
  goto out_fb_dealloc_cmap;

 VAR_26 = FUNC_8(VAR_22, "clps711x-lcd", VAR_22, VAR_25,
           &VAR_20);
 if (!FUNC_1(VAR_26))
  return 0;

 VAR_29 = FUNC_2(VAR_26);
 FUNC_32(VAR_27);

out_fb_dealloc_cmap:
 FUNC_28(VAR_25->syscon, VAR_18, VAR_17, 0);
 FUNC_11(&VAR_27->cmap);

out_fb_release:
 FUNC_16(VAR_27);

 return VAR_29;
}
