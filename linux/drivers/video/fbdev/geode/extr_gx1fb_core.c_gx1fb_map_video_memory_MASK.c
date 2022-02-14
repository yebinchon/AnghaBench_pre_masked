
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct geodefb_par {void* dc_regs; int vid_regs; } ;
struct TYPE_2__ {unsigned int smem_start; int smem_len; } ;
struct fb_info {TYPE_1__ fix; void* screen_base; struct geodefb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,unsigned int) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 () ;
 void* FUNC_3 (unsigned int,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ,char*) ;
 int FUNC_7 (unsigned int,int,char*) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_3, struct pci_dev *VAR_4)
{
 struct geodefb_par *VAR_5 = VAR_3->par;
 unsigned VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2();
 if (!VAR_6)
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_6(VAR_4, 0, "gx1fb (video)");
 if (VAR_8 < 0)
  return VAR_8;
 VAR_5->vid_regs = FUNC_5(VAR_4, 0);
 if (!VAR_5->vid_regs)
  return -VAR_2;

 if (!FUNC_7(VAR_6 + 0x8300, 0x100, "gx1fb (display controller)"))
  return -VAR_0;
 VAR_5->dc_regs = FUNC_3(VAR_6 + 0x8300, 0x100);
 if (!VAR_5->dc_regs)
  return -VAR_2;

 if ((VAR_7 = FUNC_1()) < 0)
  return -VAR_2;
 VAR_3->fix.smem_start = VAR_6 + 0x800000;
 VAR_3->fix.smem_len = VAR_7;
 VAR_3->screen_base = FUNC_3(VAR_3->fix.smem_start, VAR_3->fix.smem_len);
 if (!VAR_3->screen_base)
  return -VAR_2;

 FUNC_0(&VAR_4->dev, "%d Kibyte of video memory at 0x%lx\n",
   VAR_3->fix.smem_len / 1024, VAR_3->fix.smem_start);

 return 0;
}
