
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct savagefb_par {scalar_t__ pm_state; int save; } ;
struct TYPE_10__ {scalar_t__ event; } ;
struct TYPE_7__ {TYPE_4__ power_state; } ;
struct TYPE_8__ {TYPE_1__ power; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct fb_info {TYPE_3__* fbops; struct savagefb_par* par; } ;
typedef TYPE_4__ pm_message_t ;
struct TYPE_9__ {int (* fb_sync ) (struct fb_info*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct fb_info*,int) ;
 int FUNC_4 (struct pci_dev*,TYPE_4__) ;
 int FUNC_5 (struct pci_dev*) ;
 struct fb_info* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct savagefb_par*) ;
 int FUNC_10 (struct savagefb_par*,int *) ;
 int FUNC_11 (int ,struct fb_info*) ;
 int FUNC_12 (struct fb_info*) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_3, pm_message_t VAR_4)
{
 struct fb_info *VAR_5 = FUNC_6(VAR_3);
 struct savagefb_par *VAR_6 = VAR_5->par;

 FUNC_0("savagefb_suspend");

 if (VAR_4.event == VAR_2)
  VAR_4.event = VAR_1;
 VAR_6->pm_state = VAR_4.event;
 VAR_3->dev.power.power_state = VAR_4;





 if (VAR_4.event == VAR_1)
  return 0;

 FUNC_1();
 FUNC_3(VAR_5, 1);

 if (VAR_5->fbops->fb_sync)
  VAR_5->fbops->fb_sync(VAR_5);

 FUNC_11(VAR_0, VAR_5);
 FUNC_10(VAR_6, &VAR_6->save);
 FUNC_9(VAR_6);
 FUNC_7(VAR_3);
 FUNC_5(VAR_3);
 FUNC_8(VAR_3, FUNC_4(VAR_3, VAR_4));
 FUNC_2();

 return 0;
}
