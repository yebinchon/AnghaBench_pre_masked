
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {int pm_state; } ;
struct pci_dev {int dummy; } ;
struct fb_info {struct savagefb_par* par; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct fb_info*,int ) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 struct fb_info* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct savagefb_par*) ;
 int FUNC_10 (struct savagefb_par*) ;
 int FUNC_11 (int ,struct fb_info*) ;
 int FUNC_12 (struct fb_info*) ;

__attribute__((used)) static int FUNC_13(struct pci_dev* VAR_4)
{
 struct fb_info *VAR_5 = FUNC_5(VAR_4);
 struct savagefb_par *VAR_6 = VAR_5->par;
 int VAR_7 = VAR_6->pm_state;

 FUNC_0("savage_resume");

 VAR_6->pm_state = VAR_3;





 if (VAR_7 == VAR_2) {
  FUNC_8(VAR_4, VAR_1);
  return 0;
 }

 FUNC_1();

 FUNC_8(VAR_4, VAR_1);
 FUNC_6(VAR_4);

 if (FUNC_4(VAR_4))
  FUNC_0("err");

 FUNC_7(VAR_4);
 FUNC_9(VAR_6);
 FUNC_10(VAR_6);
 FUNC_12(VAR_5);
 FUNC_3(VAR_5, 0);
 FUNC_11(VAR_0, VAR_5);
 FUNC_2();

 return 0;
}
