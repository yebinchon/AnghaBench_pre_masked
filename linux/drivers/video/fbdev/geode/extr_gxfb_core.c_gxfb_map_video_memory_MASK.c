
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct gxfb_par {void* gp_regs; void* dc_regs; void* vid_regs; } ;
struct TYPE_2__ {int smem_start; int smem_len; } ;
struct fb_info {TYPE_1__ fix; int screen_base; struct gxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct pci_dev*) ;
 void* FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*,int,char*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct gxfb_par*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_3, struct pci_dev *VAR_4)
{
 struct gxfb_par *VAR_5 = VAR_3->par;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_4, 3, "gxfb (video processor)");
 if (VAR_6 < 0)
  return VAR_6;
 VAR_5->vid_regs = FUNC_4(VAR_4, 3);
 if (!VAR_5->vid_regs)
  return -VAR_1;

 VAR_6 = FUNC_5(VAR_4, 2, "gxfb (display controller)");
 if (VAR_6 < 0)
  return VAR_6;
 VAR_5->dc_regs = FUNC_4(VAR_4, 2);
 if (!VAR_5->dc_regs)
  return -VAR_1;

 VAR_6 = FUNC_5(VAR_4, 1, "gxfb (graphics processor)");
 if (VAR_6 < 0)
  return VAR_6;
 VAR_5->gp_regs = FUNC_4(VAR_4, 1);

 if (!VAR_5->gp_regs)
  return -VAR_1;

 VAR_6 = FUNC_5(VAR_4, 0, "gxfb (framebuffer)");
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3->fix.smem_start = FUNC_6(VAR_4, 0);
 VAR_3->fix.smem_len = VAR_2 ? VAR_2 : FUNC_1();
 VAR_3->screen_base = FUNC_2(VAR_3->fix.smem_start,
           VAR_3->fix.smem_len);
 if (!VAR_3->screen_base)
  return -VAR_1;




 FUNC_7(VAR_5, VAR_0, VAR_3->fix.smem_start & 0xFF000000);

 FUNC_0(&VAR_4->dev, "%d KiB of video memory at 0x%lx\n",
   VAR_3->fix.smem_len / 1024, VAR_3->fix.smem_start);

 return 0;
}
