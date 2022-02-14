
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct fb_info {int screen_base; int cmap; struct arkfb_info* par; } ;
struct arkfb_info {int dac; int wc_cookie; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fb_info*) ;
 struct fb_info* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_4(VAR_0);

 if (VAR_1) {
  struct arkfb_info *VAR_2 = VAR_1->par;
  FUNC_0(VAR_2->wc_cookie);
  FUNC_1(VAR_2->dac);
  FUNC_7(VAR_1);
  FUNC_2(&VAR_1->cmap);

  FUNC_5(VAR_0, VAR_1->screen_base);
  FUNC_6(VAR_0);


  FUNC_3(VAR_1);
 }
}
