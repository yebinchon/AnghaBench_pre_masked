
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nvidia_par {int REGS; int wc_cookie; } ;
struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {int modedb; } ;
struct fb_info {TYPE_1__ pixmap; TYPE_2__ monspecs; int screen_base; struct nvidia_par* par; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nvidia_par*) ;
 int FUNC_8 (struct nvidia_par*) ;
 struct fb_info* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct fb_info*) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_9(VAR_0);
 struct nvidia_par *VAR_2 = VAR_1->par;

 FUNC_0();

 FUNC_11(VAR_1);

 FUNC_7(VAR_2);
 FUNC_2(VAR_2->wc_cookie);
 FUNC_5(VAR_1->screen_base);
 FUNC_3(VAR_1->monspecs.modedb);
 FUNC_8(VAR_2);
 FUNC_5(VAR_2->REGS);
 FUNC_10(VAR_0);
 FUNC_6(VAR_1->pixmap.addr);
 FUNC_4(VAR_1);
 FUNC_1();
}
