
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct lxfb_par {int vp_regs; int dc_regs; int gp_regs; } ;
struct fb_info {int cmap; int screen_base; struct lxfb_par* par; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ) ;
 struct fb_info* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct fb_info*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_3(VAR_0);
 struct lxfb_par *VAR_2 = VAR_1->par;

 FUNC_5(VAR_1);

 FUNC_2(VAR_1->screen_base);
 FUNC_4(VAR_0, 0);

 FUNC_2(VAR_2->gp_regs);
 FUNC_4(VAR_0, 1);

 FUNC_2(VAR_2->dc_regs);
 FUNC_4(VAR_0, 2);

 FUNC_2(VAR_2->vp_regs);
 FUNC_4(VAR_0, 3);

 FUNC_0(&VAR_1->cmap);
 FUNC_1(VAR_1);
}
