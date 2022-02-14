
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct imstt_par {int dc_regs; int cmap_regs; } ;
struct TYPE_2__ {int smem_start; } ;
struct fb_info {TYPE_1__ fix; int screen_base; struct imstt_par* par; } ;


 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int ) ;
 struct fb_info* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct fb_info*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_2(VAR_0);
 struct imstt_par *VAR_2 = VAR_1->par;
 int VAR_3 = FUNC_3(VAR_0, 0);

 FUNC_5(VAR_1);
 FUNC_1(VAR_2->cmap_regs);
 FUNC_1(VAR_2->dc_regs);
 FUNC_1(VAR_1->screen_base);
 FUNC_4(VAR_1->fix.smem_start, VAR_3);
 FUNC_0(VAR_1);
}
