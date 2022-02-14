
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8623fb_info {int mmio_base; int wc_cookie; } ;
struct pci_dev {int dummy; } ;
struct fb_info {int screen_base; int cmap; struct vt8623fb_info* par; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 struct fb_info* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1) {
  struct vt8623fb_info *VAR_2 = VAR_1->par;

  FUNC_0(VAR_2->wc_cookie);
  FUNC_6(VAR_1);
  FUNC_1(&VAR_1->cmap);

  FUNC_4(VAR_0, VAR_1->screen_base);
  FUNC_4(VAR_0, VAR_2->mmio_base);
  FUNC_5(VAR_0);


  FUNC_2(VAR_1);
 }
}
