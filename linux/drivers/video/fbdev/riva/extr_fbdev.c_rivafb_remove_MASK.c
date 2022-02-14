
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Architecture; int PRAMIN; } ;
struct riva_par {TYPE_1__ riva; int ctrl_base; int wc_cookie; int EDID; } ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int addr; } ;
struct fb_info {TYPE_2__ pixmap; int screen_base; struct riva_par* par; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct fb_info* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct fb_info*) ;
 int FUNC_9 (struct riva_par*) ;
 int FUNC_10 (struct fb_info*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_1)
{
 struct fb_info *VAR_2 = FUNC_6(VAR_1);
 struct riva_par *VAR_3 = VAR_2->par;

 FUNC_0();






 FUNC_10(VAR_2);

 FUNC_8(VAR_2);
 FUNC_2(VAR_3->wc_cookie);
 FUNC_4(VAR_3->ctrl_base);
 FUNC_4(VAR_2->screen_base);
 if (VAR_3->riva.Architecture == VAR_0)
  FUNC_4(VAR_3->riva.PRAMIN);
 FUNC_7(VAR_1);
 FUNC_5(VAR_2->pixmap.addr);
 FUNC_3(VAR_2);
 FUNC_1();
}
