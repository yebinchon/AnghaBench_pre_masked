
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct kyrofb_info {int wc_cookie; int regbase; } ;
struct fb_info {int screen_base; struct kyrofb_info* par; } ;
struct TYPE_2__ {scalar_t__ ulOverlayOffset; scalar_t__ ulNextFreeVidMem; int pSTGReg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct pci_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (int ) ;
 struct fb_info* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct fb_info*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 struct fb_info *VAR_2 = FUNC_6(VAR_1);
 struct kyrofb_info *VAR_3 = VAR_2->par;


 FUNC_2(VAR_0.pSTGReg);
 FUNC_0(VAR_0.pSTGReg);


 FUNC_1(VAR_0.pSTGReg, VAR_1);

 VAR_0.ulNextFreeVidMem = 0;
 VAR_0.ulOverlayOffset = 0;

 FUNC_5(VAR_2->screen_base);
 FUNC_5(VAR_3->regbase);

 FUNC_3(VAR_3->wc_cookie);

 FUNC_7(VAR_2);
 FUNC_4(VAR_2);
}
