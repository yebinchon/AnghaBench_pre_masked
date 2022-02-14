
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct i740fb_par {int has_sgram; int ddc_registered; int regs; int ddc_adapter; int wc_cookie; int pseudo_palette; int open_lock; } ;
struct fb_videomode {int dummy; } ;
struct TYPE_7__ {int smem_len; void* smem_start; int id; int mmio_len; void* mmio_start; } ;
struct TYPE_8__ {int bits_per_pixel; int yres_virtual; int xres_virtual; int activate; } ;
struct TYPE_9__ {int * modedb; int modedb_len; } ;
struct fb_info {int screen_size; int flags; int screen_base; int cmap; TYPE_1__ fix; int device; TYPE_2__ var; TYPE_5__ monspecs; int modelist; int pseudo_palette; int * fbops; struct i740fb_par* par; } ;


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
 scalar_t__ VAR_13 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,int,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 struct fb_videomode* FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_2__*,struct fb_info*,char*,int *,int ,int *,int) ;
 int FUNC_9 (struct fb_info*,char*,int ,...) ;
 int FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (TYPE_2__*,struct fb_videomode const*) ;
 struct fb_info* FUNC_12 (int,int *) ;
 int FUNC_13 (struct fb_info*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*,struct fb_info*) ;
 TYPE_1__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_16 (struct fb_info*) ;
 int FUNC_17 (struct i740fb_par*,scalar_t__) ;
 int FUNC_18 (struct i740fb_par*,scalar_t__,int ) ;
 int FUNC_19 (struct i740fb_par*,scalar_t__,int ) ;
 int FUNC_20 (int *) ;
 char* VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*,int) ;
 int FUNC_24 (struct pci_dev*,int ) ;
 int FUNC_25 (struct pci_dev*,int ) ;
 int FUNC_26 (struct pci_dev*) ;
 int FUNC_27 (struct pci_dev*) ;
 int FUNC_28 (struct pci_dev*,int ) ;
 int FUNC_29 (struct pci_dev*,int) ;
 void* FUNC_30 (struct pci_dev*,int) ;
 int FUNC_31 (struct pci_dev*,struct fb_info*) ;
 int FUNC_32 (struct fb_info*) ;

__attribute__((used)) static int FUNC_33(struct pci_dev *VAR_18, const struct pci_device_id *VAR_19)
{
 struct fb_info *VAR_20;
 struct i740fb_par *VAR_21;
 int VAR_22, VAR_23;
 bool VAR_24 = 0;
 u8 *VAR_25;

 VAR_20 = FUNC_12(sizeof(struct i740fb_par), &(VAR_18->dev));
 if (!VAR_20)
  return -VAR_9;

 VAR_21 = VAR_20->par;
 FUNC_21(&VAR_21->open_lock);

 VAR_20->var.activate = VAR_12;
 VAR_20->var.bits_per_pixel = 8;
 VAR_20->fbops = &VAR_15;
 VAR_20->pseudo_palette = VAR_21->pseudo_palette;

 VAR_22 = FUNC_22(VAR_18);
 if (VAR_22) {
  FUNC_1(VAR_20->device, "cannot enable PCI device\n");
  goto err_enable_device;
 }

 VAR_22 = FUNC_28(VAR_18, VAR_20->fix.id);
 if (VAR_22) {
  FUNC_1(VAR_20->device, "error requesting regions\n");
  goto err_request_regions;
 }

 VAR_20->screen_base = FUNC_24(VAR_18, 0);
 if (!VAR_20->screen_base) {
  FUNC_1(VAR_20->device, "error remapping base\n");
  VAR_22 = -VAR_9;
  goto err_ioremap_1;
 }

 VAR_21->regs = FUNC_23(VAR_18, 1);
 if (!VAR_21->regs) {
  FUNC_1(VAR_20->device, "error remapping MMIO\n");
  VAR_22 = -VAR_9;
  goto err_ioremap_2;
 }


 if ((FUNC_18(VAR_21, VAR_13, VAR_7) & VAR_2)
       == VAR_3)
  FUNC_19(VAR_21, VAR_13, VAR_5);
 else
  FUNC_19(VAR_21, VAR_13, VAR_4);
 VAR_20->screen_size = FUNC_17(VAR_21, VAR_13 + 1) * 1024 * 1024;

 VAR_23 = FUNC_18(VAR_21, VAR_13, VAR_6);
 VAR_21->has_sgram = !((VAR_23 & VAR_1) ||
      (VAR_23 & VAR_0));

 FUNC_9(VAR_20, "Intel740 on %s, %ld KB %s\n",
  FUNC_26(VAR_18), VAR_20->screen_size >> 10,
  VAR_21->has_sgram ? "SGRAM" : "SDRAM");

 VAR_20->fix = VAR_14;
 VAR_20->fix.mmio_start = FUNC_30(VAR_18, 1);
 VAR_20->fix.mmio_len = FUNC_29(VAR_18, 1);
 VAR_20->fix.smem_start = FUNC_30(VAR_18, 0);
 VAR_20->fix.smem_len = VAR_20->screen_size;
 VAR_20->flags = VAR_10 | VAR_11;

 if (FUNC_16(VAR_20) == 0) {
  VAR_21->ddc_registered = 1;
  VAR_25 = FUNC_3(&VAR_21->ddc_adapter);
  if (VAR_25) {
   FUNC_6(VAR_25, &VAR_20->monspecs);
   FUNC_20(VAR_25);
   if (!VAR_20->monspecs.modedb)
    FUNC_1(VAR_20->device,
     "error getting mode database\n");
   else {
    const struct fb_videomode *VAR_26;

    FUNC_10(
     VAR_20->monspecs.modedb,
     VAR_20->monspecs.modedb_len,
     &VAR_20->modelist);
    VAR_26 = FUNC_7(&VAR_20->monspecs,
        &VAR_20->modelist);
    if (VAR_26) {
     FUNC_11(&VAR_20->var, VAR_26);

     if (!FUNC_15(&VAR_20->var, VAR_20))
      VAR_24 = 1;
    }
   }
  }
 }

 if (!VAR_16 && !VAR_24)
  VAR_16 = "640x480-8@60";

 if (VAR_16) {
  VAR_22 = FUNC_8(&VAR_20->var, VAR_20, VAR_16,
       VAR_20->monspecs.modedb,
       VAR_20->monspecs.modedb_len,
       ((void*)0), VAR_20->var.bits_per_pixel);
  if (!VAR_22 || VAR_22 == 4) {
   FUNC_1(VAR_20->device, "mode %s not found\n",
    VAR_16);
   VAR_22 = -VAR_8;
  }
 }

 FUNC_5(VAR_20->monspecs.modedb);
 VAR_20->monspecs.modedb = ((void*)0);


 VAR_20->var.yres_virtual = VAR_20->fix.smem_len * 8 /
   (VAR_20->var.bits_per_pixel * VAR_20->var.xres_virtual);

 if (VAR_22 == -VAR_8)
  goto err_find_mode;

 VAR_22 = FUNC_2(&VAR_20->cmap, 256, 0);
 if (VAR_22) {
  FUNC_1(VAR_20->device, "cannot allocate colormap\n");
  goto err_alloc_cmap;
 }

 VAR_22 = FUNC_32(VAR_20);
 if (VAR_22) {
  FUNC_1(VAR_20->device, "error registering framebuffer\n");
  goto err_reg_framebuffer;
 }

 FUNC_9(VAR_20, "%s frame buffer device\n", VAR_20->fix.id);
 FUNC_31(VAR_18, VAR_20);
 if (VAR_17)
  VAR_21->wc_cookie = FUNC_0(VAR_20->fix.smem_start,
        VAR_20->fix.smem_len);
 return 0;

err_reg_framebuffer:
 FUNC_4(&VAR_20->cmap);
err_alloc_cmap:
err_find_mode:
 if (VAR_21->ddc_registered)
  FUNC_14(&VAR_21->ddc_adapter);
 FUNC_25(VAR_18, VAR_21->regs);
err_ioremap_2:
 FUNC_25(VAR_18, VAR_20->screen_base);
err_ioremap_1:
 FUNC_27(VAR_18);
err_request_regions:

err_enable_device:
 FUNC_13(VAR_20);
 return VAR_22;
}
