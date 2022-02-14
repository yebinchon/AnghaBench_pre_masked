
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int smem_len; int smem_start; } ;
struct TYPE_5__ {int cmap; int flags; int pseudo_palette; scalar_t__ screen_base; TYPE_1__ fix; int var; struct ocfb_dev* par; int * device; int * fbops; } ;
struct ocfb_dev {int fb_phys; scalar_t__ fb_virt; TYPE_2__ info; scalar_t__ little_endian; int pseudo_palette; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct resource*) ;
 struct ocfb_dev* FUNC_5 (int *,int,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int *,int ) ;
 int FUNC_7 (int *,int ,scalar_t__,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_2__*,int ,int *,int ,int *,int) ;
 int FUNC_11 (scalar_t__,int ,int) ;
 int VAR_8 ;
 int FUNC_12 (struct ocfb_dev*) ;
 int FUNC_13 (struct ocfb_dev*) ;
 int VAR_9 ;
 int FUNC_14 (struct ocfb_dev*) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct ocfb_dev*) ;
 int FUNC_17 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_10)
{
 int VAR_11 = 0;
 struct ocfb_dev *VAR_12;
 struct resource *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_5(&VAR_10->dev, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_1;

 FUNC_16(VAR_10, VAR_12);

 VAR_12->info.fbops = &VAR_9;
 VAR_12->info.device = &VAR_10->dev;
 VAR_12->info.par = VAR_12;


 if (!FUNC_10(&VAR_12->info.var, &VAR_12->info, VAR_8,
     ((void*)0), 0, &VAR_7, 16)) {
  FUNC_3(&VAR_10->dev, "No valid video modes found\n");
  return -VAR_0;
 }
 FUNC_13(VAR_12);
 FUNC_12(VAR_12);


 VAR_13 = FUNC_15(VAR_10, VAR_5, 0);
 if (!VAR_13) {
  FUNC_3(&VAR_10->dev, "I/O resource request failed\n");
  return -VAR_2;
 }
 VAR_12->regs = FUNC_4(&VAR_10->dev, VAR_13);
 if (FUNC_0(VAR_12->regs))
  return FUNC_2(VAR_12->regs);


 VAR_14 = VAR_12->info.fix.smem_len;
 VAR_12->fb_virt = FUNC_6(&VAR_10->dev, FUNC_1(VAR_14),
         &VAR_12->fb_phys, VAR_4);
 if (!VAR_12->fb_virt) {
  FUNC_3(&VAR_10->dev,
   "Frame buffer memory allocation failed\n");
  return -VAR_1;
 }
 VAR_12->info.fix.smem_start = VAR_12->fb_phys;
 VAR_12->info.screen_base = VAR_12->fb_virt;
 VAR_12->info.pseudo_palette = VAR_12->pseudo_palette;


 FUNC_11(VAR_12->fb_virt, 0, VAR_14);


 FUNC_14(VAR_12);

 if (VAR_12->little_endian)
  VAR_12->info.flags |= VAR_3;


 VAR_11 = FUNC_8(&VAR_12->info.cmap, VAR_6, 0);
 if (VAR_11) {
  FUNC_3(&VAR_10->dev, "Color map allocation failed\n");
  goto err_dma_free;
 }


 VAR_11 = FUNC_17(&VAR_12->info);
 if (VAR_11) {
  FUNC_3(&VAR_10->dev, "Framebuffer registration failed\n");
  goto err_dealloc_cmap;
 }

 return 0;

err_dealloc_cmap:
 FUNC_9(&VAR_12->info.cmap);

err_dma_free:
 FUNC_7(&VAR_10->dev, FUNC_1(VAR_14), VAR_12->fb_virt,
     VAR_12->fb_phys);

 return VAR_11;
}
