
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct lxfb_par {int * vp_regs; int * dc_regs; int * gp_regs; } ;
struct TYPE_2__ {int smem_start; int smem_len; } ;
struct fb_info {TYPE_1__ fix; int * screen_base; struct lxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pci_dev*) ;
 void* FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*,int,char*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct lxfb_par*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_6, struct pci_dev *VAR_7)
{
 struct lxfb_par *VAR_8 = VAR_6->par;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_7);

 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_7, 0, "lxfb-framebuffer");

 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_7, 1, "lxfb-gp");

 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_7, 2, "lxfb-vg");

 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_7, 3, "lxfb-vp");

 if (VAR_9)
  return VAR_9;

 VAR_6->fix.smem_start = FUNC_6(VAR_7, 0);
 VAR_6->fix.smem_len = VAR_5 ? VAR_5 : FUNC_2();

 VAR_6->screen_base = FUNC_1(VAR_6->fix.smem_start, VAR_6->fix.smem_len);

 VAR_9 = -VAR_4;

 if (VAR_6->screen_base == ((void*)0))
  return VAR_9;

 VAR_8->gp_regs = FUNC_4(VAR_7, 1);

 if (VAR_8->gp_regs == ((void*)0))
  return VAR_9;

 VAR_8->dc_regs = FUNC_4(VAR_7, 2);

 if (VAR_8->dc_regs == ((void*)0))
  return VAR_9;

 VAR_8->vp_regs = FUNC_4(VAR_7, 3);

 if (VAR_8->vp_regs == ((void*)0))
  return VAR_9;

 FUNC_7(VAR_8, VAR_1, VAR_3);
 FUNC_7(VAR_8, VAR_0, VAR_6->fix.smem_start & 0xFF000000);
 FUNC_7(VAR_8, VAR_1, VAR_2);

 FUNC_0(&VAR_7->dev, "%d KB of video memory at 0x%lx\n",
   VAR_6->fix.smem_len / 1024, VAR_6->fix.smem_start);

 return 0;
}
