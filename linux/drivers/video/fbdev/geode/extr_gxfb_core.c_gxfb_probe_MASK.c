
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct gxfb_par {int enable_crt; scalar_t__ gp_regs; scalar_t__ dc_regs; scalar_t__ vid_regs; } ;
struct fb_videomode {int dummy; } ;
struct TYPE_2__ {int id; int smem_len; } ;
struct fb_info {int cmap; scalar_t__ screen_base; TYPE_1__ fix; int var; struct gxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct fb_info*,int ,struct fb_videomode*,unsigned int,int *,int) ;
 int FUNC_3 (struct fb_info*,char*,int ) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct fb_videomode**,unsigned int*) ;
 int FUNC_6 (int *,struct fb_info*) ;
 struct fb_info* FUNC_7 (int *) ;
 int FUNC_8 (struct fb_info*,struct pci_dev*) ;
 int FUNC_9 (struct fb_info*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int ,int ) ;
 int VAR_4 ;
 int FUNC_12 (struct pci_dev*,int) ;
 int FUNC_13 (struct pci_dev*,struct fb_info*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,unsigned long) ;
 scalar_t__ FUNC_16 (struct fb_info*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct gxfb_par *VAR_8;
 struct fb_info *VAR_9;
 int VAR_10;
 unsigned long VAR_11;

 struct fb_videomode *VAR_12;
 unsigned int VAR_13;

 VAR_9 = FUNC_7(&VAR_6->dev);
 if (!VAR_9)
  return -VAR_1;
 VAR_8 = VAR_9->par;

 if ((VAR_10 = FUNC_8(VAR_9, VAR_6)) < 0) {
  FUNC_0(&VAR_6->dev, "failed to map frame buffer or controller registers\n");
  goto err;
 }



 FUNC_15(VAR_2, VAR_11);

 if ((VAR_11 & VAR_3) == VAR_3)
  VAR_8->enable_crt = 0;
 else
  VAR_8->enable_crt = 1;

 FUNC_5(&VAR_12, &VAR_13);
 VAR_10 = FUNC_2(&VAR_9->var, VAR_9, VAR_4,
      VAR_12, VAR_13, ((void*)0), 16);
 if (VAR_10 == 0 || VAR_10 == 4) {
  FUNC_0(&VAR_6->dev, "could not find valid video mode\n");
  VAR_10 = -VAR_0;
  goto err;
 }



        FUNC_11(VAR_9->screen_base, 0, VAR_9->fix.smem_len);

 FUNC_6(&VAR_9->var, VAR_9);
 FUNC_9(VAR_9);

 FUNC_14(VAR_5);

 if (FUNC_16(VAR_9) < 0) {
  VAR_10 = -VAR_0;
  goto err;
 }
 FUNC_13(VAR_6, VAR_9);
 FUNC_3(VAR_9, "%s frame buffer device\n", VAR_9->fix.id);
 return 0;

  err:
 if (VAR_9->screen_base) {
  FUNC_10(VAR_9->screen_base);
  FUNC_12(VAR_6, 0);
 }
 if (VAR_8->vid_regs) {
  FUNC_10(VAR_8->vid_regs);
  FUNC_12(VAR_6, 3);
 }
 if (VAR_8->dc_regs) {
  FUNC_10(VAR_8->dc_regs);
  FUNC_12(VAR_6, 2);
 }
 if (VAR_8->gp_regs) {
  FUNC_10(VAR_8->gp_regs);
  FUNC_12(VAR_6, 1);
 }

 FUNC_1(&VAR_9->cmap);
 FUNC_4(VAR_9);
 return VAR_10;
}
