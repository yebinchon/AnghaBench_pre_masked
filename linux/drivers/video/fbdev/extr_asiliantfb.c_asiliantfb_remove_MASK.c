
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct fb_info {int screen_base; int cmap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ) ;
 struct fb_info* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_3(VAR_0);

 FUNC_7(VAR_1);
 FUNC_0(&VAR_1->cmap);
 FUNC_2(VAR_1->screen_base);
 FUNC_6(FUNC_5(VAR_0, 0), FUNC_4(VAR_0, 0));
 FUNC_1(VAR_1);
}
