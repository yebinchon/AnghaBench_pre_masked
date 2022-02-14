
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct geodefb_par {scalar_t__ dc_regs; scalar_t__ vid_regs; int * vid_ops; int * dc_ops; } ;
struct TYPE_2__ {int id; int smem_len; } ;
struct fb_info {int cmap; scalar_t__ screen_base; TYPE_1__ fix; int var; struct geodefb_par* par; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct fb_info*,int ,int ,int ,int *,int) ;
 int FUNC_4 (struct fb_info*,char*,int ) ;
 int FUNC_5 (struct fb_info*) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (int *,struct fb_info*) ;
 struct fb_info* FUNC_8 (int *) ;
 int FUNC_9 (struct fb_info*,struct pci_dev*) ;
 int FUNC_10 (struct fb_info*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int VAR_5 ;
 int FUNC_13 (struct pci_dev*,int) ;
 int FUNC_14 (struct pci_dev*,struct fb_info*) ;
 scalar_t__ FUNC_15 (struct fb_info*) ;
 int FUNC_16 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct geodefb_par *VAR_8;
 struct fb_info *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_8(&VAR_6->dev);
 if (!VAR_9)
  return -VAR_1;
 VAR_8 = VAR_9->par;


 VAR_8->dc_ops = &VAR_3;
 VAR_8->vid_ops = &VAR_2;

 if ((VAR_10 = FUNC_9(VAR_9, VAR_6)) < 0) {
  FUNC_1(&VAR_6->dev, "failed to map frame buffer or controller registers\n");
  goto err;
 }

 VAR_10 = FUNC_3(&VAR_9->var, VAR_9, VAR_5,
      VAR_4, FUNC_0(VAR_4), ((void*)0), 16);
 if (VAR_10 == 0 || VAR_10 == 4) {
  FUNC_1(&VAR_6->dev, "could not find valid video mode\n");
  VAR_10 = -VAR_0;
  goto err;
 }


        FUNC_12(VAR_9->screen_base, 0, VAR_9->fix.smem_len);

 FUNC_7(&VAR_9->var, VAR_9);
 FUNC_10(VAR_9);

 if (FUNC_15(VAR_9) < 0) {
  VAR_10 = -VAR_0;
  goto err;
 }
 FUNC_14(VAR_6, VAR_9);
 FUNC_4(VAR_9, "%s frame buffer device\n", VAR_9->fix.id);
 return 0;

  err:
 if (VAR_9->screen_base) {
  FUNC_11(VAR_9->screen_base);
  FUNC_13(VAR_6, 0);
 }
 if (VAR_8->vid_regs) {
  FUNC_11(VAR_8->vid_regs);
  FUNC_13(VAR_6, 1);
 }
 if (VAR_8->dc_regs) {
  FUNC_11(VAR_8->dc_regs);
  FUNC_16(FUNC_6() + 0x8300, 0x100);
 }

 FUNC_2(&VAR_9->cmap);
 FUNC_5(VAR_9);

 return VAR_10;
}
