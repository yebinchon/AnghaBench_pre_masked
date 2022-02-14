
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct gxt4500_par {int regs; int wc_cookie; } ;
struct fb_info {int screen_base; int cmap; struct gxt4500_par* par; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int ) ;
 struct fb_info* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct fb_info*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_4(VAR_0);
 struct gxt4500_par *VAR_2;

 if (!VAR_1)
  return;
 VAR_2 = VAR_1->par;
 FUNC_8(VAR_1);
 FUNC_0(VAR_2->wc_cookie);
 FUNC_1(&VAR_1->cmap);
 FUNC_3(VAR_2->regs);
 FUNC_3(VAR_1->screen_base);
 FUNC_7(FUNC_6(VAR_0, 0),
      FUNC_5(VAR_0, 0));
 FUNC_7(FUNC_6(VAR_0, 1),
      FUNC_5(VAR_0, 1));
 FUNC_2(VAR_1);
}
