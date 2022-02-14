
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int dummy; } ;
struct pxafb_mach_info {int num_modes; int pxafb_lcd_power; int pxafb_backlight_power; scalar_t__ acceleration_enabled; TYPE_6__* modes; } ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_8__ {int accel; } ;
struct TYPE_9__ {TYPE_5__ cmap; int var; TYPE_1__ fix; } ;
struct TYPE_12__ {int notifier_call; } ;
struct pxafb_info {int dma_buff_phys; int * dma_buff; int dma_buff_size; int video_mem_size; int video_mem; TYPE_2__ fb; TYPE_7__ freq_transition; int dev; struct pxafb_info* mmio_base; struct pxafb_info* lcd_supply; int lcd_power; int backlight_power; } ;
struct pxafb_dma_buff {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_11__ {scalar_t__ xres; scalar_t__ yres; scalar_t__ bpp; } ;


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
 scalar_t__ FUNC_0 (struct pxafb_info*) ;
 scalar_t__ FUNC_1 (struct pxafb_mach_info*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pxafb_info*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*,...) ;
 struct pxafb_mach_info* FUNC_8 (int *) ;
 struct pxafb_info* FUNC_9 (int *,struct resource*) ;
 struct pxafb_mach_info* FUNC_10 (int *,int,int ) ;
 TYPE_6__* FUNC_11 (int *,int,int,int ) ;
 struct pxafb_info* FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int,int ,int ,char*,struct pxafb_info*) ;
 int * FUNC_14 (int ,int ,int *,int ) ;
 int FUNC_15 (int *,int ,int *,int ) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (int ,int ) ;
 int VAR_10 ;
 struct pxafb_mach_info* FUNC_18 (int *) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct pxafb_info*) ;
 int FUNC_22 (int *,struct pxafb_mach_info*) ;
 int FUNC_23 (int *,TYPE_2__*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct pxafb_info* FUNC_24 (int *,struct pxafb_mach_info*) ;
 int FUNC_25 (struct pxafb_info*) ;
 int FUNC_26 (struct pxafb_info*) ;
 int FUNC_27 (int *,int ,struct pxafb_mach_info*) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (struct pxafb_info*) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (struct pxafb_info*,int ) ;

__attribute__((used)) static int FUNC_32(struct platform_device *VAR_13)
{
 struct pxafb_info *VAR_14;
 struct pxafb_mach_info *VAR_15, *VAR_16;
 struct resource *VAR_17;
 int VAR_18, VAR_19, VAR_20;

 FUNC_6(&VAR_13->dev, "pxafb_probe\n");

 VAR_20 = -VAR_5;
 VAR_16 = FUNC_8(&VAR_13->dev);
 VAR_15 = FUNC_10(&VAR_13->dev, sizeof(*VAR_15), VAR_8);
 if (!VAR_15)
  goto failed;

 if (VAR_16) {
  *VAR_15 = *VAR_16;
  VAR_15->modes =
   FUNC_11(&VAR_13->dev, VAR_16->num_modes,
        sizeof(VAR_15->modes[0]), VAR_8);
  if (!VAR_15->modes)
   goto failed;
  for (VAR_18 = 0; VAR_18 < VAR_15->num_modes; VAR_18++)
   VAR_15->modes[VAR_18] = VAR_16->modes[VAR_18];
 }

 if (!VAR_16)
  VAR_15 = FUNC_18(&VAR_13->dev);
 if (FUNC_1(VAR_15))
  goto failed;

 VAR_20 = FUNC_27(&VAR_13->dev, VAR_10, VAR_15);
 if (VAR_20 < 0)
  goto failed;

 FUNC_22(&VAR_13->dev, VAR_15);

 FUNC_6(&VAR_13->dev, "got a %dx%dx%d LCD\n",
   VAR_15->modes->xres,
   VAR_15->modes->yres,
   VAR_15->modes->bpp);
 if (VAR_15->modes->xres == 0 ||
     VAR_15->modes->yres == 0 ||
     VAR_15->modes->bpp == 0) {
  FUNC_7(&VAR_13->dev, "Invalid resolution or bit depth\n");
  VAR_20 = -VAR_3;
  goto failed;
 }

 VAR_14 = FUNC_24(&VAR_13->dev, VAR_15);
 if (FUNC_0(VAR_14)) {
  FUNC_7(&VAR_13->dev, "Failed to initialize framebuffer device\n");
  VAR_20 = FUNC_3(VAR_14);
  goto failed;
 }

 if (FUNC_4() && VAR_15->acceleration_enabled)
  VAR_14->fb.fix.accel = VAR_7;

 VAR_14->backlight_power = VAR_15->pxafb_backlight_power;
 VAR_14->lcd_power = VAR_15->pxafb_lcd_power;

 VAR_14->lcd_supply = FUNC_12(&VAR_13->dev, "lcd");
 if (FUNC_0(VAR_14->lcd_supply)) {
  if (FUNC_3(VAR_14->lcd_supply) == -VAR_6)
   return -VAR_6;

  VAR_14->lcd_supply = ((void*)0);
 }

 VAR_17 = FUNC_20(VAR_13, VAR_9, 0);
 if (VAR_17 == ((void*)0)) {
  FUNC_7(&VAR_13->dev, "no I/O memory resource defined\n");
  VAR_20 = -VAR_4;
  goto failed;
 }

 VAR_14->mmio_base = FUNC_9(&VAR_13->dev, VAR_17);
 if (FUNC_0(VAR_14->mmio_base)) {
  FUNC_7(&VAR_13->dev, "failed to get I/O memory\n");
  VAR_20 = -VAR_2;
  goto failed;
 }

 VAR_14->dma_buff_size = FUNC_2(sizeof(struct pxafb_dma_buff));
 VAR_14->dma_buff = FUNC_14(VAR_14->dev, VAR_14->dma_buff_size,
    &VAR_14->dma_buff_phys, VAR_8);
 if (VAR_14->dma_buff == ((void*)0)) {
  FUNC_7(&VAR_13->dev, "failed to allocate memory for DMA\n");
  VAR_20 = -VAR_5;
  goto failed;
 }

 VAR_20 = FUNC_25(VAR_14);
 if (VAR_20) {
  FUNC_7(&VAR_13->dev, "Failed to allocate video RAM: %d\n", VAR_20);
  VAR_20 = -VAR_5;
  goto failed_free_dma;
 }

 VAR_19 = FUNC_19(VAR_13, 0);
 if (VAR_19 < 0) {
  FUNC_7(&VAR_13->dev, "no IRQ defined\n");
  VAR_20 = -VAR_4;
  goto failed_free_mem;
 }

 VAR_20 = FUNC_13(&VAR_13->dev, VAR_19, VAR_12, 0, "LCD", VAR_14);
 if (VAR_20) {
  FUNC_7(&VAR_13->dev, "request_irq failed: %d\n", VAR_20);
  VAR_20 = -VAR_2;
  goto failed_free_mem;
 }

 VAR_20 = FUNC_29(VAR_14);
 if (VAR_20) {
  FUNC_7(&VAR_13->dev, "failed to initialize smartpanel\n");
  goto failed_free_mem;
 }





 VAR_20 = FUNC_23(&VAR_14->fb.var, &VAR_14->fb);
 if (VAR_20) {
  FUNC_7(&VAR_13->dev, "failed to get suitable mode\n");
  goto failed_free_mem;
 }

 VAR_20 = FUNC_28(&VAR_14->fb);
 if (VAR_20) {
  FUNC_7(&VAR_13->dev, "Failed to set parameters\n");
  goto failed_free_mem;
 }

 FUNC_21(VAR_13, VAR_14);

 VAR_20 = FUNC_30(&VAR_14->fb);
 if (VAR_20 < 0) {
  FUNC_7(&VAR_13->dev,
   "Failed to register framebuffer device: %d\n", VAR_20);
  goto failed_free_cmap;
 }

 FUNC_26(VAR_14);
 FUNC_31(VAR_14, VAR_1);

 return 0;

failed_free_cmap:
 if (VAR_14->fb.cmap.len)
  FUNC_16(&VAR_14->fb.cmap);
failed_free_mem:
 FUNC_17(VAR_14->video_mem, VAR_14->video_mem_size);
failed_free_dma:
 FUNC_15(&VAR_13->dev, VAR_14->dma_buff_size,
   VAR_14->dma_buff, VAR_14->dma_buff_phys);
failed:
 return VAR_20;
}
