
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm3_par {int v_regs; int wc_cookie; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct fb_fix_screeninfo {int mmio_len; int mmio_start; int smem_len; int smem_start; } ;
struct fb_info {TYPE_1__ pixmap; int screen_base; int cmap; struct pm3_par* par; struct fb_fix_screeninfo fix; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct fb_info* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_5(VAR_0);

 if (VAR_1) {
  struct fb_fix_screeninfo *VAR_2 = &VAR_1->fix;
  struct pm3_par *VAR_3 = VAR_1->par;

  FUNC_7(VAR_1);
  FUNC_1(&VAR_1->cmap);

  FUNC_0(VAR_3->wc_cookie);
  FUNC_3(VAR_1->screen_base);
  FUNC_6(VAR_2->smem_start, VAR_2->smem_len);
  FUNC_3(VAR_3->v_regs);
  FUNC_6(VAR_2->mmio_start, VAR_2->mmio_len);

  FUNC_4(VAR_1->pixmap.addr);
  FUNC_2(VAR_1);
 }
}
