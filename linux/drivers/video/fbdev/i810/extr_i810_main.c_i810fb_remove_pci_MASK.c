
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct i810fb_par {int dummy; } ;
struct fb_info {struct i810fb_par* par; } ;


 int FUNC_0 (struct fb_info*,struct i810fb_par*) ;
 struct fb_info* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct fb_info*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_1(VAR_0);
 struct i810fb_par *VAR_2 = VAR_1->par;

 FUNC_3(VAR_1);
 FUNC_0(VAR_1, VAR_2);
 FUNC_2("cleanup_module:  unloaded i810 framebuffer device\n");
}
