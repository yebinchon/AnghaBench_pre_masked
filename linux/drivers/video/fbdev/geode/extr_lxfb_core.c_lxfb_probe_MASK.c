
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct lxfb_par {scalar_t__ vp_regs; scalar_t__ dc_regs; scalar_t__ gp_regs; int output; } ;
struct fb_videomode {int dummy; } ;
struct TYPE_2__ {int id; int smem_len; } ;
struct fb_info {int cmap; scalar_t__ screen_base; TYPE_1__ fix; int var; struct lxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct fb_info*,int ,struct fb_videomode*,unsigned int,int *,int) ;
 int FUNC_3 (struct fb_info*,char*,int ) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct fb_videomode**,unsigned int*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,struct fb_info*) ;
 struct fb_info* FUNC_8 (int *) ;
 int FUNC_9 (struct fb_info*,struct pci_dev*) ;
 int FUNC_10 (struct fb_info*) ;
 int FUNC_11 (scalar_t__,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (struct pci_dev*,int) ;
 int FUNC_13 (struct pci_dev*,struct fb_info*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct fb_info*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 struct lxfb_par *VAR_11;
 struct fb_info *VAR_12;
 int VAR_13;

 struct fb_videomode *VAR_14;
 unsigned int VAR_15;

 VAR_12 = FUNC_8(&VAR_9->dev);

 if (VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_11 = VAR_12->par;

 VAR_13 = FUNC_9(VAR_12, VAR_9);

 if (VAR_13 < 0) {
  FUNC_0(&VAR_9->dev,
   "failed to map frame buffer or controller registers\n");
  goto err;
 }



 VAR_11->output = 0;
 VAR_11->output |= (VAR_7) ? 0 : VAR_3;
 VAR_11->output |= (VAR_6) ? 0 : VAR_2;



 FUNC_5(&VAR_14, &VAR_15);
 VAR_13 = FUNC_2(&VAR_12->var, VAR_12, VAR_4,
      VAR_14, VAR_15, ((void*)0), 16);

 if (VAR_13 == 0 || VAR_13 == 4) {
  FUNC_0(&VAR_9->dev, "could not find valid video mode\n");
  VAR_13 = -VAR_0;
  goto err;
 }




 if (!VAR_5)
  FUNC_11(VAR_12->screen_base, 0, VAR_12->fix.smem_len);



 FUNC_7(&VAR_12->var, VAR_12);
 FUNC_10(VAR_12);

 FUNC_14(VAR_8);

 if (FUNC_15(VAR_12) < 0) {
  VAR_13 = -VAR_0;
  goto err;
 }
 FUNC_13(VAR_9, VAR_12);
 FUNC_3(VAR_12, "%s frame buffer device\n", VAR_12->fix.id);

 return 0;

err:
 if (VAR_12->screen_base) {
  FUNC_6(VAR_12->screen_base);
  FUNC_12(VAR_9, 0);
 }
 if (VAR_11->gp_regs) {
  FUNC_6(VAR_11->gp_regs);
  FUNC_12(VAR_9, 1);
 }
 if (VAR_11->dc_regs) {
  FUNC_6(VAR_11->dc_regs);
  FUNC_12(VAR_9, 2);
 }
 if (VAR_11->vp_regs) {
  FUNC_6(VAR_11->vp_regs);
  FUNC_12(VAR_9, 3);
 }

 FUNC_1(&VAR_12->cmap);
 FUNC_4(VAR_12);

 return VAR_13;
}
