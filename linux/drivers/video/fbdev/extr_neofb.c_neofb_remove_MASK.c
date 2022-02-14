
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int modedb; } ;
struct fb_info {TYPE_1__ monspecs; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct fb_info*) ;
 struct fb_info* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_5(VAR_0);

 FUNC_0("neofb_remove");

 if (VAR_1) {
  FUNC_6(VAR_1);

  FUNC_4(VAR_1);
  FUNC_1(VAR_1->monspecs.modedb);
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
 }
}
